// Kinect Sports retail 4D5308C9, function 0x8313A388 (12 bytes).
// atexit destructor thunk: calls fn_82233D58 on the static object lbl_832826E0.

extern void fn_82233D58(void *object);

extern char lbl_832826E0[];

void fn_8313A388(void)
{
    fn_82233D58(lbl_832826E0);
}
