// Kinect Sports retail 4D5308C9, function 0x83127E18 (12 bytes).
// Static initializer: registers fn_8313FDD0, the destructor of a static object, with atexit.

extern void fn_8313FDD0(void);
extern int atexit(void (*func)(void));

void fn_83127E18(void)
{
    atexit(fn_8313FDD0);
}
