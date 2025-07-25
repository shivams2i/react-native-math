///
/// NitroMathOnLoad.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#ifndef BUILDING_NITROMATH_WITH_GENERATED_CMAKE_PROJECT
#error NitroMathOnLoad.cpp is not being built with the autogenerated CMakeLists.txt project. Is a different CMakeLists.txt building this?
#endif

#include "NitroMathOnLoad.hpp"

#include <jni.h>
#include <fbjni/fbjni.h>
#include <NitroModules/HybridObjectRegistry.hpp>

#include "JHybridExamOnLoadSpec.hpp"
#include "HybridExam.hpp"
#include <NitroModules/JNISharedPtr.hpp>
#include <NitroModules/DefaultConstructableObject.hpp>

namespace margelo::nitro::math {

int initialize(JavaVM* vm) {
  using namespace margelo::nitro;
  using namespace margelo::nitro::math;
  using namespace facebook;

  return facebook::jni::initialize(vm, [] {
    // Register native JNI methods
    margelo::nitro::math::JHybridExamOnLoadSpec::registerNatives();

    // Register Nitro Hybrid Objects
    HybridObjectRegistry::registerHybridObjectConstructor(
      "Exam",
      []() -> std::shared_ptr<HybridObject> {
        static_assert(std::is_default_constructible_v<HybridExam>,
                      "The HybridObject \"HybridExam\" is not default-constructible! "
                      "Create a public constructor that takes zero arguments to be able to autolink this HybridObject.");
        return std::make_shared<HybridExam>();
      }
    );
    HybridObjectRegistry::registerHybridObjectConstructor(
      "ExamOnLoad",
      []() -> std::shared_ptr<HybridObject> {
        static DefaultConstructableObject<JHybridExamOnLoadSpec::javaobject> object("com/margelo/nitro/math/HybridExamOnLoad");
        auto instance = object.create();
        auto globalRef = jni::make_global(instance);
        return JNISharedPtr::make_shared_from_jni<JHybridExamOnLoadSpec>(globalRef);
      }
    );
  });
}

} // namespace margelo::nitro::math
