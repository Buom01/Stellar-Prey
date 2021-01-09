////////////////////////////////////////////////////////////////////////////////////////
// Copyright(C) 2018 - 2019 Dusan Jocic <dusanjocic@msn.com>
//
// This file is part of OpenWolf.
//
// OpenWolf is free software; you can redistribute it
// and / or modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the License,
// or (at your option) any later version.
//
// OpenWolf is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with OpenWolf; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110 - 1301  USA
//
// -------------------------------------------------------------------------------------
// File name:   sgame_precompiled.hpp
// Version:     v1.03
// Created:
// Compilers:   Visual Studio 2019, gcc 7.3.0
// Description:
// -------------------------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////////

#ifndef __SGAME_PRECOMPILED_HPP__
#define __SGAME_PRECOMPILED_HPP__

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <setjmp.h>
#include <iostream>
#include <mutex>
#include <queue>
#include <assert.h>
#include <cstddef>
#include <stdio.h>
#include <signal.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>

#include <btBulletDynamicsCommon.h>
#include <LinearMath/btGeometryUtil.h>
#include <BulletDynamics/Character/btKinematicCharacterController.h>
#include <BulletCollision/CollisionDispatch/btGhostObject.h>

#include <framework/appConfig.hpp>
#include <framework/types.hpp>
#include <sgame/tremulous.h>
#include <qcommon/q_platform.hpp>
#include <qcommon/q_shared.hpp>
#include <framework/SurfaceFlags_Tech3.hpp>
#include <API/Parse_api.hpp>
#include <API/cm_api.hpp>
#include <API/CmdBuffer_api.hpp>
#include <API/CmdSystem_api.hpp>
#include <API/CVarSystem_api.hpp>
#include <GPURenderer/r_types.hpp>
#include <API/renderer_api.hpp>
#include <API/sound_api.hpp>
#include <API/FileSystem_api.hpp>
#include <API/serverDemo_api.hpp>
#include <API/serverGame_api.hpp>
#include <API/serverInit_api.hpp>
#include <API/serverMain_api.hpp>
#include <API/serverWorld_api.hpp>
#include <API/CmdSystem_api.hpp>
#include <API/system_api.hpp>
#include <API/bgame_api.hpp>
#include <bgame/bgame_local.h>
#include <sgame/tremulous.h>
#include <API/sgame_api.hpp>
#include <sgame/sgame_admin.h>
#include <sgame/sgame_local.h>
#include <sgame/sgame_admin.h>
#include <GUI/gui_shared.h>
#include <qcommon/qfiles.hpp>

#include <sgame/sgame_weapon.h>
#include <sgame/sgame_utils.h>
#include <sgame/sgame_trigger.h>
#include <sgame/sgame_team.h>
#include <sgame/sgame_target.h>
#include <sgame/sgame_svcmds.h>
#include <sgame/sgame_spawn.h>
#include <sgame/sgame_session.h>
#include <sgame/sgame_ptr.h>
#include <sgame/sgame_physics.h>
#include <sgame/sgame_mover.h>
#include <sgame/sgame_missile.h>
#include <sgame/sgame_misc.h>
#include <sgame/sgame_maprotation.h>
#include <sgame/sgame_main.h>
#include <sgame/sgame_combat.h>
#include <sgame/sgame_cmds.h>
#include <sgame/sgame_client.h>
#include <sgame/sgame_buildable.h>
#include <sgame/sgame_active.h>
#include <sgame/sgame_bulletphysics.h>

#endif // !__SGAME_PRECOMPILED_HPP__
