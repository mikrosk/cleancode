/*
	GSXB audio definitions

	Copyright (C) 2002	Patrice Mandin

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
*/

#ifndef _GSXB_H
#define _GSXB_H

#include <mint/falcon.h>	/* for trap_14_xxx macros */

/* Setmode modes */

#define MONO16		3
#define STEREO24	4
#define STEREO32	5
#define MONO24		6
#define MONO32		7

/* Devconnect prescalers */

#define CLK_44K		1
#define CLK_22K		3
#define CLK_11K		7

#endif /* _GSXB_H */
