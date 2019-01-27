# hello-world
write hello world for git beginner 
don't add any unused text in this text.
Learning more if you click the following link.
https://stackoverflow.com/questions/1636333/download-file-using-libcurl-in-c-c

https://blog.csdn.net/DaSo_CSDN/article/details/77587916

libcurl c++ http post  file
https://stackoverflow.com/questions/2657318/how-can-i-curl-post-a-file-using-file-pointer-in-c
https://curl.haxx.se/libcurl/c/example.html
https://cboard.cprogramming.com/networking-device-communication/76842-file-upload-libcurl.html



curllib write file
https://blog.csdn.net/mtour/article/details/40304925?utm_source=blogxgwz9




https://github.com/nmoinvaz/minizip
complie minizip (make the following content in a bat file)

::------------------bat start--------------
@echo off
cd /d %~dp0
mkdir build32 & pushd build32
cmake -G "Visual Studio 15 2017" ..
popd
mkdir build64 & pushd build64
cmake -G "Visual Studio 15 2017 Win64" ..
popd
cmake --build build32 --config Release
cmake --build build64 --config Release
pause

::cmake . -DTEST_ON=ON  -USE_LZMA=OFF -DCMAKE_GENERATOR_PLATFORM=x64
::cmake --build . --config Release
::------------------bat end---------------


--------------minizip example-----------
#include "mz.h"
#include "mz_os.h"
#include "mz_strm.h"
#include "mz_strm_buf.h"
#include "mz_strm_split.h"
#include "mz_zip.h"
#include "mz_zip_rw.h"

#include <stdio.h>  /* printf */

/***************************************************************************/
#ifdef _WIN64 
	#pragma comment(lib, "libminizip_x64.lib")
	#pragma comment(lib, "zlibstaticd_64.lib")
#else
	#pragma comment(lib, "libminizipd_x84.lib")
	#pragma comment(lib, "zlibstaticd_x86.lib")
#endif // _WIN64 
void test()
{
	minizip_opt options;

	int32_t err = 0;
	const char *path = NULL;
	const char *password = NULL;
	const char *destination = NULL;

	memset(&options, 0, sizeof(options));

	options.compress_method = MZ_COMPRESS_METHOD_DEFLATE;
	options.compress_level = MZ_COMPRESS_LEVEL_DEFAULT;
	options.overwrite = 1;
	options.append = 0;
	options.include_path = 0;

	const char* p[] = { "hehe.txt", "sss.txt" };

	err = minizip_add("123.zip", NULL, &options, 2, p);
	//printf("err = %d\n", err);
}

int main(int argc, const char *argv[])
{
	test();
	return 0;
}

