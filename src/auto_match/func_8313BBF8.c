// Kinect Sports retail 4D5308C9, function 0x8313BBF8 (20 bytes).
// atexit destructor thunk: calls fn_822B7A78 with the first two words of the static object
// lbl_83284E78.

typedef struct {
    void *first;
    void *second;
} Pair;

extern void fn_822B7A78(void *first, void *second);

extern Pair lbl_83284E78;

void fn_8313BBF8(void)
{
    fn_822B7A78(lbl_83284E78.first, lbl_83284E78.second);
}
