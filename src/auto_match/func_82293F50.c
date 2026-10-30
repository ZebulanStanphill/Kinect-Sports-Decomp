typedef struct { void *ptr; void *rep; } SP;
typedef struct {
    void *vt;
    char pad0[0x68 - 4];
    SP a;
    char pad1[0x129c - 0x70];
    SP b;
} Obj;
extern unsigned int lbl_821AA90C;
extern void fn_822315A0(void *);
extern void fn_8229A230(SP *);
extern void fn_8229AA08(void *);
extern void fn_82672660(void *, SP *);
void fn_82293F50(Obj *p)
{
    p->vt = &lbl_821AA90C;
    { SP *s = &p->b;
    fn_82672660(s->ptr, s);
    fn_8229A230(s);
    if (s->rep != 0)
        fn_822315A0(s->rep); }
    { SP *s = &p->a;
    fn_82672660(s->ptr, s);
    fn_8229A230(s);
    if (s->rep != 0)
        fn_822315A0(s->rep); }
    fn_8229AA08(p);

}
