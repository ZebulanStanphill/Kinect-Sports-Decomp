// Kinect Sports retail 4D5308C9, function 0x8313FF58 (12 bytes).
// atexit destructor thunk: calls fn_826DFD28 on the static object lbl_831F134C.

extern void fn_826DFD28(void *object);

extern char lbl_831F134C[];

void fn_8313FF58(void)
{
    fn_826DFD28(lbl_831F134C);
}
