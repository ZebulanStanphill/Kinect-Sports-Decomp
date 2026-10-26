// Kinect Sports retail 4D5308C9, function 0x83127F08 (12 bytes).
// Static initializer: registers fn_8313FF10, the destructor of a static object, with atexit.

extern void fn_8313FF10(void);
extern int atexit(void (*func)(void));

void fn_83127F08(void)
{
    atexit(fn_8313FF10);
}
