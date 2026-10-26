// Kinect Sports retail 4D5308C9, function 0x83128058 (12 bytes).
// Static initializer: registers fn_83140058, the destructor of a static object, with atexit.

extern void fn_83140058(void);
extern int atexit(void (*func)(void));

void fn_83128058(void)
{
    atexit(fn_83140058);
}
