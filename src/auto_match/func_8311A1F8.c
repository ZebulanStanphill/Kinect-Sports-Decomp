// Kinect Sports retail 4D5308C9, function 0x8311A1F8 (12 bytes).
// Static initializer: registers fn_8313D9B0, the destructor of a static object, with atexit.

extern void fn_8313D9B0(void);
extern int atexit(void (*func)(void));

void fn_8311A1F8(void)
{
    atexit(fn_8313D9B0);
}
