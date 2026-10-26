// Kinect Sports retail 4D5308C9, function 0x8312FA30 (12 bytes).
// Static initializer: registers fn_83141B50, the destructor of a static object, with atexit.

extern void fn_83141B50(void);
extern int atexit(void (*func)(void));

void fn_8312FA30(void)
{
    atexit(fn_83141B50);
}
