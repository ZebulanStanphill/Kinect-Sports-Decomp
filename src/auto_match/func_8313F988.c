// Kinect Sports retail 4D5308C9, function 0x8313F988 (12 bytes).
// atexit destructor thunk: calls fn_82CE6978 on the static object lbl_831D453C.

extern void fn_82CE6978(void *object);

extern char lbl_831D453C[];

void fn_8313F988(void)
{
    fn_82CE6978(lbl_831D453C);
}
