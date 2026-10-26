// Kinect Sports retail 4D5308C9, function 0x83125108 (12 bytes).
// Static initializer: registers fn_8313F590, the destructor of a static object, with atexit.

extern void fn_8313F590(void);
extern int atexit(void (*func)(void));

void fn_83125108(void)
{
    atexit(fn_8313F590);
}
