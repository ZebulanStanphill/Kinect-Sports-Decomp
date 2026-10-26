// Kinect Sports retail 4D5308C9, function 0x83140920 (12 bytes).
// atexit destructor thunk: calls fn_82889F90 on the static object lbl_83213E94.

extern void fn_82889F90(void *object);

extern char lbl_83213E94[];

void fn_83140920(void)
{
    fn_82889F90(lbl_83213E94);
}
