// Kinect Sports retail 4D5308C9, function 0x83128630 (12 bytes).
// Static initializer: registers fn_83140868, the destructor of a static object, with atexit.

extern void fn_83140868(void);
extern int atexit(void (*func)(void));

void fn_83128630(void)
{
    atexit(fn_83140868);
}
