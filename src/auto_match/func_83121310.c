// Kinect Sports retail 4D5308C9, function 0x83121310 (60 bytes).
// Static initializer: constructs the std::string lbl_83293FA4 from "GAME_OOBE_WORKSPACE" and
// registers its destructor (fn_8313E9A0) with atexit.

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
extern void fn_8313E9A0(void);
extern int atexit(void (*func)(void));

extern String lbl_83293FA4;

void fn_83121310(void)
{
    fn_82230110(&lbl_83293FA4, "GAME_OOBE_WORKSPACE");
    atexit(fn_8313E9A0);
}
