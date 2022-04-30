// Save as "HelloJNI.c"
#include <jni.h>     // JNI header provided by JDK
#include <stdio.h>      // C Standard IO Header
#include "myjni_HelloJNI.h"   // Generated

// Implementation of the native method sayHello()
JNIEXPORT void JNICALL   Java_myjni_HelloJNI_sayHello(JNIEnv *env, jobject thisObj) {
	printf("Hello World!\n");
	return;
}

JNIEXPORT void JNICALL Java_myjni_HelloJNI_modifyInstanceVariable
(JNIEnv *env, jobject thisObj) {
	// Get a reference to this object's class
	jclass thisClass = env->GetObjectClass(thisObj);

	// int
	// Get the Field ID of the instance variables "number"
	jfieldID fidNumber = env->GetFieldID(thisClass, "number", "I");
	if (NULL == fidNumber) return;

	// Get the int given the Field ID
	jint number = env->GetIntField(thisObj, fidNumber);
	printf("In C, the int is %d\n", number);

	// Change the variable
	number = 99;
	env->SetIntField(thisObj, fidNumber, number);

	// Get the Field ID of the instance variables "message"
	jfieldID fidMessage = env->GetFieldID(thisClass, "message", "Ljava/lang/String;");
	if (NULL == fidMessage) return;

	// String
	// Get the object given the Field ID
	jstring message = (jstring)env->GetObjectField(thisObj, fidMessage);

	// Create a C-string with the JNI String
	const char *cStr = env->GetStringUTFChars(message, NULL);
	if (NULL == cStr) return;

	printf("In C, the string is %s\n", cStr);
	env->ReleaseStringUTFChars(message, cStr);

	// Create a new C-string and assign to the JNI string
	message = env->NewStringUTF("Hello from C");
	if (NULL == message) return;

	// modify the instance variables
	env->SetObjectField(thisObj, fidMessage, message);
	fflush(stdout);
}

JNIEXPORT void JNICALL Java_myjni_HelloJNI_modifyStaticVariable
(JNIEnv *env, jobject thisObj) {
	// Get a reference to this object's class
	jclass cls = env->GetObjectClass(thisObj);

	// Read the int static variable and modify its value
	jfieldID fidNumber = env->GetStaticFieldID(cls, "dnumber", "D");
	if (NULL == fidNumber) return;
	jdouble number = env->GetStaticDoubleField(cls, fidNumber);
	printf("In C, the double is %f\n", number);
	number = 77.88;
	env->SetStaticDoubleField(cls, fidNumber, number);
	fflush(stdout);
}

JNIEXPORT void JNICALL Java_myjni_HelloJNI_nativeMethod
(JNIEnv *env, jobject thisObj) {

	// Get a class reference for this object
	jclass thisClass = env->GetObjectClass(thisObj);

	// Get the Method ID for method "callback", which takes no arg and return void
	jmethodID midCallBack = env->GetMethodID(thisClass, "callback", "()V");
	if (NULL == midCallBack) return;
	printf("In C, call back Java's callback()\n");
	// Call back the method (which returns void), baed on the Method ID
	env->CallVoidMethod(thisObj, midCallBack);

	jmethodID midCallBackStr = env->GetMethodID(thisClass,
		"callback", "(Ljava/lang/String;)V");
	if (NULL == midCallBackStr) return;
	printf("In C, call back Java's called(String)\n");
	jstring message = env->NewStringUTF("Hello from C");
	env->CallVoidMethod(thisObj, midCallBackStr, message);

	jmethodID midCallBackAverage = env->GetMethodID(thisClass,
		"callbackAverage", "(II)D");
	if (NULL == midCallBackAverage) return;
	jdouble average = env->CallDoubleMethod(thisObj, midCallBackAverage, 2, 3);
	printf("In C, the average is %f\n", average);

	jmethodID midCallBackStatic = env->GetStaticMethodID(thisClass,
		"callbackStatic", "()Ljava/lang/String;");
	if (NULL == midCallBackStatic) return;
	jstring resultJNIStr = (jstring)env->CallStaticObjectMethod(thisClass, midCallBackStatic);
	const char *resultCStr = env->GetStringUTFChars(resultJNIStr, NULL);
	if (NULL == resultCStr) return;
	printf("In C, the returned string is %s\n", resultCStr);
	env->ReleaseStringUTFChars(resultJNIStr, resultCStr);
	fflush(stdout);
}

