#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_mikeh_somecpp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    int len;
    std::string str1 = " Hello ";
    std::string str2 = " World ";
    len = str2.size();
    std::string hello = "Hello from C++ MJH" + str1 + str2;  // toupper(
    return env->NewStringUTF(hello.c_str());
}
