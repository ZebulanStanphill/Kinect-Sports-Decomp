typedef struct String_8224C148 {
    char b[32];
} String_8224C148;

extern void fn_82230110(String_8224C148 *s, const char *text);
extern void fn_82230300(String_8224C148 *s, int built, unsigned int new_size);
extern void fn_82897B40(void *p);
extern void fn_82897DF8(void *, void *, void *);
extern int fn_828EA268(unsigned);

static __forceinline void Var0(char *s, char *owner, String_8224C148 *name)
{
    fn_82897DF8(s, owner, name);
}
static __forceinline void Var2(char *s, char *owner, String_8224C148 *name, int v)
{
    s[0xc] = 0;
    s[0x58] = 0;
    *(unsigned char *)(s + 0x59) = v;
    *(int *)(s + 0x5c) = fn_828EA268(v);
    fn_82897DF8(s, owner, name);
}
static __forceinline void Var4(char *s, char *owner, String_8224C148 *name)
{
    s[0xc] = 0;
    fn_82897DF8(s, owner, name);
}

void fn_8224C148(char *o)
{
    String_8224C148 s0, s1, s2;

    fn_82230110(&s0, "XUID");
    Var0(o + 0x34, o, &s0);
    fn_82230300(&s0, 1, 0);
    fn_82230110(&s1, "User index");
    Var2(o + 0x8c, o, &s1, 4);
    fn_82230300(&s1, 1, 0);
    fn_82230110(&s2, "Has headset");
    Var4(o + 0xec, o, &s2);
    fn_82230300(&s2, 1, 0);
    fn_82897B40(o + 0x34);
    fn_82897B40(o + 0x8c);
}
