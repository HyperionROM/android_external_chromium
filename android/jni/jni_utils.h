// Copyright (c) 2010 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <string>

#include "nativehelper/jni.h"

namespace android {

// Get the JNI environment for the current thread.
JNIEnv* GetJNIEnv();

// Convert Java String to std::string. On null input, returns an empty string.
std::string JstringToStdString(JNIEnv* env, jstring jstr);

} // namespace android
