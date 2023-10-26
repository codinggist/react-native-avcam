package com.avcam

import com.facebook.react.bridge.ReactApplicationContext

abstract class AvcamSpec internal constructor(context: ReactApplicationContext) :
  NativeAvcamSpec(context) {
}
