class CfgPatches
{
	class haxey_AllinOne
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.00;
		requiredAddons[] = {};
		author[] = {"haxey"};
		authorUrl = "http://www.ofcrav2.org/";
	};
	class haxey_faction_USArmy_UCP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.00;
		requiredAddons[] = {};
	};
	class haxey_faction_USArmy_OCP: haxey_faction_USArmy_UCP		{};
	class haxey_faction_USArmy_M81: haxey_faction_USArmy_UCP		{};
	class haxey_faction_MSV_EMR: haxey_faction_USArmy_UCP			{};
	class haxey_faction_MSV_Flora: haxey_faction_USArmy_UCP			{};
	class haxey_faction_MSV_M88: haxey_faction_USArmy_UCP			{};
	class haxey_faction_VDV_EMR: haxey_faction_USArmy_UCP			{};
	class haxey_faction_VDV_Flora: haxey_faction_USArmy_UCP			{};
	class haxey_faction_VDV_MountainFlora: haxey_faction_USArmy_UCP	{};
};
#include "cfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"

class cfgWeapons
{
	#include "cfgWeapons_US.hpp"
	#include "cfgWeapons_RU.hpp"
};
class CfgVehicles
{
	#include "cfgVehicles_US.hpp"
	#include "cfgVehicles_RU.hpp"
};
class CfgGroups
{
	class West
	{
		#include "CfgGroups_West_US.hpp"
		
	};
	class East
	{
		#include "CfgGroups_East_RU.hpp"
	};
};
