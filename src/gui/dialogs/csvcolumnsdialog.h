/**************************************************************************************************
 *                                                                                                *
 *    Project:  NextGIS Formbuilder                                                               *
 *    Authors:  Mikhail Gusev, gusevmihs@gmail.com                                                *
 *              Copyright (C) 2014-2018 NextGIS                                                   *
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

#include "custom_dialog.h"

#include <QComboBox>

namespace Fb
{
namespace Gui
{


/**
 * @brief A dialog which aim to select the columns from a csv file.
 */
class CsvColumnsDialog: public CustomDialog
{
    Q_OBJECT

    public:

     explicit CsvColumnsDialog (QWidget *parent, QString file_path,
                                const QStringList &table_cols,
                                const QList<QStringList> &csv_contents);
     virtual ~CsvColumnsDialog ();

     QList<int> getSelectedIndexes () const;

    protected:

     QList<QComboBox*> combos;
};


}
}



