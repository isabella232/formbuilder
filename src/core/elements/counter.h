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

#pragma once

#include "core/elem.h"
#include "core/attributes/number.h"
#include "core/attributes/string.h"
#include "core/attributes/globaltextenum.h"

namespace Fb
{
namespace Core
{


class Counter: public Elem
{
    Q_OBJECT

    public:

     explicit Counter (QString key_name);
     virtual ~Counter ();

    protected:

     virtual void behave (Attr *attr) override;

     Number *attr_count_init;
     Number *attr_count_incr;
     String *attr_count_pref;
     String *attr_count_suff;
     GlobalTextEnum *attr_pref_from_list;
     GlobalTextEnum *attr_suff_from_list;

     QString fslot_common;
};

FB_ELEM_FACTORY(Counter, CounterFct)


}
}



