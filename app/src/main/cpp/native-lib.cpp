#include <jni.h>
#include <string>
// extern "C" :C++兼容C代码的
// JNIEXPORT  类似于public修饰符
// JNICALL   用来表示函数的调用规范
// jstring  返回数据类型 这里是String
// Java_<包名>_<类名>_<方法名>
extern "C"
JNIEXPORT jstring JNICALL Java_com_wkq_cdemo_MyJniUtil_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "1122211";
    return env->NewStringUTF(hello.c_str());
}