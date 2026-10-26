// Kinect Sports retail 4D5308C9, function 0x8313CB08 (12 bytes).
// atexit destructor thunk: calls fn_824CD240 on the static object lbl_83298EE0.

extern void fn_824CD240(void *object);

extern char lbl_83298EE0[];

void fn_8313CB08(void)
{
    fn_824CD240(lbl_83298EE0);
}
