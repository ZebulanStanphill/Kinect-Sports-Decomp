typedef void (*Handler)(void);
extern void fn_827C2A78(void);
extern void fn_827C2D70(void);

typedef struct {
    char pad[0xc];
    Handler handler;
    void *x10;
} State;

typedef struct Obj {
    char pad[0x49];
    unsigned char x49;
    char pad2[0x88 - 0x4a];
    int x88;
    char pad3[0x188 - 0x8c];
    State *state;
} Obj;

extern unsigned char fn_827C2C28(Obj *o);

void fn_827C3500(Obj *o)
{
    State *s = o->state;
    if (s->x10 != 0) {
        if (o->x49 != 0 && fn_827C2C28(o) != 0) {
            s->handler = fn_827C2D70;
        } else {
            s->handler = fn_827C2A78;
        }
    }
    o->x88 = 0;
}
