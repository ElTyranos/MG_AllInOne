class CfgPatches
{
	class haxey_AllinOne
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.00;
		requiredAddons[] = {};
		author[] = {"haxey"};
		authorUrl = "";
	};
	//Backward compatibility
	class haxey_faction_USArmy_UCP: haxey_AllinOne					{};
	class haxey_faction_USArmy_OCP: haxey_faction_USArmy_UCP		{};
	class haxey_faction_USArmy_M81: haxey_faction_USArmy_UCP		{};
	class haxey_faction_MSV_EMR: haxey_faction_USArmy_UCP			{};
	class haxey_faction_MSV_Flora: haxey_faction_USArmy_UCP			{};
	class haxey_faction_MSV_M88: haxey_faction_USArmy_UCP			{};
	class haxey_faction_VDV_EMR: haxey_faction_USArmy_UCP			{};
	class haxey_faction_VDV_Flora: haxey_faction_USArmy_UCP			{};
	class haxey_faction_VDV_MountainFlora: haxey_faction_USArmy_UCP	{};
};

#include "CfgMacros.hpp"
#include "CfgFunctions.hpp"
#include "cfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"

class cfgWeapons
{
	#include "US\cfgWeapons.hpp"
	#include "RU\cfgWeapons.hpp"
	#include "Militia\cfgWeapons.hpp"
};
class CfgVehicles
{
	#include "US\cfgVehicles.hpp"
	#include "RU\cfgVehicles.hpp"
	#include "Militia\cfgVehicles.hpp"
};
class CfgGroups
{
	class West
	{
		#include "US\CfgGroups.hpp"
		
	};
	class East
	{
		#include "RU\CfgGroups.hpp"
	};
	class Indep
	{
		#include "Militia\CfgGroups.hpp"
	};
};
