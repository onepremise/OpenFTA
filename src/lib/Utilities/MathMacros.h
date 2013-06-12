///////////////////////////////////////////////////////////////////////////////
// 
// OpenFTA - Fault Tree Analysis
// Copyright (C) 2005 FSC Limited
// 
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your 
// option) any later version.
// 
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for 
// more details.
//
// You should have received a copy of the GNU General Public License along 
// with this program; if not, write to the Free Software Foundation, Inc., 
// 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
//
// To contact FSC, please send an email to support@fsc.co.uk or write to 
// FSC Ltd., Cardiff Business Technology Centre, Senghenydd Road, Cardiff,
// CF24 4AY.
//
///////////////////////////////////////////////////////////////////////////////

/*****************************************************************
 Module : MathMacros
 Author : FSC Limited
 Date   : 24 July 1996
 Origin : FTA project,
          FSC Limited Private Venture.
 
 SccsId : @(#)MathMacros.h	1.1 08/22/96
 
 This module defines some commonly used Maths macros.

*****************************************************************/
 
#ifndef MATHMACROS_H
#define MATHMACROS_H

#define MAX( x, y ) ( (x) > (y) ? (x) : (y) )
#define MIN( x, y ) ( (x) > (y) ? (y) : (x) )
#define ABS( x )  ( (x) < 0.0 ? -(x) : (x) )
#define EQUAL( x, y ) ( ABS( (x) - (y) ) > 0.000001 ? 0 : 1 )

#endif