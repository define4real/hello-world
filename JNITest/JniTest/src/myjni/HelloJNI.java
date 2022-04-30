package myjni;

public class HelloJNI {  // Save as HelloJNI.java
    static {
        System.loadLibrary("hello"); // Load native library hello.dll (Windows) or libhello.so (Unixes)
        //  at runtime
        // This library contains a native method called sayHello()
    }

    // Declare an instance native method sayHello() which receives no parameter and returns void
    private native void sayHello();

    // Test Driver
    //public static void main(String[] args) {
    //    new HelloJNI().sayHello();  // Create an instance and invoke the native method
    //}

    // Instance variables
    private int number = 88;
    private String message = "Hello from Java";
    // Static variables
    private static double dnumber = 55.66;

    // Declare a native method that modifies the instance variables
    private native void modifyInstanceVariable();
    private native void modifyStaticVariable();

    // Declare a native method that calls back the Java methods below
    private native void nativeMethod();

    // To be called back by the native code
    private void callback() {
        System.out.println("In Java");
    }

    private void callback(String message) {
        System.out.println("In Java with " + message);
    }

    private double callbackAverage(int n1, int n2) {
        return ((double)n1 + n2) / 2.0;
    }

    // Static method to be called back
    private static String callbackStatic() {
        return "From static Java method";
    }

    private native Integer getIntegerObject(int number);

    private native Double[] sumAndAverage(Integer[] numbers);

    // A native method that returns a java.lang.Integer with the given int.
    private native Integer getIntegerXxxObject(int number);

    // Another native method that also returns a java.lang.Integer with the given int.
    private native Integer anotherGetIntegerObject(int number);



    // Test Driver
    public static void main(String args[]) {
        HelloJNI test = new HelloJNI();
        test.sayHello();
        test.modifyInstanceVariable();
        System.out.println("In Java, int is " + test.number);
        System.out.println("In Java, String is " + test.message);

        test.modifyStaticVariable();
        System.out.println("In Java, the double is " + dnumber);

        test.nativeMethod();

        System.out.println("In Java, the number is :" + test.getIntegerObject(9999));

        Integer[] numbers = {11, 22, 32};  // auto-box
        Double[] results = test.sumAndAverage(numbers);
        System.out.println("In Java, the sum is " + results[0]);  // auto-unbox
        System.out.println("In Java, the average is " + results[1]);

        System.out.println(test.getIntegerXxxObject(1));
        System.out.println(test.getIntegerXxxObject(2));
        System.out.println(test.anotherGetIntegerObject(11));
        System.out.println(test.anotherGetIntegerObject(12));
        System.out.println(test.getIntegerXxxObject(3));
        System.out.println(test.anotherGetIntegerObject(13));
    }
}