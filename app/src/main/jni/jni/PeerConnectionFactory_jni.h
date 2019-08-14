// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/PeerConnectionFactory

#ifndef org_webrtc_PeerConnectionFactory_JNI
#define org_webrtc_PeerConnectionFactory_JNI

#include <jni.h>

#include "../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_PeerConnectionFactory[];
const char kClassPath_org_webrtc_PeerConnectionFactory[] = "org/webrtc/PeerConnectionFactory";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_PeerConnectionFactory_00024Options[];
const char kClassPath_org_webrtc_PeerConnectionFactory_00024Options[] =
    "org/webrtc/PeerConnectionFactory$Options";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_PeerConnectionFactory_clazz(nullptr);
#ifndef org_webrtc_PeerConnectionFactory_clazz_defined
#define org_webrtc_PeerConnectionFactory_clazz_defined
inline jclass org_webrtc_PeerConnectionFactory_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_PeerConnectionFactory,
      &g_org_webrtc_PeerConnectionFactory_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_webrtc_PeerConnectionFactory_00024Options_clazz(nullptr);
#ifndef org_webrtc_PeerConnectionFactory_00024Options_clazz_defined
#define org_webrtc_PeerConnectionFactory_00024Options_clazz_defined
inline jclass org_webrtc_PeerConnectionFactory_00024Options_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_PeerConnectionFactory_00024Options,
      &g_org_webrtc_PeerConnectionFactory_00024Options_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static void JNI_PeerConnectionFactory_InitializeAndroidGlobals(JNIEnv* env);

JNI_GENERATOR_EXPORT void Java_org_webrtc_PeerConnectionFactory_nativeInitializeAndroidGlobals(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_PeerConnectionFactory_InitializeAndroidGlobals(env);
}

static void JNI_PeerConnectionFactory_InitializeFieldTrials(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& fieldTrialsInitString);

JNI_GENERATOR_EXPORT void Java_org_webrtc_PeerConnectionFactory_nativeInitializeFieldTrials(
    JNIEnv* env,
    jclass jcaller,
    jstring fieldTrialsInitString) {
  return JNI_PeerConnectionFactory_InitializeFieldTrials(env,
      base::android::JavaParamRef<jstring>(env, fieldTrialsInitString));
}

static base::android::ScopedJavaLocalRef<jstring>
    JNI_PeerConnectionFactory_FindFieldTrialsFullName(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& name);

JNI_GENERATOR_EXPORT jstring Java_org_webrtc_PeerConnectionFactory_nativeFindFieldTrialsFullName(
    JNIEnv* env,
    jclass jcaller,
    jstring name) {
  return JNI_PeerConnectionFactory_FindFieldTrialsFullName(env,
      base::android::JavaParamRef<jstring>(env, name)).Release();
}

static void JNI_PeerConnectionFactory_InitializeInternalTracer(JNIEnv* env);

JNI_GENERATOR_EXPORT void Java_org_webrtc_PeerConnectionFactory_nativeInitializeInternalTracer(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_PeerConnectionFactory_InitializeInternalTracer(env);
}

static void JNI_PeerConnectionFactory_ShutdownInternalTracer(JNIEnv* env);

JNI_GENERATOR_EXPORT void Java_org_webrtc_PeerConnectionFactory_nativeShutdownInternalTracer(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_PeerConnectionFactory_ShutdownInternalTracer(env);
}

static jboolean JNI_PeerConnectionFactory_StartInternalTracingCapture(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& tracingFilename);

JNI_GENERATOR_EXPORT jboolean
    Java_org_webrtc_PeerConnectionFactory_nativeStartInternalTracingCapture(
    JNIEnv* env,
    jclass jcaller,
    jstring tracingFilename) {
  return JNI_PeerConnectionFactory_StartInternalTracingCapture(env,
      base::android::JavaParamRef<jstring>(env, tracingFilename));
}

