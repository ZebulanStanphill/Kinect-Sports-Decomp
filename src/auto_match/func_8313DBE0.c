// Kinect Sports retail 4D5308C9, function 0x8313DBE0 (20 bytes).
// atexit destructor thunk: calls fn_822B7A78 with the first two words of the static object
// lbl_8328D828.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_822B7A78(void *first, void *second);

extern Pair lbl_8328D828;

void fn_8313DBE0(void)
{
    fn_822B7A78(lbl_8328D828.first, lbl_8328D828.second);
}
