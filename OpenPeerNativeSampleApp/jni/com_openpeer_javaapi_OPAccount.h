/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_openpeer_javaapi_OPAccount */

#ifndef _Included_com_openpeer_javaapi_OPAccount
#define _Included_com_openpeer_javaapi_OPAccount
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    toString
 * Signature: (Lcom/openpeer/javaapi/AccountStates;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPAccount_toString
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    toDebugString
 * Signature: (Lcom/openpeer/javaapi/OPAccount;Ljava/lang/Boolean;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPAccount_toDebugString
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    login
 * Signature: (Lcom/openpeer/javaapi/OPAccountDelegate;Lcom/openpeer/javaapi/OPConversationThreadDelegate;Lcom/openpeer/javaapi/OPCallDelegate;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;)Lcom/openpeer/javaapi/OPAccount;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPAccount_login
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring, jstring, jstring, jstring, jstring, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    relogin
 * Signature: (Lcom/openpeer/javaapi/OPAccountDelegate;Lcom/openpeer/javaapi/OPConversationThreadDelegate;Lcom/openpeer/javaapi/OPCallDelegate;Ljava/lang/String;Lcom/openpeer/javaapi/OPElement;)Lcom/openpeer/javaapi/OPAccount;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPAccount_relogin
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    getID
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_openpeer_javaapi_OPAccount_getID
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    getState
 * Signature: (ILjava/lang/String;)Lcom/openpeer/javaapi/AccountStates;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPAccount_getState
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    getReloginInformation
 * Signature: ()Lcom/openpeer/javaapi/OPElement;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPAccount_getReloginInformation
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    getLocationID
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPAccount_getLocationID
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    shutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPAccount_shutdown
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    savePeerFilePrivate
 * Signature: ()Lcom/openpeer/javaapi/OPElement;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPAccount_savePeerFilePrivate
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    getAssociatedIdentities
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPAccount_getAssociatedIdentities
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    removeIdentities
 * Signature: (Ljava/util/List;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPAccount_removeIdentities
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    getInnerBrowserWindowFrameURL
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPAccount_getInnerBrowserWindowFrameURL
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    notifyBrowserWindowVisible
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPAccount_notifyBrowserWindowVisible
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    notifyBrowserWindowClosed
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPAccount_notifyBrowserWindowClosed
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    getNextMessageForInnerBrowerWindowFrame
 * Signature: ()Lcom/openpeer/javaapi/OPElement;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPAccount_getNextMessageForInnerBrowerWindowFrame
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPAccount
 * Method:    handleMessageFromInnerBrowserWindowFrame
 * Signature: (Lcom/openpeer/javaapi/OPElement;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPAccount_handleMessageFromInnerBrowserWindowFrame
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
