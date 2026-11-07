extern "C" void fn_82E50CB8(void *);
extern "C" void fn_82E50F10(void *);
struct Lock_82E39F18 {
    void *cs;
    Lock_82E39F18(void *c) : cs(c) { fn_82E50CB8(cs); }
    ~Lock_82E39F18() { fn_82E50F10(cs); }
};
struct Obj_82E39F18 { char pad[8]; int cs[15]; int val; };
extern "C" int fn_82E39F18(Obj_82E39F18 *p, int *out) {
    Lock_82E39F18 lock(&p->cs);
    if (out == 0) return 0x80070057;
    *out = p->val;
    return 0;
}
