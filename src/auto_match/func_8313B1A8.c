// Kinect Sports retail 4D5308C9, function 0x8313B1A8 (12 bytes).
// atexit destructor thunk: calls fn_82233D58 on the static object lbl_83283910.

extern void fn_82233D58(void *object);

extern char lbl_83283910[];

void fn_8313B1A8(void)
{
    fn_82233D58(lbl_83283910);
}
