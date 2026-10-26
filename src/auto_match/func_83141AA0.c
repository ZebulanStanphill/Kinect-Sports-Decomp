// Kinect Sports retail 4D5308C9, function 0x83141AA0 (12 bytes).
// atexit destructor thunk: calls fn_82BEA1E8 on the static object lbl_8322B184.

extern void fn_82BEA1E8(void *object);

extern char lbl_8322B184[];

void fn_83141AA0(void)
{
    fn_82BEA1E8(lbl_8322B184);
}
