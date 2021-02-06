#pragma once
//=========================================================================//
//
//		FILE NAME	: Maths.h
//		AUTHOR		: TerjeTL
//		DATE		: October 2020
//
//		This file falls under the licence found in the root ExternalFM directory.
//
//		DESCRIPTION	:	Utility maths functions.
//
//================================ Includes ===============================//
#include <math.h>
#include "Vec3.h"
#include <algorithm>
//=========================================================================//

//To stop silly macros.
#undef max
#undef min


#define PI 3.14159265359

namespace Scooter
{

extern const Vec3 windAxisToBody(const Vec3& force, const double& alpha, const double& beta);
extern const Vec3 directionVector( const double pitch, const double yaw );

}

static inline double toDegrees( double radians )
{
	return radians * 180.0 / PI;
}

static inline double toRad(double degrees)
{
	return degrees * PI / 180.0;
}

static inline double clamp( double value, double min, double max )
{
	return std::max( std::min( value, max ), min );
}