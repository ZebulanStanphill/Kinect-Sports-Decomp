// Kinect Sports retail 4D5308C9, function 0x8313FD20 (12 bytes).
// atexit destructor thunk: calls fn_82696330 on the static object lbl_831F12B0.

extern void fn_82696330(void *object);

extern char lbl_831F12B0[];

void fn_8313FD20(void)
{
    fn_82696330(lbl_831F12B0);
}
