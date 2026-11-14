typedef struct Desc_82BDA4A8 {
    int f00;
    int f04;
    int f08;
    int slot;
} Desc_82BDA4A8;

typedef struct Owner_82BDA4A8 {
    int f00;
    int f04;
    char list[1];
} Owner_82BDA4A8;

typedef struct Port_82BDA4A8 {
    int f00;
    Owner_82BDA4A8 *owner;
    void *active[2];
    int state[2];
    Desc_82BDA4A8 *desc;
} Port_82BDA4A8;

typedef struct Mgr_82BDA4A8 {
    char pad0[0x18];
    Port_82BDA4A8 *ports[2];
    unsigned int count;
} Mgr_82BDA4A8;

extern void XMemSet(void *dst, int value, unsigned int size);
extern int fn_82BD7EF8(void *list);

static __forceinline int GetActive(Port_82BDA4A8 *port)
{
    unsigned int j;

    for (j = 0; j < 2; j++) {
        if (port->active[j] != 0 && port->state[j] == 1) {
            return fn_82BD7EF8(port->owner->list);
        }
    }
    return 0;
}

void fn_82BDA4A8(Mgr_82BDA4A8 *mgr, int *out)
{
    unsigned int i;

    XMemSet(out, 0, 0xc);
    for (i = 0; i < mgr->count; i++) {
        Port_82BDA4A8 *port = mgr->ports[i];
        int slot = port->desc->slot;
        out[slot] = GetActive(port);
    }
}
