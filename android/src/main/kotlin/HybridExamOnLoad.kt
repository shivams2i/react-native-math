package com.margelo.nitro.math

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.NitroModules

@Keep
@DoNotStrip
class HybridExamOnLoad : HybridExamOnLoadSpec() {
  @Keep
  @DoNotStrip
  override fun init() {
    NitroModules.applicationContext?.let { 
    }
  }
}
