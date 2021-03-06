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


#ifndef HAVE_NATIVE_PED_H
#define HAVE_NATIVE_PED_H

#include "boolean.h"
#include "primary_events_database.h"

extern BOOL PEDFrameAskQuestion(const char *question, const char *title);
extern void PEDFramePostWarning(const char *warning, const char *title);
extern void PEDFramePostError(const char *warning, const char *title);

extern char *PEDFrameGetSelectedId();

extern PRIMARY_EVENTS_DATABASE *NativePEDCurrentPEDState();

extern BOOL PEDFrameNewPEDFile(BOOL confirm);

extern void PEDFrameSetWindowTitle(char *database_name);

#endif
