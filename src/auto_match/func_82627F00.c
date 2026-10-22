typedef struct Ref {
    void *a;
    void *p;
} Ref;

typedef struct Obj {
    int f0;
    void *f4;
    void *f8;
    char pad[0x34 - 0xc];
    void **begin;
    void **end;
} Obj;

extern unsigned int fn_827D96A0(void *p);
extern void fn_822315A0(void *p);
extern void fn_82517978(Ref *r, void *a, void *b, int c);
extern void fn_82517A50(void *dst, Ref *r);
extern void fn_823F2E20(void *dst, Ref *r);

void fn_82627F00(Obj *self, unsigned int *key, void *def, Ref *ref, void **out, void *dst)
{
    void **it;

    for (it = self->begin; it != self->end; it++) {
        if ((unsigned short)fn_827D96A0(*it) == *key) {
            if (*it != 0) {
                Ref tmp;
                *out = *it;
                tmp.a = 0;
                tmp.p = 0;
                fn_82517978(&tmp, self->f4, self->f8, 1);
                fn_823F2E20(dst, &tmp);
                if (tmp.p)
                    fn_822315A0(tmp.p);
                goto done;
            }
            break;
        }
    }
    *out = def;
    fn_82517A50(dst, ref);
done:
    if (ref->p)
        fn_822315A0(ref->p);
}
