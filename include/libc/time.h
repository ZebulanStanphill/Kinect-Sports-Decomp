/* Minimal C library declarations written for this project (not a vendor header): just
   what the open-source library sources in src/auto_match need. See include/libc/README.md. */
typedef long time_t;
struct tm { int tm_sec, tm_min, tm_hour, tm_mday, tm_mon, tm_year, tm_wday, tm_yday, tm_isdst; };
time_t time(time_t *t);
struct tm *gmtime(const time_t *t);
