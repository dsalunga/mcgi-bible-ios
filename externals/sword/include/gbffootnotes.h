/***************************************************************************
 *
 *  gbffootnotes.h -	Implementation of GBFFootnotes
 *
 * $Id: gbffootnotes.h 2833 2013-06-29 06:40:28Z chrislit $
 *
 * Copyright 2001-2013 CrossWire Bible Society (http://www.crosswire.org)
 *	CrossWire Bible Society
 *	P. O. Box 2528
 *	Tempe, AZ  85280-2528
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation version 2.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 */

#ifndef GBFFOOTNOTES_H
#define GBFFOOTNOTES_H

#include <swoptfilter.h>

SWORD_NAMESPACE_START

/** This Filter shows/hides footnotes in a GBF text
  */
class SWDLLEXPORT GBFFootnotes : public SWOptionFilter {
public:
	GBFFootnotes();
	virtual ~GBFFootnotes();
	virtual char processText(SWBuf &text, const SWKey *key = 0, const SWModule *module = 0);
};

SWORD_NAMESPACE_END
#endif
