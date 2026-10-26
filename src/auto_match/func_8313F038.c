// Kinect Sports retail 4D5308C9, function 0x8313F038 (12 bytes).
// atexit destructor thunk: calls fn_82511B78 on the static object lbl_832977D0.

extern void fn_82511B78(void *object);

extern char lbl_832977D0[];

void fn_8313F038(void)
{
    fn_82511B78(lbl_832977D0);
}
