typedef struct { char b[0x34]; } Elem;

typedef struct {
    char pad[0x88];
    Elem *begin;
    Elem *end;
} Obj;

extern int fn_828E9DA8(void *s);
extern int fn_828E9D90(void *s);
extern void fn_828EA180(void *s, void *buf, int n);
extern void fn_828D4D00(Elem *e, void *buf);
void fn_828DC8A0(Obj *o, void *s)
{
    Elem *p;
    char buf[48];
    for (p = o->begin; p != o->end; p++) {
            if (fn_828E9DA8(s) - fn_828E9D90(s) >= 0x150)
                fn_828EA180(s, buf, 0x2a);
            fn_828D4D00(p, buf);
    }
}
