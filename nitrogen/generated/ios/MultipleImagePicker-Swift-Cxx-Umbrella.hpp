///
/// MultipleImagePicker-Swift-Cxx-Umbrella.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `HybridMultipleImagePickerSpec` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { class HybridMultipleImagePickerSpec; }
// Forward declaration of `Language` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Language; }
// Forward declaration of `MediaType` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class MediaType; }
// Forward declaration of `NitroConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct NitroConfig; }
// Forward declaration of `PickerCropConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct PickerCropConfig; }
// Forward declaration of `Presentation` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Presentation; }
// Forward declaration of `ResultType` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class ResultType; }
// Forward declaration of `Result` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct Result; }
// Forward declaration of `SelectBoxStyle` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class SelectBoxStyle; }
// Forward declaration of `SelectMode` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class SelectMode; }
// Forward declaration of `Text` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct Text; }

// Include C++ defined types
#include "HybridMultipleImagePickerSpec.hpp"
#include "Language.hpp"
#include "MediaType.hpp"
#include "NitroConfig.hpp"
#include "PickerCropConfig.hpp"
#include "Presentation.hpp"
#include "Result.hpp"
#include "ResultType.hpp"
#include "SelectBoxStyle.hpp"
#include "SelectMode.hpp"
#include "Text.hpp"
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>

// C++ helpers for Swift
#include "MultipleImagePicker-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/AnyMapHolder.hpp>
#include <NitroModules/HybridContext.hpp>
#include <NitroModules/RuntimeError.hpp>

// Forward declarations of Swift defined types
// Forward declaration of `HybridMultipleImagePickerSpecCxx` to properly resolve imports.
namespace MultipleImagePicker { class HybridMultipleImagePickerSpecCxx; }

// Include Swift defined types
#if __has_include("MultipleImagePicker-Swift.h")
// This header is generated by Xcode/Swift on every app build.
// If it cannot be found, make sure the Swift module's name (= podspec name) is actually "MultipleImagePicker".
#include "MultipleImagePicker-Swift.h"
#else
#error MultipleImagePicker's autogenerated Swift header cannot be found! Make sure the Swift module's name (= podspec name) is actually "MultipleImagePicker", and try building the app first.
#endif