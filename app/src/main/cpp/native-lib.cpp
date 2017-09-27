#include <jni.h>
#include <string>

extern "C"
jstring
Java_camera_yezi_com_opencamera_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
