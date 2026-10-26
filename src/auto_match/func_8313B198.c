// Kinect Sports retail 4D5308C9, function 0x8313B198 (12 bytes).
// atexit destructor thunk: calls fn_82233D58 on the static object lbl_832838B8.

extern void fn_82233D58(void *object);

extern char lbl_832838B8[];

void fn_8313B198(void)
{
    fn_82233D58(lbl_832838B8);
}
