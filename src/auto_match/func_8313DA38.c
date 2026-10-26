// Kinect Sports retail 4D5308C9, function 0x8313DA38 (12 bytes).
// atexit destructor thunk: calls fn_824CD240 on the static object lbl_83297D3C.

extern void fn_824CD240(void *object);

extern char lbl_83297D3C[];

void fn_8313DA38(void)
{
    fn_824CD240(lbl_83297D3C);
}
