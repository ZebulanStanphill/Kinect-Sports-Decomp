// Kinect Sports retail 4D5308C9, function 0x8313AED0 (12 bytes).
// atexit destructor thunk: calls fn_82233D58 on the static object lbl_83283550.

extern void fn_82233D58(void *object);

extern char lbl_83283550[];

void fn_8313AED0(void)
{
    fn_82233D58(lbl_83283550);
}
