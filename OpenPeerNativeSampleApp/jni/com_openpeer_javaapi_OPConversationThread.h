/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_openpeer_javaapi_OPConversationThread */

#ifndef _Included_com_openpeer_javaapi_OPConversationThread
#define _Included_com_openpeer_javaapi_OPConversationThread
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    toString
 * Signature: (Lcom/openpeer/javaapi/MessageDeliveryStates;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPConversationThread_toString__Lcom_openpeer_javaapi_MessageDeliveryStates_2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    toString
 * Signature: (Lcom/openpeer/javaapi/ContactStates;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPConversationThread_toString__Lcom_openpeer_javaapi_ContactStates_2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    toDebugString
 * Signature: (Lcom/openpeer/javaapi/OPConversationThread;Z)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPConversationThread_toDebugString
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    create
 * Signature: (Lcom/openpeer/javaapi/OPAccount;Ljava/util/List;)Lcom/openpeer/javaapi/OPConversationThread;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPConversationThread_create
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    getConversationThreads
 * Signature: (Lcom/openpeer/javaapi/OPAccount;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPConversationThread_getConversationThreads
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    getConversationThreadByID
 * Signature: (Lcom/openpeer/javaapi/OPAccount;Ljava/lang/String;)Lcom/openpeer/javaapi/OPConversationThread;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPConversationThread_getConversationThreadByID
  (JNIEnv *, jclass, jobject, jstring);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    getStableID
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_openpeer_javaapi_OPConversationThread_getStableID
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    getThreadID
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPConversationThread_getThreadID
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    amIHost
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPConversationThread_amIHost
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    getAssociatedAccount
 * Signature: ()Lcom/openpeer/javaapi/OPAccount;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPConversationThread_getAssociatedAccount
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    getContacts
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPConversationThread_getContacts
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    getIdentityContactList
 * Signature: (Lcom/openpeer/javaapi/OPContact;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPConversationThread_getIdentityContactList
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    getContactState
 * Signature: (Lcom/openpeer/javaapi/OPContact;)Lcom/openpeer/javaapi/ContactStates;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPConversationThread_getContactState
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    addContacts
 * Signature: (Ljava/util/List;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPConversationThread_addContacts
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    removeContacts
 * Signature: (Ljava/util/List;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPConversationThread_removeContacts
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    sendMessage
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPConversationThread_sendMessage
  (JNIEnv *, jobject, jstring, jstring, jstring, jboolean);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    getMessage
 * Signature: (Ljava/lang/String;Lcom/openpeer/javaapi/OPContact;Ljava/lang/String;Ljava/lang/String;Landroid/text/format/Time;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPConversationThread_getMessage
  (JNIEnv *, jobject, jstring, jobject, jstring, jstring, jobject);

/*
 * Class:     com_openpeer_javaapi_OPConversationThread
 * Method:    getMessageDeliveryState
 * Signature: (Ljava/lang/String;Lcom/openpeer/javaapi/MessageDeliveryStates;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPConversationThread_getMessageDeliveryState
  (JNIEnv *, jobject, jstring, jobject);

#ifdef __cplusplus
}
#endif
#endif
