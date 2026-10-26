// Kinect Sports retail 4D5308C9, function 0x8312AB70 (20 bytes).
// atexit destructor for the static std::string lbl_8323A8F0: std::string::_Tidy(true, 0)
// (memset) frees its buffer.

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

extern void memset(String *s, int built, unsigned int new_size);

extern String lbl_8323A8F0;

void fn_8312AB70(void)
{
    memset(&lbl_8323A8F0, 0, 44);
}
