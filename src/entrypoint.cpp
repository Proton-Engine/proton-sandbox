/*
 * Copyright © 2022 Tim Herreijgers
 * Licensed using the MIT license
 */

#include "application.h"

#include <protonengine/core/proton_entrypoint.h>
#include <memory>

std::unique_ptr<ProtonEngine::Core::ProtonApplication> getProtonApplication(int /*argc*/, char **/*argv*/)
{
    return std::make_unique<Application>();
}
