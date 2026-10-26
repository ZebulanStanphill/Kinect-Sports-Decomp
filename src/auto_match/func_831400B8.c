// Kinect Sports retail 4D5308C9, function 0x831400B8 (12 bytes).
// atexit destructor thunk: calls fn_8281F880 on the static object lbl_8320A430.

extern void fn_8281F880(void *object);

extern char lbl_8320A430[];

void fn_831400B8(void)
{
    fn_8281F880(lbl_8320A430);
}