JNIEXPORT jobject JNICALL Java_myjni_HelloJNI_getIntegerObject
(JNIEnv *env, jobject thisObj, jint number) {
	// Get a class reference for java.lang.Integer
	jclass cls = env->FindClass("java/lang/Integer");

	// Get the Method ID of the constructor which takes an int
	jmethodID midInit = env->GetMethodID(cls, "<init>", "(I)V");
	if (NULL == midInit) return NULL;
	// Call back constructor to allocate a new instance, with an int argument
	jobject newObj = env->NewObject(cls, midInit, number);

	// Try running the toString() on this newly create object
	jmethodID midToString = env->GetMethodID(cls, "toString", "()Ljava/lang/String;");
	if (NULL == midToString) return NULL;
	jstring resultStr = (jstring)env->CallObjectMethod(newObj, midToString);
	const char *resultCStr = env->GetStringUTFChars(resultStr, NULL);
	printf("In C: the number is %s\n", resultCStr);

	//May need to call releaseStringUTFChars() before return
	return newObj;
}

JNIEXPORT jobjectArray JNICALL Java_myjni_HelloJNI_sumAndAverage
(JNIEnv *env, jobject thisObj, jobjectArray inJNIArray) {
	// Get a class reference for java.lang.Integer
	jclass classInteger = env->FindClass("java/lang/Integer");
	// Use Integer.intValue() to retrieve the int
	jmethodID midIntValue = env->GetMethodID(classInteger, "intValue", "()I");
	if (NULL == midIntValue) return NULL;

	// Get the value of each Integer object in the array
	jsize length = env->GetArrayLength(inJNIArray);
	jint sum = 0;
	int i;
	for (i = 0; i < length; i++) {
		jobject objInteger = env->GetObjectArrayElement(inJNIArray, i);
		if (NULL == objInteger) return NULL;
		jint value = env->CallIntMethod(objInteger, midIntValue);
		sum += value;
	}
	double average = (double)sum / length;
	printf("In C, the sum is %d\n", sum);
	printf("In C, the average is %f\n", average);

	// Get a class reference for java.lang.Double
	jclass classDouble = env->FindClass("java/lang/Double");

	// Allocate a jobjectArray of 2 java.lang.Double
	jobjectArray outJNIArray = env->NewObjectArray(2, classDouble, NULL);

	// Construct 2 Double objects by calling the constructor
	jmethodID midDoubleInit = env->GetMethodID(classDouble, "<init>", "(D)V");
	if (NULL == midDoubleInit) return NULL;
	jobject objSum = env->NewObject(classDouble, midDoubleInit, (double)sum);
	jobject objAve = env->NewObject(classDouble, midDoubleInit, average);
	// Set to the jobjectArray
	env->SetObjectArrayElement(outJNIArray, 0, objSum);
	env->SetObjectArrayElement(outJNIArray, 1, objAve);
	fflush(stdout);
	return outJNIArray;
}

static jclass classInteger;
static jmethodID midIntegerInit;

jobject getIntegerx(JNIEnv *env, jobject thisObj, jint number) {

	//// Get a class reference for java.lang.Integer if missing
	//if (NULL == classInteger) {
	//	printf("Find java.lang.Integer\n");
	//	classInteger = env->FindClass("java/lang/Integer");
	//}
	
	// Get a class reference for java.lang.Integer if missing
	if (NULL == classInteger) {
		printf("Find java.lang.Integer\n");
		// FindClass returns a local reference
		jclass classIntegerLocal = env->FindClass("java/lang/Integer");
		// Create a global reference from the local reference
		classInteger = (jclass)env->NewGlobalRef(classIntegerLocal);
		// No longer need the local reference, free it!
		env->DeleteLocalRef(classIntegerLocal);
	}

	if (NULL == classInteger) return NULL;

	// Get the Method ID of the Integer's constructor if missing
	if (NULL == midIntegerInit) {
		printf("Get Method ID for java.lang.Integer's constructor\n");
		midIntegerInit = env->GetMethodID(classInteger, "<init>", "(I)V");
	}
	if (NULL == midIntegerInit) return NULL;

	// Call back constructor to allocate a new instance, with an int argument
	jobject newObj = env->NewObject(classInteger, midIntegerInit, number);
	printf("In C, constructed java.lang.Integer with number %d\n", number);
	fflush(stdout);
	return newObj;
}

JNIEXPORT jobject JNICALL Java_myjni_HelloJNI_getIntegerXxxObject
(JNIEnv *env, jobject thisObj, jint number) {
	return getIntegerx(env, thisObj, number);
}

JNIEXPORT jobject JNICALL Java_myjni_HelloJNI_anotherGetIntegerObject
(JNIEnv *env, jobject thisObj, jint number) {
	return getIntegerx(env, thisObj, number);
}