// SPDX-License-Identifier: LGPL-2.1-or-later
/****************************************************************************
 *                                                                          *
 *   Copyright (c) 2023 Ondsel <development@ondsel.com>                     *
 *                                                                          *
 *   This file is part of FreeCAD.                                          *
 *                                                                          *
 *   FreeCAD is free software: you can redistribute it and/or modify it     *
 *   under the terms of the GNU Lesser General Public License as            *
 *   published by the Free Software Foundation, either version 2.1 of the   *
 *   License, or (at your option) any later version.                        *
 *                                                                          *
 *   FreeCAD is distributed in the hope that it will be useful, but         *
 *   WITHOUT ANY WARRANTY; without even the implied warranty of             *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU       *
 *   Lesser General Public License for more details.                        *
 *                                                                          *
 *   You should have received a copy of the GNU Lesser General Public       *
 *   License along with FreeCAD. If not, see                                *
 *   <https://www.gnu.org/licenses/>.                                       *
 *                                                                          *
 ***************************************************************************/

#ifndef ASSEMBLYGUI_PRECOMPILED_H
#define ASSEMBLYGUI_PRECOMPILED_H

#include <FCConfig.h>

#ifdef _PreComp_

// STL
#include <algorithm>
#include <cmath>
#include <limits>
#include <memory>

#include <vector>
#include <sstream>
#include <iostream>

#include <boost/core/ignore_unused.hpp>

// Qt
#include <Gui/QtAll.h>

#include <QWidgetAction>

// all of Inventor
#include <Gui/InventorAll.h>

#endif  //_PreComp_

#endif  // ASSEMBLYGUI_PRECOMPILED_H
