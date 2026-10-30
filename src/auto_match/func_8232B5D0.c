typedef struct {
    char pad[0x93c];
    void *owner;
} Mgr;

typedef struct {
    char pad[0xf8];
    void *handle;
    Mgr *mgr;
} Sub;

typedef struct {
    char pad[0x10];
    Sub sub;
} Obj;

extern void fn_82575DF0(void *owner, void *handle);

void fn_8232B5D0(Obj *o)
{
    Sub *s = &o->sub;
    if (s->handle != 0) {
        fn_82575DF0(s->mgr->owner, s->handle);
        s->handle = 0;
    }
}
