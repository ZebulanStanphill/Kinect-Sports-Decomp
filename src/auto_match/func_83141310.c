// Kinect Sports retail 4D5308C9, function 0x83141310 (12 bytes).
// atexit destructor thunk: calls fn_828CAA28 on the static object lbl_83214380.

extern void fn_828CAA28(void *object);

extern char lbl_83214380[];

void fn_83141310(void)
{
    fn_828CAA28(lbl_83214380);
}
