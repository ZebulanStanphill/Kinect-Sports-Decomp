// Kinect Sports retail 4D5308C9, function 0x8313EBC8 (20 bytes).
// atexit destructor thunk: calls fn_824A2B88 with the first two words of the static object
// lbl_83294808.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_824A2B88(void *first, void *second);

extern Pair lbl_83294808;

void fn_8313EBC8(void)
{
    fn_824A2B88(lbl_83294808.first, lbl_83294808.second);
}
