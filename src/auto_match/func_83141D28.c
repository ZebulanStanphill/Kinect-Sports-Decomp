// Kinect Sports retail 4D5308C9, function 0x83141D28 (12 bytes).
// atexit destructor thunk: calls fn_82FA7E08 on the static object lbl_83264240.

extern void fn_82FA7E08(void *object);

extern char lbl_83264240[];

void fn_83141D28(void)
{
    fn_82FA7E08(lbl_83264240);
}
