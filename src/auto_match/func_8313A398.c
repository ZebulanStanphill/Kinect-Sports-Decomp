// Kinect Sports retail 4D5308C9, function 0x8313A398 (12 bytes).
// atexit destructor thunk: calls fn_82233D58 on the static object lbl_83282738.

extern void fn_82233D58(void *object);

extern char lbl_83282738[];

void fn_8313A398(void)
{
    fn_82233D58(lbl_83282738);
}
