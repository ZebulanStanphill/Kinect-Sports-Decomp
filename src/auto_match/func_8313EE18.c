// Kinect Sports retail 4D5308C9, function 0x8313EE18 (20 bytes).
// atexit destructor thunk: calls fn_822B7A78 with the first two words of the static object
// lbl_83294F20.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_822B7A78(void *first, void *second);

extern Pair lbl_83294F20;

void fn_8313EE18(void)
{
    fn_822B7A78(lbl_83294F20.first, lbl_83294F20.second);
}
