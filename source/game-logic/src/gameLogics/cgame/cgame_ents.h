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
// File name:   cgame_ents.h
// Version:     v1.00
// Created:
// Compilers:   Visual Studio 2015
// Description:
// -------------------------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////////

#ifndef __CGAME_ENTS_H__
#define __CGAME_ENTS_H__

class idCGameLocal;

class idCGameEnts : public idCGameLocal
{
public:
    idCGameEnts();
    ~idCGameEnts();
    
    static void DrawBoxFace( vec3_t a, vec3_t b, vec3_t c, vec3_t d );
    static void DrawBoundingBox( vec3_t origin, vec3_t mins, vec3_t maxs );
    static void PositionEntityOnTag( refEntity_t* entity, const refEntity_t* parent, qhandle_t parentModel, valueType* tagName );
    static void PositionRotatedEntityOnTag( refEntity_t* entity, const refEntity_t* parent, qhandle_t parentModel, valueType* tagName );
    static void SetEntitySoundPosition( centity_t* cent );
    static void EntityEffects( centity_t* cent );
    static void General( centity_t* cent );
    static void Speaker( centity_t* cent );
    static void LaunchMissile( centity_t* cent );
    static void Missile( centity_t* cent );
    static void Mover( centity_t* cent );
    static void Beam( centity_t* cent );
    static void Portal( centity_t* cent );
    static void LightFlare( centity_t* cent );
    static void AdjustPositionForMover( const vec3_t in, sint moverNum, sint fromTime, sint toTime, vec3_t out );
    static void InterpolateEntityPosition( centity_t* cent );
    static void CalcEntityLerpPositions( centity_t* cent );
    static void CEntityPVSEnter( centity_t* cent );
    static void CEntityPVSLeave( centity_t* cent );
    static void AddCEntity( centity_t* cent );
    static void AddPacketEntities( void );
    static void LinkLocation( centity_t* cent );
};

#endif //!__CGAME_ENTS_H__
