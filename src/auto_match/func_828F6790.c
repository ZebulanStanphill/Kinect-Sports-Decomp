typedef struct Node {
    int value;
    struct Node *next;
} Node;

typedef struct Obj {
    char pad0[0x44];
    Node *list;
    char pad48[0x4];
    int done;
    char pad50[0x278 - 0x50];
    int handle;
    char pad27c[0x4];
    int state;
    char pad284[0x4];
    int value;
    char pad28c[0x2a0 - 0x28c];
    int arg;
} Obj;

extern void *fn_8265C940(int size, int flags);
extern int fn_828FAF58(int handle, int x);
extern int fn_828FBB60(int handle, int arg, int *state);

static Node *Node_ctor(Node *n, Node *next, int value)
{
    n->value = value;
    n->next = next;
    return n;
}

int fn_828F6790(Obj *o)
{
    int hr;
    int *state = &o->state;
    Node *mem;

    hr = fn_828FBB60(o->handle, o->arg, state);
    if (hr >= 0) {
        if (*state == 2 || *state == 4) {
            mem = (Node *)fn_8265C940(8, 0x24810000);
            o->list = mem ? Node_ctor(mem, o->list, o->value) : 0;
            if (o->list == 0) {
                hr = 0x8007000e;
                goto done;
            }
            hr = fn_828FBB60(o->handle, o->arg, state);
            if (hr < 0)
                goto done;
            if (*state == 0xc || *state == 0xd)
                goto ok;
        }
        if (*state != 0xc && *state != 0xd)
            fn_828FAF58(o->handle, 0);
ok:
        hr = 0;
    }
done:
    o->done = 1;
    return hr;
}
