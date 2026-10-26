// Kinect Sports retail 4D5308C9, function 0x83139840 (12 bytes).
// Static initializer: registers fn_83141DB8, the destructor of a static object, with atexit.

extern void fn_83141DB8(void);
extern int atexit(void (*func)(void));

void fn_83139840(void)
{
    atexit(fn_83141DB8);
}