static void JNI_PeerConnectionFactory_StopInternalTracingCapture(JNIEnv* env);

JNI_GENERATOR_EXPORT void Java_org_webrtc_PeerConnectionFactory_nativeStopInternalTracingCapture(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_PeerConnectionFactory_StopInternalTracingCapture(env);
}

static base::android::ScopedJavaLocalRef<jobject>
    JNI_PeerConnectionFactory_CreatePeerConnectionFactory(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& context,
    const base::android::JavaParamRef<jobject>& options,
    jlong nativeAudioDeviceModule,
    jlong audioEncoderFactory,
    jlong audioDecoderFactory,
    const base::android::JavaParamRef<jobject>& encoderFactory,
    const base::android::JavaParamRef<jobject>& decoderFactory,
    jlong nativeAudioProcessor,
    jlong nativeFecControllerFactory,
    jlong nativeNetworkControllerFactory,
    jlong nativeNetworkStatePredictorFactory,
    jlong mediaTransportFactory);

JNI_GENERATOR_EXPORT jobject
    Java_org_webrtc_PeerConnectionFactory_nativeCreatePeerConnectionFactory(
    JNIEnv* env,
    jclass jcaller,
    jobject context,
    jobject options,
    jlong nativeAudioDeviceModule,
    jlong audioEncoderFactory,
    jlong audioDecoderFactory,
    jobject encoderFactory,
    jobject decoderFactory,
    jlong nativeAudioProcessor,
    jlong nativeFecControllerFactory,
    jlong nativeNetworkControllerFactory,
    jlong nativeNetworkStatePredictorFactory,
    jlong mediaTransportFactory) {
  return JNI_PeerConnectionFactory_CreatePeerConnectionFactory(env,
      base::android::JavaParamRef<jobject>(env, context), base::android::JavaParamRef<jobject>(env,
      options), nativeAudioDeviceModule, audioEncoderFactory, audioDecoderFactory,
      base::android::JavaParamRef<jobject>(env, encoderFactory),
      base::android::JavaParamRef<jobject>(env, decoderFactory), nativeAudioProcessor,
      nativeFecControllerFactory, nativeNetworkControllerFactory,
      nativeNetworkStatePredictorFactory, mediaTransportFactory).Release();
}

static jlong JNI_PeerConnectionFactory_CreatePeerConnection(JNIEnv* env, jlong factory,
    const base::android::JavaParamRef<jobject>& rtcConfig,
    const base::android::JavaParamRef<jobject>& constraints,
    jlong nativeObserver,
    const base::android::JavaParamRef<jobject>& sslCertificateVerifier);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_PeerConnectionFactory_nativeCreatePeerConnection(
    JNIEnv* env,
    jclass jcaller,
    jlong factory,
    jobject rtcConfig,
    jobject constraints,
    jlong nativeObserver,
    jobject sslCertificateVerifier) {
  return JNI_PeerConnectionFactory_CreatePeerConnection(env, factory,
      base::android::JavaParamRef<jobject>(env, rtcConfig),
      base::android::JavaParamRef<jobject>(env, constraints), nativeObserver,
      base::android::JavaParamRef<jobject>(env, sslCertificateVerifier));
}

static jlong JNI_PeerConnectionFactory_CreateLocalMediaStream(JNIEnv* env, jlong factory,
    const base::android::JavaParamRef<jstring>& label);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_PeerConnectionFactory_nativeCreateLocalMediaStream(
    JNIEnv* env,
    jclass jcaller,
    jlong factory,
    jstring label) {
  return JNI_PeerConnectionFactory_CreateLocalMediaStream(env, factory,
      base::android::JavaParamRef<jstring>(env, label));
}

static jlong JNI_PeerConnectionFactory_CreateVideoSource(JNIEnv* env, jlong factory,
    jboolean is_screencast,
    jboolean alignTimestamps);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_PeerConnectionFactory_nativeCreateVideoSource(
    JNIEnv* env,
    jclass jcaller,
    jlong factory,
    jboolean is_screencast,
    jboolean alignTimestamps) {
  return JNI_PeerConnectionFactory_CreateVideoSource(env, factory, is_screencast, alignTimestamps);
}

