// Kinect Sports retail 4D5308C9, function 0x8313C6C0 (20 bytes).
// atexit destructor thunk: calls fn_822B7A78 with the first two words of the static object
// lbl_83287D70.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_822B7A78(void *first, void *second);

extern Pair lbl_83287D70;

void fn_8313C6C0(void)
{
    fn_822B7A78(lbl_83287D70.first, lbl_83287D70.second);
}
