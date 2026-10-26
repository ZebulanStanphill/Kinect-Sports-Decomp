// Kinect Sports retail 4D5308C9, function 0x83141C30 (12 bytes).
// atexit destructor thunk: calls fn_82F62600 on the static object lbl_832632C8.

extern void fn_82F62600(void *object);

extern char lbl_832632C8[];

void fn_83141C30(void)
{
    fn_82F62600(lbl_832632C8);
}
