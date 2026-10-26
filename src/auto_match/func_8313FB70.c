// Kinect Sports retail 4D5308C9, function 0x8313FB70 (12 bytes).
// atexit destructor thunk: calls fn_8265C8B8 on the static object lbl_831E7A04.

extern void fn_8265C8B8(void *object);

extern char lbl_831E7A04[];

void fn_8313FB70(void)
{
    fn_8265C8B8(lbl_831E7A04);
}
