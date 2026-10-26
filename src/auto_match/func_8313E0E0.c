// Kinect Sports retail 4D5308C9, function 0x8313E0E0 (20 bytes).
// atexit destructor thunk: calls fn_822B7A78 with the first two words of the static object
// lbl_83291A7C.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_822B7A78(void *first, void *second);

extern Pair lbl_83291A7C;

void fn_8313E0E0(void)
{
    fn_822B7A78(lbl_83291A7C.first, lbl_83291A7C.second);
}
