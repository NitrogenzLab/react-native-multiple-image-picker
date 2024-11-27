///
/// HybridMultipleImagePickerSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridMultipleImagePickerSpec.hpp"




namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  class JHybridMultipleImagePickerSpec: public jni::HybridClass<JHybridMultipleImagePickerSpec, JHybridObject>,
                                        public virtual HybridMultipleImagePickerSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/HybridMultipleImagePickerSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  protected:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridMultipleImagePickerSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridMultipleImagePickerSpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    virtual ~JHybridMultipleImagePickerSpec() {
      // Hermes GC can destroy JS objects on a non-JNI Thread.
      jni::ThreadScope::WithClassLoader([&] { _javaPart.reset(); });
    }

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridMultipleImagePickerSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    

  public:
    // Methods
    void openPicker(const NitroConfig& config, const std::function<void(const std::vector<Result>& /* result */)>& resolved, const std::function<void(double /* reject */)>& rejected) override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridMultipleImagePickerSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::multipleimagepicker
