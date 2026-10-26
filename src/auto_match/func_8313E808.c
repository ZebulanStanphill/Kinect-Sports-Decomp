// Kinect Sports retail 4D5308C9, function 0x8313E808 (20 bytes).
// atexit destructor thunk: calls fn_824A2B88 with the first two words of the static object
// lbl_832939B0.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_824A2B88(void *first, void *second);

extern Pair lbl_832939B0;

void fn_8313E808(void)
{
    fn_824A2B88(lbl_832939B0.first, lbl_832939B0.second);
}
