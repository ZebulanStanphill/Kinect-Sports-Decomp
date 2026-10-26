// Kinect Sports retail 4D5308C9, function 0x8310BAC0 (12 bytes).
// Static initializer: registers fn_8313B910, the destructor of a static object, with atexit.

extern void fn_8313B910(void);
extern int atexit(void (*func)(void));

void fn_8310BAC0(void)
{
    atexit(fn_8313B910);
}
