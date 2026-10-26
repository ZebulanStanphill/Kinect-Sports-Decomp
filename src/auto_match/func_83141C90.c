// Kinect Sports retail 4D5308C9, function 0x83141C90 (12 bytes).
// atexit destructor thunk: calls fn_82F62600 on the static object lbl_8326337C.

extern void fn_82F62600(void *object);

extern char lbl_8326337C[];

void fn_83141C90(void)
{
    fn_82F62600(lbl_8326337C);
}
