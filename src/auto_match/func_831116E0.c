// Kinect Sports retail 4D5308C9, function 0x831116E0 (60 bytes).
// Static initializer: constructs the std::string lbl_83287D78 from "GAME_OOBE_WORKSPACE" and
// registers its destructor (fn_8313C6D8) with atexit.

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
extern void fn_8313C6D8(void);
extern int atexit(void (*func)(void));

extern String lbl_83287D78;

void fn_831116E0(void)
{
    fn_82230110(&lbl_83287D78, "GAME_OOBE_WORKSPACE");
    atexit(fn_8313C6D8);
}
