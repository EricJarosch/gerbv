/*
 * gEDA - GNU Electronic Design Automation
 * This file is a part of gerbv.
 *
 *   Copyright (C) 2000-2001 Stefan Petersen (spe@stacken.kth.se)
 *
 * $Id$
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA
 */

#ifndef GERB_FILE_H
#define GERB_FILE_H

#include <stdio.h>

typedef struct file {
    FILE *fd;
    int   fileno;
    char *data;
    int   datalen;
    int   ptr;
} gerb_file_t;

gerb_file_t *gerb_fopen(char *filename);
char gerb_fgetc(gerb_file_t *fd);
int gerb_fgetint(gerb_file_t *fd);
double gerb_fgetdouble(gerb_file_t *fd);
char *gerb_fgetstring(gerb_file_t *fd, char term);
void gerb_ungetc(gerb_file_t *fd);
void gerb_fclose(gerb_file_t *fd);

#endif /* GERB_FILE_H */
