// Kinect Sports retail 4D5308C9, function 0x83127B48 (12 bytes).
// Static initializer: registers fn_8313FCD8, the destructor of a static object, with atexit.

extern void fn_8313FCD8(void);
extern int atexit(void (*func)(void));

void fn_83127B48(void)
{
    atexit(fn_8313FCD8);
}