static jlong JNI_PeerConnectionFactory_CreateVideoTrack(JNIEnv* env, jlong factory,
    const base::android::JavaParamRef<jstring>& id,
    jlong nativeVideoSource);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_PeerConnectionFactory_nativeCreateVideoTrack(
    JNIEnv* env,
    jclass jcaller,
    jlong factory,
    jstring id,
    jlong nativeVideoSource) {
  return JNI_PeerConnectionFactory_CreateVideoTrack(env, factory,
      base::android::JavaParamRef<jstring>(env, id), nativeVideoSource);
}

static jlong JNI_PeerConnectionFactory_CreateAudioSource(JNIEnv* env, jlong factory,
    const base::android::JavaParamRef<jobject>& constraints);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_PeerConnectionFactory_nativeCreateAudioSource(
    JNIEnv* env,
    jclass jcaller,
    jlong factory,
    jobject constraints) {
  return JNI_PeerConnectionFactory_CreateAudioSource(env, factory,
      base::android::JavaParamRef<jobject>(env, constraints));
}

static jlong JNI_PeerConnectionFactory_CreateAudioTrack(JNIEnv* env, jlong factory,
    const base::android::JavaParamRef<jstring>& id,
    jlong nativeSource);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_PeerConnectionFactory_nativeCreateAudioTrack(
    JNIEnv* env,
    jclass jcaller,
    jlong factory,
    jstring id,
    jlong nativeSource) {
  return JNI_PeerConnectionFactory_CreateAudioTrack(env, factory,
      base::android::JavaParamRef<jstring>(env, id), nativeSource);
}

static jboolean JNI_PeerConnectionFactory_StartAecDump(JNIEnv* env, jlong factory,
    jint file_descriptor,
    jint filesize_limit_bytes);

JNI_GENERATOR_EXPORT jboolean Java_org_webrtc_PeerConnectionFactory_nativeStartAecDump(
    JNIEnv* env,
    jclass jcaller,
    jlong factory,
    jint file_descriptor,
    jint filesize_limit_bytes) {
  return JNI_PeerConnectionFactory_StartAecDump(env, factory, file_descriptor,
      filesize_limit_bytes);
}

static void JNI_PeerConnectionFactory_StopAecDump(JNIEnv* env, jlong factory);

JNI_GENERATOR_EXPORT void Java_org_webrtc_PeerConnectionFactory_nativeStopAecDump(
    JNIEnv* env,
    jclass jcaller,
    jlong factory) {
  return JNI_PeerConnectionFactory_StopAecDump(env, factory);
}

static void JNI_PeerConnectionFactory_FreeFactory(JNIEnv* env, jlong factory);

JNI_GENERATOR_EXPORT void Java_org_webrtc_PeerConnectionFactory_nativeFreeFactory(
    JNIEnv* env,
    jclass jcaller,
    jlong factory) {
  return JNI_PeerConnectionFactory_FreeFactory(env, factory);
}

static jlong JNI_PeerConnectionFactory_GetNativePeerConnectionFactory(JNIEnv* env, jlong factory);

JNI_GENERATOR_EXPORT jlong
    Java_org_webrtc_PeerConnectionFactory_nativeGetNativePeerConnectionFactory(
    JNIEnv* env,
    jclass jcaller,
    jlong factory) {
  return JNI_PeerConnectionFactory_GetNativePeerConnectionFactory(env, factory);
}

static void JNI_PeerConnectionFactory_InjectLoggable(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jniLogging,
    jint severity);

