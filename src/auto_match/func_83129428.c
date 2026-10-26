// Kinect Sports retail 4D5308C9, function 0x83129428 (12 bytes).
// Static initializer: registers fn_83141510, the destructor of a static object, with atexit.

extern void fn_83141510(void);
extern int atexit(void (*func)(void));

void fn_83129428(void)
{
    atexit(fn_83141510);
}
