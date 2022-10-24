/*
 * Copyright © 2022 Tim Herreijgers
 * Licensed using the MIT license
 */

#pragma once

#include "protonengine/core/application.h"

class SandboxApplication : public ProtonEngine::Core::Application
{
public:
    void initialize() override;
};
