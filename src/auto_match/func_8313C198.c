// Kinect Sports retail 4D5308C9, function 0x8313C198 (20 bytes).
// atexit destructor thunk: calls fn_822B7A78 with the first two words of the static object
// lbl_832865B8.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_822B7A78(void *first, void *second);

extern Pair lbl_832865B8;

void fn_8313C198(void)
{
    fn_822B7A78(lbl_832865B8.first, lbl_832865B8.second);
}
