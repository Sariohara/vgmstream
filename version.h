#ifndef _VGMSTREAM_H_
#define _VGMSTREAM_H_
/* autogenerated version passed by param */
//todo detect if VGMSTREAM_VERSION is "" (may happen on script error)
#ifndef VGMSTREAM_VERSION
/* autogenerated version on file */
#ifdef VGMSTREAM_VERSION_AUTO
#include "version_auto.h"
#else
/* Static/fallback version.
 * Version is autogenerated from Git (passed via compiler args, or updated with scripts), but this file is
 * for Git-less builds (not installed or downloaded master). Builds that don't do the above should still work
 * (compiling a well-behaved src shouldn't depend on calling arbitrary scripts). */
#define VGMSTREAM_VERSION "r1702"
#endif
#endif

#endif
