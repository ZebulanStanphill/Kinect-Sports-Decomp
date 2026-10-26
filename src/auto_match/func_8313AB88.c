// Kinect Sports retail 4D5308C9, function 0x8313AB88 (12 bytes).
// atexit destructor thunk: calls fn_82233D58 on the static object lbl_832830E0.

extern void fn_82233D58(void *object);

extern char lbl_832830E0[];

void fn_8313AB88(void)
{
    fn_82233D58(lbl_832830E0);
}
