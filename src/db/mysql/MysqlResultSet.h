/*
 * Copyright (C) 2004-2009 Tildeslash Ltd. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef MYSQLRESULTSET_INCLUDED
#define MYSQLRESULTSET_INCLUDED
#define T ResultSetImpl_T
T MysqlResultSet_new(void *stmt, int maxRows, int keep);
void MysqlResultSet_free(T *R);
int MysqlResultSet_getColumnCount(T R);
const char *MysqlResultSet_getColumnName(T R, int column);
int MysqlResultSet_next(T R);
long MysqlResultSet_getColumnSize(T R, int columnIndex);
const char *MysqlResultSet_getString(T R, int columnIndex);
const void *MysqlResultSet_getBlob(T R, int columnIndex, int *size);
#undef T
#endif
