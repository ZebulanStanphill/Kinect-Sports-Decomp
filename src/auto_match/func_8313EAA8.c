// Kinect Sports retail 4D5308C9, function 0x8313EAA8 (20 bytes).
// atexit destructor thunk: calls fn_824A2B88 with the first two words of the static object
// lbl_832942BC.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_824A2B88(void *first, void *second);

extern Pair lbl_832942BC;

void fn_8313EAA8(void)
{
    fn_824A2B88(lbl_832942BC.first, lbl_832942BC.second);
}
