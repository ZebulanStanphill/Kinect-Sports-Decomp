// Kinect Sports retail 4D5308C9, function 0x83141A90 (12 bytes).
// atexit destructor thunk: calls fn_82BEA1E8 on the static object lbl_8322B13C.

extern void fn_82BEA1E8(void *object);

extern char lbl_8322B13C[];

void fn_83141A90(void)
{
    fn_82BEA1E8(lbl_8322B13C);
}
