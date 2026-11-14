typedef int (*Handler_82887118)(int);

typedef struct {
    Handler_82887118 *handlers;
    int pad4;
    unsigned char *allowed;
    int count;
} Registry_82887118;

extern Registry_82887118 lbl_83212A18;
extern int (*lbl_83212A28)(void);
extern int fn_82880BD8(void);

static __forceinline int CallHandler(int i)
{
    Handler_82887118 f = lbl_83212A18.handlers[i];
    if (f != 0) {
        return f(0);
    }
    return 0;
}

int fn_82887118(void *unused, int owner)
{
    int r = 0;
    int i = lbl_83212A28();
    if (i >= 0 && i < lbl_83212A18.count) {
        if (owner != fn_82880BD8() || lbl_83212A18.allowed[i] != 0) {
            r = CallHandler(i);
        }
    }
    return r;
}
