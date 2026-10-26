// Kinect Sports retail 4D5308C9, function 0x83141688 (12 bytes).
// atexit destructor thunk: calls fn_828E6AA0 on the static object lbl_832144B0.

extern void fn_828E6AA0(void *object);

extern char lbl_832144B0[];

void fn_83141688(void)
{
    fn_828E6AA0(lbl_832144B0);
}
