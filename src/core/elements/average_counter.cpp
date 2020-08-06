/**************************************************************************************************
 *                                                                                                *
 *    Project:  NextGIS Formbuilder                                                               *
 *    Authors:  Mikhail Gusev, gusevmihs@gmail.com                                                *
 *              Copyright (C) 2014-2019 NextGIS                                                   *
 *                                                                                                *
 *    This program is free software: you can redistribute it and/or modify it under the terms     *
 *    of the GNU General Public License as published by the Free Software Foundation, either      *
 *    version 2 of the License, or (at your option) any later version.                            *
 *                                                                                                *
 *    This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;   *
 *    without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.   *
 *    See the GNU General Public License for more details.                                        *
 *                                                                                                *
 *    You should have received a copy of the GNU General Public License along with this program.  *
 *    If not, see http://www.gnu.org/licenses/.                                                   *
 *                                                                                                *
 **************************************************************************************************/

#include "average_counter.h"

#include "attr_registrar.h"

using namespace Fb;
using namespace Core;


AverageCounter::AverageCounter (QString key_name):
    Elem(key_name)
{
    attr_num_values  = (Number*) this->addAttr(new Number("num_values", 2, 2, 10));

    fslot_common = this->addFieldSlot("field_common");

    this->behave(nullptr);
}

AverageCounter::~AverageCounter ()
{
}


void AverageCounter::behave (Attr *attr)
{
    Q_UNUSED(attr)

    this->clearTypesForFieldSlot(fslot_common);

    this->addTypeToFieldSlot(fslot_common, FieldType::Integer);
    this->addTypeToFieldSlot(fslot_common, FieldType::BigInteger);
    this->addTypeToFieldSlot(fslot_common, FieldType::Real);
}
