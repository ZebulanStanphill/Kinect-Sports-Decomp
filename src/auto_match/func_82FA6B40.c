// Kinect Sports retail 4D5308C9, function 0x82FA6B40 (12 bytes).
// atexit destructor thunk: calls fn_82FA7FC8 on the static object lbl_83264240.

extern void fn_82FA7FC8(void *object);

extern char lbl_83264240[];

void fn_82FA6B40(void)
{
    fn_82FA7FC8(lbl_83264240);
}