JNI_GENERATOR_EXPORT void Java_org_webrtc_PeerConnectionFactory_nativeInjectLoggable(
    JNIEnv* env,
    jclass jcaller,
    jobject jniLogging,
    jint severity) {
  return JNI_PeerConnectionFactory_InjectLoggable(env, base::android::JavaParamRef<jobject>(env,
      jniLogging), severity);
}

static void JNI_PeerConnectionFactory_DeleteLoggable(JNIEnv* env);

JNI_GENERATOR_EXPORT void Java_org_webrtc_PeerConnectionFactory_nativeDeleteLoggable(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_PeerConnectionFactory_DeleteLoggable(env);
}

static void JNI_PeerConnectionFactory_PrintStackTrace(JNIEnv* env, jint tid);

JNI_GENERATOR_EXPORT void Java_org_webrtc_PeerConnectionFactory_nativePrintStackTrace(
    JNIEnv* env,
    jclass jcaller,
    jint tid) {
  return JNI_PeerConnectionFactory_PrintStackTrace(env, tid);
}

static void JNI_PeerConnectionFactory_PrintStackTracesOfRegisteredThreads(JNIEnv* env);

JNI_GENERATOR_EXPORT void
    Java_org_webrtc_PeerConnectionFactory_nativePrintStackTracesOfRegisteredThreads(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_PeerConnectionFactory_PrintStackTracesOfRegisteredThreads(env);
}


static std::atomic<jmethodID>
    g_org_webrtc_PeerConnectionFactory_00024Options_getNetworkIgnoreMask(nullptr);
static jint Java_Options_getNetworkIgnoreMask(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_webrtc_PeerConnectionFactory_00024Options_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_PeerConnectionFactory_00024Options_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getNetworkIgnoreMask",
          "()I",
          &g_org_webrtc_PeerConnectionFactory_00024Options_getNetworkIgnoreMask);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_PeerConnectionFactory_00024Options_getDisableEncryption(nullptr);
static jboolean Java_Options_getDisableEncryption(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_PeerConnectionFactory_00024Options_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_PeerConnectionFactory_00024Options_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDisableEncryption",
          "()Z",
          &g_org_webrtc_PeerConnectionFactory_00024Options_getDisableEncryption);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_PeerConnectionFactory_00024Options_getDisableNetworkMonitor(nullptr);
static jboolean Java_Options_getDisableNetworkMonitor(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_PeerConnectionFactory_00024Options_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_PeerConnectionFactory_00024Options_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDisableNetworkMonitor",
          "()Z",
          &g_org_webrtc_PeerConnectionFactory_00024Options_getDisableNetworkMonitor);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_PeerConnectionFactory_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_PeerConnectionFactory_Constructor(JNIEnv*
    env, jlong nativeFactory) {
  jclass clazz = org_webrtc_PeerConnectionFactory_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_PeerConnectionFactory_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(J)V",
          &g_org_webrtc_PeerConnectionFactory_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, nativeFactory);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_PeerConnectionFactory_onNetworkThreadReady(nullptr);
static void Java_PeerConnectionFactory_onNetworkThreadReady(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_PeerConnectionFactory_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_PeerConnectionFactory_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onNetworkThreadReady",
          "()V",
          &g_org_webrtc_PeerConnectionFactory_onNetworkThreadReady);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_webrtc_PeerConnectionFactory_onWorkerThreadReady(nullptr);
static void Java_PeerConnectionFactory_onWorkerThreadReady(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_PeerConnectionFactory_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_PeerConnectionFactory_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onWorkerThreadReady",
          "()V",
          &g_org_webrtc_PeerConnectionFactory_onWorkerThreadReady);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID> g_org_webrtc_PeerConnectionFactory_onSignalingThreadReady(nullptr);
static void Java_PeerConnectionFactory_onSignalingThreadReady(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_PeerConnectionFactory_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_PeerConnectionFactory_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onSignalingThreadReady",
          "()V",
          &g_org_webrtc_PeerConnectionFactory_onSignalingThreadReady);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_PeerConnectionFactory_JNI
