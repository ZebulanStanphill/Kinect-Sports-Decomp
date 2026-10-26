// Kinect Sports retail 4D5308C9, function 0x831398E0 (12 bytes).
// Static initializer: registers fn_83141DF8, the destructor of a static object, with atexit.

extern void fn_83141DF8(void);
extern int atexit(void (*func)(void));

void fn_831398E0(void)
{
    atexit(fn_83141DF8);
}
