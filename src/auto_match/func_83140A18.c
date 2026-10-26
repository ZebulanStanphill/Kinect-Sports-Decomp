// Kinect Sports retail 4D5308C9, function 0x83140A18 (12 bytes).
// atexit destructor thunk: calls fn_828C17D0 on the static object lbl_83213F40.

extern void fn_828C17D0(void *object);

extern char lbl_83213F40[];

void fn_83140A18(void)
{
    fn_828C17D0(lbl_83213F40);
}
