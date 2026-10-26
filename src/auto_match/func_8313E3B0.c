// Kinect Sports retail 4D5308C9, function 0x8313E3B0 (20 bytes).
// atexit destructor for the static std::string lbl_832925D0: std::string::_Tidy(true, 0)
// (fn_82230300) frees its buffer.

// std::string (Visual C++ 2010, 0x1C bytes): the inline buffer or heap pointer, the size,
// the capacity and the empty allocator.
typedef struct {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int capacity;
    char alloc;
} String;

extern void fn_82230300(String *s, int built, unsigned int new_size);

extern String lbl_832925D0;

void fn_8313E3B0(void)
{
    fn_82230300(&lbl_832925D0, 1, 0);
}
