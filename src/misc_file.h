/*
 * misc_file.h
 *   prototypes for misc_file.c
 *
 * $Id: misc_file.h,v 1.7 2004/01/09 05:56:37 wcc Exp $
 */
/*
 * Copyright (C) 2000, 2001, 2002, 2003, 2004 Eggheads Development Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef _EGG_MISC_FILE_H
#define _EGG_MISC_FILE_H

int copyfile(char *, char *);
int movefile(char *, char *);
int file_readable(char *);

#endif /* _EGG_MISC_FILE_H */
