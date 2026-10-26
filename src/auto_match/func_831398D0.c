// Kinect Sports retail 4D5308C9, function 0x831398D0 (12 bytes).
// Static initializer: registers fn_83141DE0, the destructor of a static object, with atexit.

extern void fn_83141DE0(void);
extern int atexit(void (*func)(void));

void fn_831398D0(void)
{
    atexit(fn_83141DE0);
}
