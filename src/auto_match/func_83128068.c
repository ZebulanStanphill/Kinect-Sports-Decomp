// Kinect Sports retail 4D5308C9, function 0x83128068 (12 bytes).
// Static initializer: registers fn_83140070, the destructor of a static object, with atexit.

extern void fn_83140070(void);
extern int atexit(void (*func)(void));

void fn_83128068(void)
{
    atexit(fn_83140070);
}
