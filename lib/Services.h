/*
 * Services.h, part of VCMI engine
 *
 * Authors: listed in file AUTHORS in main folder
 *
 * License: GNU General Public License v2.0 or later
 * Full text of license available in license.txt file, in main folder
 *
 */

#pragma once

namespace spells
{
	class SpellService;
}

class DLL_LINKAGE Services
{
public:
	virtual ~Services() = default;

	virtual const spells::SpellService * spellService() const = 0;

};
