// Kinect Sports retail 4D5308C9, function 0x831398F0 (12 bytes).
// Static initializer: registers fn_83141E00, the destructor of a static object, with atexit.

extern void fn_83141E00(void);
extern int atexit(void (*func)(void));

void fn_831398F0(void)
{
    atexit(fn_83141E00);
}
