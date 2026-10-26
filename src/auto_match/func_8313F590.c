// Kinect Sports retail 4D5308C9, function 0x8313F590 (12 bytes).
// atexit destructor thunk: calls fn_822CD140 on the static object lbl_83296BC0.

extern void fn_822CD140(void *object);

extern char lbl_83296BC0[];

void fn_8313F590(void)
{
    fn_822CD140(lbl_83296BC0);
}
