// Kinect Sports retail 4D5308C9, function 0x8313B420 (12 bytes).
// atexit destructor thunk: calls fn_82233D58 on the static object lbl_83283C78.

extern void fn_82233D58(void *object);

extern char lbl_83283C78[];

void fn_8313B420(void)
{
    fn_82233D58(lbl_83283C78);
}
