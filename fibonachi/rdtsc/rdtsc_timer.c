#include "rdtsc_timer.h"
void tstart(){

#ifdef __MACH__ // OS X does not have clock_gettime, use clock_get_time
    clock_serv_t cclock;
    mach_timespec_t mts;
    host_get_clock_service(mach_host_self(), CALENDAR_CLOCK, &cclock);
    clock_get_time(cclock, &mts);
    mach_port_deallocate(mach_task_self(), cclock);
    ts_start.tv_sec = mts.tv_sec;
    ts_start.tv_nsec = mts.tv_nsec;
#else
    clock_gettime(CLOCK_MONOTONIC, &ts_start);
#endif
}

void tfinish(){
    uint64_t sim_time;
    setlocale(LC_NUMERIC, "");
#ifdef __MACH__ // OS X does not have clock_gettime, use clock_get_time
    clock_serv_t cclock;
    mach_timespec_t mts;
    host_get_clock_service(mach_host_self(), CALENDAR_CLOCK, &cclock);
    clock_get_time(cclock, &mts);
    mach_port_deallocate(mach_task_self(), cclock);
    ts_end.tv_sec = mts.tv_sec;
    ts_end.tv_nsec = mts.tv_nsec;
#else
    clock_gettime(CLOCK_MONOTONIC, &ts_end);
#endif
    sim_time = ((1e+9 * (ts_end.tv_sec - ts_start.tv_sec)) + 
                    ((ts_end.tv_nsec - ts_start.tv_nsec)));
    fprintf(stderr, "elapsed %'" PRIu64 " nseconds\n", sim_time);   
    printf("and from rdtsc.c MY_VAL = %d\n",MY_VAL);
}
