// Kinect Sports retail 4D5308C9, function 0x83127B58 (12 bytes).
// Static initializer: registers fn_8313FCF0, the destructor of a static object, with atexit.

extern void fn_8313FCF0(void);
extern int atexit(void (*func)(void));

void fn_83127B58(void)
{
    atexit(fn_8313FCF0);
}
