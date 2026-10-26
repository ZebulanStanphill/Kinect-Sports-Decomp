// Kinect Sports retail 4D5308C9, function 0x83141CA0 (12 bytes).
// atexit destructor thunk: calls fn_82F63B08 on the static object lbl_8326337D.

extern void fn_82F63B08(void *object);

extern char lbl_8326337D[];

void fn_83141CA0(void)
{
    fn_82F63B08(lbl_8326337D);
}
