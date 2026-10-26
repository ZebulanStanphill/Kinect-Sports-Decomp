// Kinect Sports retail 4D5308C9, function 0x8313F5A0 (12 bytes).
// atexit destructor thunk: calls fn_822C18B8 on the static object lbl_83296BD0.

extern void fn_822C18B8(void *object);

extern char lbl_83296BD0[];

void fn_8313F5A0(void)
{
    fn_822C18B8(lbl_83296BD0);
}
