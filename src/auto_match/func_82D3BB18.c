typedef struct {
    unsigned int id;
    char type;
    char ownerOffset;
} Handle_82D3BB18;

typedef struct {
    char pad[0x14];
    Handle_82D3BB18 handle;
    char pad1c[0x20 - 0x1c];
    int x20;
    char pad24[0x30 - 0x24];
    int x30;
    char pad34[0x40 - 0x34];
    short x40;
    short x42;
    int x44;
    int x48;
} Obj_82D3BB18;

void fn_82D3BB18(Obj_82D3BB18 *o, int enable)
{
    Handle_82D3BB18 *h;
    if (o == 0) {
        return;
    }
    if (enable == 0) {
        return;
    }
    h = &o->handle;
    o->x40 = 0;
    o->x42 = 0;
    o->x44 = 0;
    o->x48 = 0;
    o->x20 = 1;
    o->x30 = 0;
    h->ownerOffset = (char)((unsigned int)o - (unsigned int)h);
}
