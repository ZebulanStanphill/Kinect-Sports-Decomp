// Kinect Sports retail 4D5308C9, function 0x8310A5E8 (60 bytes).
// Static initializer: constructs the std::string lbl_83283AC8 from "GAME_OOBE_WORKSPACE" and
// registers its destructor (fn_8313B338) with atexit.

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
extern void fn_8313B338(void);
extern int atexit(void (*func)(void));

extern String lbl_83283AC8;

void fn_8310A5E8(void)
{
    fn_82230110(&lbl_83283AC8, "GAME_OOBE_WORKSPACE");
    atexit(fn_8313B338);
}
