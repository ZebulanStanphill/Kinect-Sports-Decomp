typedef struct Desc_82BD6FD0 {
    int f00;
    int f04;
    int f08;
    int slot;
} Desc_82BD6FD0;

typedef struct Owner_82BD6FD0 {
    int f00;
    int f04;
    char list[1];
} Owner_82BD6FD0;

typedef struct Port_82BD6FD0 {
    int f00;
    Owner_82BD6FD0 *owner;
    void *active[2];
    int state[2];
    Desc_82BD6FD0 *desc;
} Port_82BD6FD0;

typedef struct Mgr_82BD6FD0 {
    char pad0[0x30];
    Port_82BD6FD0 *ports[2];
    unsigned int count;
} Mgr_82BD6FD0;

extern void XMemSet(void *dst, int value, unsigned int size);
extern int fn_82BD7EF8(void *list);

static __forceinline int GetActive(Port_82BD6FD0 *port)
{
    unsigned int j;

    for (j = 0; j < 2; j++) {
        if (port->active[j] != 0 && port->state[j] == 1) {
            return fn_82BD7EF8(port->owner->list);
        }
    }
    return 0;
}

void fn_82BD6FD0(Mgr_82BD6FD0 *mgr, int *out)
{
    unsigned int i;

    XMemSet(out, 0, 0xc);
    for (i = 0; i < mgr->count; i++) {
        Port_82BD6FD0 *port = mgr->ports[i];
        int slot = port->desc->slot;
        out[slot] = GetActive(port);
    }
}
