/* 
 * $Id: RideItem.h,v 1.2 2006/07/04 12:55:40 srhea Exp $
 *
 * Copyright (c) 2006 Sean C. Rhea (srhea@srhea.net)
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _GC_RideItem_h
#define _GC_RideItem_h 1

#include <QtGui>

class RawFile;

struct RideItem : public QTreeWidgetItem {
    QString path;
    QString fileName;
    QDateTime dateTime;
    QString summary;
    RawFile *raw;

    RideItem(QTreeWidgetItem *parent, int type, QString path, 
             QString fileName, const QDateTime &dateTime);

    QString htmlSummary();
};
 
#endif // _GC_RideItem_h
