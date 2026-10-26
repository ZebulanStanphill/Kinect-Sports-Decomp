// Kinect Sports retail 4D5308C9, function 0x8313E6E8 (20 bytes).
// atexit destructor thunk: calls fn_824A2B88 with the first two words of the static object
// lbl_83293458.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_824A2B88(void *first, void *second);

extern Pair lbl_83293458;

void fn_8313E6E8(void)
{
    fn_824A2B88(lbl_83293458.first, lbl_83293458.second);
}
