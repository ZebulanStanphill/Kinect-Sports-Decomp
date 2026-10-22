typedef struct {
    char buf[32];
} String;

typedef struct {
    char storage[16];
    void *impl;
} Function;

extern void fn_82230110(String *s, const char *text);
extern void fn_82230300(String *s, int a, int b);
extern void fn_822FB198(void *p, String *s);
extern void fn_823000E0(void *p, Function *f);

typedef struct {
    char pad0[0xc];
    char *game;
} Obj;

void fn_82304968(Obj *o)
{
    String s;
    Function f;
    char *g;

    fn_82230110(&s, "idleset_default");
    fn_822FB198(*(void **)(*(char **)(o->game + 0x114) + 0xc0), &s);
    fn_82230300(&s, 1, 0);
    g = o->game;
    f.impl = 0;
    *(int *)(*(char **)(g + 0x1e8) + 0x578) = 0;
    fn_823000E0(*(void **)(g + 0x1e8), &f);
}
