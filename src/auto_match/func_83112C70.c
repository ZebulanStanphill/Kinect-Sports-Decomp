// Kinect Sports retail 4D5308C9, function 0x83112C70 (60 bytes).
// Static initializer: constructs the std::string lbl_83288A10 from "GAME_OOBE_WORKSPACE" and
// registers its destructor (fn_8313CA98) with atexit.

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
extern void fn_8313CA98(void);
extern int atexit(void (*func)(void));

extern String lbl_83288A10;

void fn_83112C70(void)
{
    fn_82230110(&lbl_83288A10, "GAME_OOBE_WORKSPACE");
    atexit(fn_8313CA98);
}
