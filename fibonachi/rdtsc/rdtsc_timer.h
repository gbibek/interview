#include <stdio.h>
#include <time.h>
#include <inttypes.h>
#include <locale.h>

#ifdef __MACH__
#include <mach/clock.h>
#include <mach/mach.h>
#endif




struct timespec ts_start, ts_end;

extern void tstart();
extern void tfinish();
