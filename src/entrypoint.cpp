/*
 * Copyright © 2022 Tim Herreijgers
 * Licensed using the MIT license
 */

#include "application.h"

#include <protonengine/core/entrypoint.h>
#include <memory>

std::unique_ptr<ProtonEngine::Core::Application> getProtonApplication(int /*argc*/, char **/*argv*/)
{
    return std::make_unique<SandboxApplication>();
}
