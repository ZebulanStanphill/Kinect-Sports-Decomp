// Kinect Sports retail 4D5308C9, function 0x83141E20 (12 bytes).
// atexit destructor thunk: calls fn_8305B3D0 on the static object lbl_83265058.

extern void fn_8305B3D0(void *object);

extern char lbl_83265058[];

void fn_83141E20(void)
{
    fn_8305B3D0(lbl_83265058);
}
