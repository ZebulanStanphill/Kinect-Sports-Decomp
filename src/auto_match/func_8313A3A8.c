// Kinect Sports retail 4D5308C9, function 0x8313A3A8 (12 bytes).
// atexit destructor thunk: calls fn_82233D58 on the static object lbl_83282790.

extern void fn_82233D58(void *object);

extern char lbl_83282790[];

void fn_8313A3A8(void)
{
    fn_82233D58(lbl_83282790);
}
