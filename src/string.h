/*  
 *  string.h - declarations for dynamic string handling module
 *  
 *  Copyright (C) 2005 Free Software Foundation, Inc.
 *  
 *  This file is part of GNU Wget.
 *  
 *  GNU Wget is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  GNU Wget is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *  In addition, as a special exception, the Free Software Foundation
 *  gives permission to link the code of its release of Wget with the
 *  OpenSSL project's "OpenSSL" library (or with modified versions of it
 *  that use the same license as the "OpenSSL" library), and distribute
 *  the linked executables.  You must obey the GNU General Public License
 *  in all respects for all of the code used other than "OpenSSL".  If you
 *  modify this file, you may extend this exception to your version of the
 *  file, but you are not obligated to do so.  If you do not wish to do
 *  so, delete this exception statement from your version.
 */  

#ifndef WGET_STRING_H
#define WGET_STRING_H

void escape_buffer PARAMS ((char **, size_t));

#endif /* WGET_STRING_H */