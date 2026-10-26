// Kinect Sports retail 4D5308C9, function 0x83125128 (12 bytes).
// Static initializer: registers fn_8313F5B0, the destructor of a static object, with atexit.

extern void fn_8313F5B0(void);
extern int atexit(void (*func)(void));

void fn_83125128(void)
{
    atexit(fn_8313F5B0);
}
