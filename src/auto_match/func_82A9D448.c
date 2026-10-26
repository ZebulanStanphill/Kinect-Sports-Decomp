int stricmp(const char *a, const char *b);
typedef struct T { char pad[0x100]; int x100; } T;
typedef struct S { char pad[0x80]; T *x80; char *x84; } S;
extern void fn_82A9C190(S *s, T *t, int v);

void fn_82A9D448(S *s)
{
    if (s->x84 != 0 && stricmp(s->x84, "FXL") != 0 && s->x80 != 0) {
        fn_82A9C190(s, s->x80, s->x80->x100);
    } else {
        fn_82A9C190(s, 0, 0);
    }
}
