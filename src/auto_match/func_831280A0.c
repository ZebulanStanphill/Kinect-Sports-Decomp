// Kinect Sports retail 4D5308C9, function 0x831280A0 (12 bytes).
// Static initializer: registers fn_83140088, the destructor of a static object, with atexit.

extern void fn_83140088(void);
extern int atexit(void (*func)(void));

void fn_831280A0(void)
{
    atexit(fn_83140088);
}
