// Kinect Sports retail 4D5308C9, function 0x83141BD8 (12 bytes).
// atexit destructor thunk: calls fn_82F53168 on the static object lbl_83262510.

extern void fn_82F53168(void *object);

extern char lbl_83262510[];

void fn_83141BD8(void)
{
    fn_82F53168(lbl_83262510);
}
