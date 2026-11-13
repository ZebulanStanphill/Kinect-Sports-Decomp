/* Static initializer: constructs the four std::strings of lbl_83283E60 ("Banjo", "Kazooie",
   "Grunty", "Bottles") and registers the array destructor (fn_8313B648) with atexit. */

/* std::string (Visual C++ 2010, 0x1C bytes). */
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
extern void fn_8313B648(void);
extern int atexit(void (*func)(void));

extern String lbl_83283E60[4];

void fn_8310AE28(void)
{
    fn_82230110(&lbl_83283E60[0], "Banjo");
    fn_82230110(&lbl_83283E60[1], "Kazooie");
    fn_82230110(&lbl_83283E60[2], "Grunty");
    fn_82230110(&lbl_83283E60[3], "Bottles");
    atexit(fn_8313B648);
}
