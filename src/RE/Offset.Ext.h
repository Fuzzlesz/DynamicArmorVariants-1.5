#pragma once

namespace RE
{
	namespace Offset
	{
		namespace Actor
		{
			inline constexpr auto Update3D = MAKE_OFFSET(19316);
		}

		namespace InventoryChanges
		{

			inline constexpr auto GetWornMask = MAKE_OFFSET(15806);

			inline constexpr auto Accept = MAKE_OFFSET(15856);
		}

		namespace InventoryUtils
		{
			namespace GetWornMaskVisitor
			{
				inline constexpr auto Visit = MAKE_OFFSET(15991);
			}
		}

		namespace TESNPC
		{
			inline constexpr auto InitWornForm = MAKE_OFFSET(24232);
		}

		namespace TESObjectARMA
		{
			inline constexpr auto HasRace = MAKE_OFFSET(17359);

			inline constexpr auto InitWornArmorAddon = MAKE_OFFSET(17361);
		}
	}
}
