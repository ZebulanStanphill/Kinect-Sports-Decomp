// Kinect Sports retail 4D5308C9, function 0x8310DDE0 (60 bytes).
// Static initializer: constructs the std::string lbl_83285AB8 from "righthand_pickup_fast" and
// registers its destructor (fn_8313BE98) with atexit.

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

extern void fn_82230110(String *s, const char *text);
extern void fn_8313BE98(void);
extern int atexit(void (*func)(void));

extern String lbl_83285AB8;

void fn_8310DDE0(void)
{
    fn_82230110(&lbl_83285AB8, "righthand_pickup_fast");
    atexit(fn_8313BE98);
}
