typedef struct Iface_824DC828 Iface_824DC828;
typedef struct IfaceVt_824DC828 {
    void *pad0[2];
    int (*IsReady)(Iface_824DC828 *self);
} IfaceVt_824DC828;
struct Iface_824DC828 { IfaceVt_824DC828 *vt; };

typedef struct GroupA_824DC828 {
    char pad0[0x4c];
    Iface_824DC828 done;
    char pad50[0x1c];
    Iface_824DC828 ready;
} GroupA_824DC828;

typedef struct GroupB_824DC828 {
    char pad0[0xf0];
    Iface_824DC828 ready;
    char padf4[0x3c];
    Iface_824DC828 done;
} GroupB_824DC828;

typedef struct GroupC_824DC828 {
    char pad0[0x80];
    Iface_824DC828 done;
    char pad84[0x1c];
    Iface_824DC828 ready;
} GroupC_824DC828;

typedef struct Self_824DC828 {
    char pad0[0xf8];
    GroupA_824DC828 a;
    char pad[0x190 - 0xf8 - sizeof(GroupA_824DC828)];
    GroupB_824DC828 b;
    char pad2[0x318 - 0x190 - sizeof(GroupB_824DC828)];
    GroupC_824DC828 c;
    char pad3[0x440 - 0x318 - sizeof(GroupC_824DC828)];
    int state;
} Self_824DC828;

void fn_824DC828(Self_824DC828 *self, unsigned int mode)
{
    int state = 4;
    switch (mode) {
    case 0: {
        GroupC_824DC828 *g = &self->c;
        if (g->ready.vt->IsReady(&g->ready) != 0)
            state = g->done.vt->IsReady(&g->done) == 0 ? 2 : 3;
        else
            state = 1;
        break;
    }
    case 1:
    case 2: {
        GroupA_824DC828 *g = &self->a;
        if (g->ready.vt->IsReady(&g->ready) != 0)
            state = g->done.vt->IsReady(&g->done) == 0 ? 2 : 3;
        else
            state = 1;
        break;
    }
    case 3: {
        GroupB_824DC828 *g = &self->b;
        if (g->ready.vt->IsReady(&g->ready) != 0)
            state = g->done.vt->IsReady(&g->done) == 0 ? 2 : 3;
        else
            state = 1;
        break;
    }
    }
    self->state = state;
}
