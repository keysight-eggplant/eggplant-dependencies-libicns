/*
 * Copyright (C) 2008 Chenxiao Zhao <chenxiao.zhao@gmail.com>
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 * 
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 * 
 */


#ifndef __JP2DEC__

#include <openjpeg.h>
#include "icns.h"

int opj2icns_image_t(opj_image_t *image, icns_image_t *out_image);
opj_image_t* jp2dec(unsigned char *bufin, int len);

#endif