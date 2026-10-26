// Kinect Sports retail 4D5308C9, function 0x8313A908 (20 bytes).
// atexit destructor for the static std::string lbl_83282E0C: std::string::_Tidy(true, 0)
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

extern String lbl_83282E0C;

void fn_8313A908(void)
{
    fn_82230300(&lbl_83282E0C, 1, 0);
}
