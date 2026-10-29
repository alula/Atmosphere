/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <vapours/svc/svc_types_common.hpp>

namespace ams::svc::board::nintendo::ounce {

    enum DeviceName {
        DeviceName_Count = 0,
    };

    namespace impl {

        constexpr inline const size_t RequiredNonSecureSystemMemorySizeVi         = 0x2280 * 4_KB;
        constexpr inline const size_t RequiredNonSecureSystemMemorySizeViFatal    = 0x200  * 4_KB;
        constexpr inline const size_t RequiredNonSecureSystemMemorySizeNvservices = 0x704  * 4_KB;
        constexpr inline const size_t RequiredNonSecureSystemMemorySizeMisc       = 0x80   * 4_KB;

    }

}
