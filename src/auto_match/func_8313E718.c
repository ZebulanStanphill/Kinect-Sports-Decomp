// Kinect Sports retail 4D5308C9, function 0x8313E718 (20 bytes).
// atexit destructor thunk: calls fn_824A2B88 with the first two words of the static object
// lbl_8329353C.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_824A2B88(void *first, void *second);

extern Pair lbl_8329353C;

void fn_8313E718(void)
{
    fn_824A2B88(lbl_8329353C.first, lbl_8329353C.second);
}
