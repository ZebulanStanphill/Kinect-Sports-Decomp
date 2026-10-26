// Kinect Sports retail 4D5308C9, function 0x83141A68 (12 bytes).
// atexit destructor thunk: calls fn_82A35510 on the static object lbl_832195A0.

extern void fn_82A35510(void *object);

extern char lbl_832195A0[];

void fn_83141A68(void)
{
    fn_82A35510(lbl_832195A0);
}
