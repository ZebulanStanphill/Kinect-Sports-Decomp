// Kinect Sports retail 4D5308C9, function 0x8313F010 (12 bytes).
// atexit destructor thunk: calls fn_8287C750 on the static object lbl_83297974.

extern void fn_8287C750(void *object);

extern char lbl_83297974[];

void fn_8313F010(void)
{
    fn_8287C750(lbl_83297974);
}
