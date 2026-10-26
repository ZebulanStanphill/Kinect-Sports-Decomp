// Kinect Sports retail 4D5308C9, function 0x8313AEB0 (12 bytes).
// atexit destructor thunk: calls fn_82233D58 on the static object lbl_832834A0.

extern void fn_82233D58(void *object);

extern char lbl_832834A0[];

void fn_8313AEB0(void)
{
    fn_82233D58(lbl_832834A0);
}
