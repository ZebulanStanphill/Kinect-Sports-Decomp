// Kinect Sports retail 4D5308C9, function 0x8313D9B0 (12 bytes).
// atexit destructor thunk: calls fn_82359C18 on the static object lbl_8328CF70.

extern void fn_82359C18(void *object);

extern char lbl_8328CF70[];

void fn_8313D9B0(void)
{
    fn_82359C18(lbl_8328CF70);
}
