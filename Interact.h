#pragma once

#ifndef INTERACT
#define INTERACT

#include "Core/Core.h"



#ifdef MODULE_MESH
#include "Modules/Mesh/Mesh.h"
#endif // MODULE_MESH

#ifdef MODULE_TEXTURE
#include "Modules/Texture/Texture.h"
#endif

#ifdef MODULE_SHADER
#include "Modules/Shader/Shader.h"
#endif

#ifdef MODULE_TRANSFORM
#include "Modules/Texture/Texture.h"
#endif

#ifdef MODULE_CAMERA3D
#include "Modules/Camera3D/Camera3D.h"
#endif

#ifdef MODULE_ECS
#include "Modules/ECS/ECS.h"
#endif

#ifdef MODULE_TRANSFORM
#include "Modules/Transform/3D/Transform3D.h"
#endif

#ifdef MODULE_3DRENDER
#include "Modules/Render3D/Render3D.h"
#endif
#endif