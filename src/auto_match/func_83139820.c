// Kinect Sports retail 4D5308C9, function 0x83139820 (12 bytes).
// Static initializer: registers fn_83141DA8, the destructor of a static object, with atexit.

extern void fn_83141DA8(void);
extern int atexit(void (*func)(void));

void fn_83139820(void)
{
    atexit(fn_83141DA8);
}
