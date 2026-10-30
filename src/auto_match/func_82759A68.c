typedef struct O O;
typedef struct S { char pad[0xc]; O *o; } S;
extern void *fn_8267B890(int heap, int size, int flags);
extern O *fn_827597E0(void *mem);
extern int lbl_831E7E64;

O *fn_82759A68(S *s)
{
    if (s->o == 0) {
        void *mem = fn_8267B890(lbl_831E7E64, 0x28, 0);
        s->o = mem ? fn_827597E0(mem) : 0;
    }
    return s->o;
}
