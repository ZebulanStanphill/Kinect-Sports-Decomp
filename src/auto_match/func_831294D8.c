// Kinect Sports retail 4D5308C9, function 0x831294D8 (12 bytes).
// Static initializer: registers fn_83141628, the destructor of a static object, with atexit.

extern void fn_83141628(void);
extern int atexit(void (*func)(void));

void fn_831294D8(void)
{
    atexit(fn_83141628);
}
