// Kinect Sports retail 4D5308C9, function 0x83127B98 (12 bytes).
// Static initializer: registers fn_8313FD58, the destructor of a static object, with atexit.

extern void fn_8313FD58(void);
extern int atexit(void (*func)(void));

void fn_83127B98(void)
{
    atexit(fn_8313FD58);
}
