// Kinect Sports retail 4D5308C9, function 0x83141AE8 (12 bytes).
// atexit destructor thunk: calls fn_82CE3C28 on the static object lbl_8323A940.

extern void fn_82CE3C28(void *object);

extern char lbl_8323A940[];

void fn_83141AE8(void)
{
    fn_82CE3C28(lbl_8323A940);
}
