// Kinect Sports retail 4D5308C9, function 0x83141D50 (12 bytes).
// atexit destructor thunk: calls fn_830163B8 on the static object lbl_83264368.

extern void fn_830163B8(void *object);

extern char lbl_83264368[];

void fn_83141D50(void)
{
    fn_830163B8(lbl_83264368);
}
