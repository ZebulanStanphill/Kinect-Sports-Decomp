// Kinect Sports retail 4D5308C9, function 0x83125820 (12 bytes).
// Static initializer: registers fn_8313F9E8, the destructor of a static object, with atexit.

extern void fn_8313F9E8(void);
extern int atexit(void (*func)(void));

void fn_83125820(void)
{
    atexit(fn_8313F9E8);
}
