// Kinect Sports retail 4D5308C9, function 0x8313EB20 (20 bytes).
// atexit destructor thunk: calls fn_824A2B88 with the first two words of the static object
// lbl_83294590.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_824A2B88(void *first, void *second);

extern Pair lbl_83294590;

void fn_8313EB20(void)
{
    fn_824A2B88(lbl_83294590.first, lbl_83294590.second);
}
