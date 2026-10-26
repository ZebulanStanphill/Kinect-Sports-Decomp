// Kinect Sports retail 4D5308C9, function 0x83139750 (12 bytes).
// Static initializer: registers fn_83141D90, the destructor of a static object, with atexit.

extern void fn_83141D90(void);
extern int atexit(void (*func)(void));

void fn_83139750(void)
{
    atexit(fn_83141D90);
}
