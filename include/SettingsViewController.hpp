#pragma once

#include "HMUI/ViewController.hpp"

#include "custom-types/shared/macros.hpp"
#include "beatsaber-hook/shared/utils/hooking.hpp"

void DidActivate(HMUI::ViewController* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
