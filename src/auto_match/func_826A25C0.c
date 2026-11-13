// Kinect Sports retail 4D5308C9, function 0x826A25C0 (72 bytes).
// Recursion guard: once the depth at +0x44 reaches 255, logs "256 levels of recursion is reached"
// through the variadic logger fn_82693F78 (on the log sub-object at +0xc of the object at +0x30).

extern void fn_82693F78(unsigned p, const char *fmt, ...);

typedef struct {
    char pad0[0x30];
    unsigned owner;
    char pad34[0x44 - 0x34];
    int depth;
} Context_826A25C0;

unsigned char fn_826A25C0(Context_826A25C0 *c)
{
    if (c->depth >= 0xff) {
        fn_82693F78(c->owner + 0xc, "256 levels of recursion is reached\n");
        return 1;
    }
    return 0;
}
