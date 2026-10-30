typedef struct Obj { void **vt; } Obj;
typedef struct S { char pad[0xc]; Obj *o; } S;
extern void fn_822408B0(void *dst, S *s, void *src);

void fn_82240908(S *s)
{
    char *r = ((char *(*)(Obj *))s->o->vt[15])(s->o);
    fn_822408B0((char *)s + 0x38, s, r + 0x34);
    fn_822408B0((char *)s + 0x98, s, r + 0x8c);
}
