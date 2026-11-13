typedef struct { int pad[4]; void *owner; } Sub_8267DD80;
typedef struct {
    int **cur;
    Sub_8267DD80 sub;
    void *ctx;
} Obj_8267DD80;

extern void fn_8267C838(void *p);
extern void fn_8267CDA8(void *ctx, Sub_8267DD80 *s, int timeout);
extern void fn_8267D840(void *p, Sub_8267DD80 *s);

static __forceinline int HasPending(int **p) { if (p != 0 && *p != 0) return 1; return 0; }
void fn_8267DD80(Obj_8267DD80 *o)
{
    Sub_8267DD80 *s = &o->sub;
    fn_8267C838(s->owner);
    while (HasPending(o->cur)) {
        fn_8267CDA8(o->ctx, s, -1);
    }
    fn_8267D840(s->owner, s);
}
