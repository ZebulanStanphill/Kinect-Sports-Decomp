// Kinect Sports retail 4D5308C9, function 0x8311D380 (60 bytes).
// Static initializer: constructs the std::string lbl_83291C40 from "GAME_OOBE_WORKSPACE" and
// registers its destructor (fn_8313E188) with atexit.

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
extern void fn_8313E188(void);
extern int atexit(void (*func)(void));

extern String lbl_83291C40;

void fn_8311D380(void)
{
    fn_82230110(&lbl_83291C40, "GAME_OOBE_WORKSPACE");
    atexit(fn_8313E188);
}
