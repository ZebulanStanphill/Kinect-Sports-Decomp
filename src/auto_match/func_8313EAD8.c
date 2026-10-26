// Kinect Sports retail 4D5308C9, function 0x8313EAD8 (20 bytes).
// atexit destructor thunk: calls fn_824A2B88 with the first two words of the static object
// lbl_832943F8.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_824A2B88(void *first, void *second);

extern Pair lbl_832943F8;

void fn_8313EAD8(void)
{
    fn_824A2B88(lbl_832943F8.first, lbl_832943F8.second);
}
