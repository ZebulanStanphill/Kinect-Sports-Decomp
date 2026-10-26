// Kinect Sports retail 4D5308C9, function 0x831412B8 (12 bytes).
// atexit destructor thunk: calls fn_828C5F28 on the static object lbl_8321434C.

extern void fn_828C5F28(void *object);

extern char lbl_8321434C[];

void fn_831412B8(void)
{
    fn_828C5F28(lbl_8321434C);
}
