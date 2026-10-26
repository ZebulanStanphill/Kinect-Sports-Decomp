// Kinect Sports retail 4D5308C9, function 0x83140A08 (12 bytes).
// atexit destructor thunk: calls fn_828D0700 on the static object lbl_83213FA0.

extern void fn_828D0700(void *object);

extern char lbl_83213FA0[];

void fn_83140A08(void)
{
    fn_828D0700(lbl_83213FA0);
}
