/******************************************************************************
 * Project:  NextGIS Formbuilder
 * Purpose:  Void project implementations
 * Author:   Mikhail Gusev, gusevmihs@gmail.com
 ******************************************************************************
*   Copyright (C) 2014-2016 NextGIS
*
*    This program is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 2 of the License, or
*    (at your option) any later version.
*
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/

#include "project.h"
 

FBProjectVoid::~FBProjectVoid ()
{
}

FBProjectVoid::FBProjectVoid (FbGeomType *geomType):
    FBProject()
{
    geometry_type = geomType;
}

FBErr FBProjectVoid::create (QString anyPath)
{
    if (isInited)
        return FBErrAlreadyInited;

    // Create default field for future layer, because in project must be at least
    // one field. Also layers with no fields are incorrect for NextGIS Web.
    FBFieldDescr fd(DATA_TYPES[FB_TYPEINDEX_DATA_INTEGER],"ID");
    fields.insert("ID",fd);
    version = FBProject::getProgVersionStr();
    // Geometry type and srs are already set via constructor.

    strNgfpPath = ""; // need to be saved first time

    isInited = true;
    return FBErrNone;
}


