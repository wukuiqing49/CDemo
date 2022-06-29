package com.wkq.cdemo;

/**
 * @author wkq
 * @date 2022年06月28日 16:46
 * @des
 */

public class MyJniUtil {
    //加载 so库
    static{
        //hellow 名字必须和Cmake 中生成的名字一致
        System.loadLibrary("hellow");
    }

    //  jni 调用
    public  static native String stringFromJNI();

}
