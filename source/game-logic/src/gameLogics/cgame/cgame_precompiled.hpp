////////////////////////////////////////////////////////////////////////////////////////
// Copyright(C) 2018 Dusan Jocic <dusanjocic@msn.com>
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
// File name:   cgame_precompiled.h
// Version:     v1.01
// Created:
// Compilers:   Visual Studio 2017, gcc 7.3.0
// Description:
// -------------------------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////////

#ifndef __CG_PRECOMPILED_H__

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <setjmp.h>
#include <iostream>
#include <mutex>
#include <queue>
#include <assert.h>
#include <stdint.h>
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

#include <framework/appConfig.hpp>
#include <framework/types.hpp>
#include <qcommon/q_platform.hpp>
#include <qcommon/q_shared.hpp>
#include <GPURenderer/r_types.hpp>
#include <sgame/tremulous.h>
#include <framework/SurfaceFlags_Tech3.hpp>
#include <qcommon/qfiles.hpp>
#include <API/cm_api.hpp>
#include <API/Parse_api.hpp>
#include <API/clientScreen_api.hpp>
#include <API/clientAVI_api.hpp>
#include <API/clientGame_api.hpp>
#include <API/clientGUI_api.hpp>
#include <API/clientLAN_api.hpp>
#include <API/CmdBuffer_api.hpp>
#include <API/CmdSystem_api.hpp>
#include <API/CVarSystem_api.hpp>
#include <API/renderer_api.hpp>
#include <API/sound_api.hpp>
#include <API/FileSystem_api.hpp>
#include <API/system_api.hpp>
#include <API/cgame_api.hpp>
#include <API/bgame_api.hpp>
#include <API/gui_api.hpp>
#include <GUI/gui_shared.h>
#include <cgame/cgame_local.h>
#include <API/bgame_api.hpp>
#include <bgame/bgame_local.h>
#include <GUI/keycodes.h>
#include <GUI/menudef.h>
#include <GUI/gui_local.h>

#include <cgame/cgame_animation.h>
#include <cgame/cgame_animmapobj.h>
#include <cgame/cgame_attachment.h>
#include <cgame/cgame_buildable.h>
#include <cgame/cgame_consolecmds.h>
#include <cgame/cgame_draw.h>
#include <cgame/cgame_drawtools.h>
#include <cgame/cgame_ents.h>
#include <cgame/cgame_event.h>
#include <cgame/cgame_main.h>
#include <cgame/cgame_marks.h>
#include <cgame/cgame_mem.h>
#include <cgame/cgame_particles.h>
#include <cgame/cgame_players.h>
#include <cgame/cgame_playerstate.h>
#include <cgame/cgame_predict.h>
#include <cgame/cgame_ptr.h>
#include <cgame/cgame_scanner.h>
#include <cgame/cgame_servercmds.h>
#include <cgame/cgame_snapshot.h>
#include <cgame/cgame_trails.h>
#include <cgame/cgame_tutorial.h>
#include <cgame/cgame_view.h>
#include <cgame/cgame_weapons.h>

#endif // !__CG_PRECOMPILED_H__
