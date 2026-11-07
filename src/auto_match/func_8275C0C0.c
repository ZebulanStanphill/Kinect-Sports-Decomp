typedef struct Obj_8275C0C0 {
    int f0;
    unsigned char *buf;
    unsigned char *derived;
} Obj_8275C0C0;

extern void fn_826959C8(unsigned char *p);
extern void fn_8269A1F0(unsigned char *p, void *v);
extern void *fn_826C52A8(void);
extern void *fn_8275BB38(unsigned char *p);

void fn_8275C0C0(Obj_8275C0C0 *o)
{
    unsigned char *base;
    unsigned char *buf;

    base = (o->derived != 0) ? o->derived - 0x10 : 0;
    buf = o->buf;
    fn_826959C8(buf);
    *buf = 0;
    if (base != 0 && fn_8275BB38(base) != 0) {
        fn_8269A1F0(o->buf, fn_826C52A8());
    }
}
