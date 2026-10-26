// Kinect Sports retail 4D5308C9, function 0x83117238 (60 bytes).
// Static initializer: constructs the std::string lbl_8328AFDC from "GAME_OOBE_WORKSPACE" and
// registers its destructor (fn_8313D368) with atexit.

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
extern void fn_8313D368(void);
extern int atexit(void (*func)(void));

extern String lbl_8328AFDC;

void fn_83117238(void)
{
    fn_82230110(&lbl_8328AFDC, "GAME_OOBE_WORKSPACE");
    atexit(fn_8313D368);
}
