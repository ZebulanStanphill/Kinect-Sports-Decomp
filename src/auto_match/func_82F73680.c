typedef struct {
    void *f0;
    int f4;
} Obj_82F73680;
extern char lbl_832635A0[];
extern void fn_82F73308(Obj_82F73680 *o, const char *s);
extern void *fn_82F72318(void *heap, int size, int flags);
extern void *fn_82F72C10(void *mem, const char *s, int len);
extern void fn_82F72A00(Obj_82F73680 *o, void *node);

Obj_82F73680 *fn_82F73680(Obj_82F73680 *o, const char *s)
{
    if ((o->f4 & (int)0xff000000) <= 0x1000000 && s != 0 && *s != 0) {
        if (o->f0 == 0) {
            fn_82F73308(o, s);
        } else {
            void *mem = fn_82F72318(lbl_832635A0, 0xc, 0);
            void *n;
            if (mem != 0) {
                int len = 0;
                while (s[len] != 0) {
                    len++;
                }
                n = fn_82F72C10(mem, s, len);
            } else {
                n = 0;
            }
            fn_82F72A00(o, n);
        }
    }
    return o;
}
