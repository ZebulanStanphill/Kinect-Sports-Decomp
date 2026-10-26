// Kinect Sports retail 4D5308C9, function 0x831396C0 (12 bytes).
// Static initializer: registers fn_83141D40, the destructor of a static object, with atexit.

extern void fn_83141D40(void);
extern int atexit(void (*func)(void));

void fn_831396C0(void)
{
    atexit(fn_83141D40);
}
