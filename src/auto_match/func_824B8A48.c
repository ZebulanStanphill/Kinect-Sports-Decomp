extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
typedef struct {
    char pad0[0x100];
    unsigned int *flags;
} Player_824B8A48;
typedef struct {
    int cs[7];
    Player_824B8A48 *player;
    int id;
    unsigned int kind;
    int f28;
    void (*cb)(void);
    int busy;
    int failed;
} Mgr_824B8A48;
extern unsigned char fn_828EA610(Player_824B8A48 *p);
extern unsigned char fn_828EA5F8(Player_824B8A48 *p);
extern unsigned char fn_82512508(Player_824B8A48 *p);
extern int fn_824B8B78(Mgr_824B8A48 *m, Player_824B8A48 *p, unsigned int kind, int arg);
extern void fn_824B8FE0(void);

void fn_824B8A48(Mgr_824B8A48 *m, Player_824B8A48 *p, unsigned int kind)
{
    int id;
    int arg;
    if (p == 0 || fn_828EA610(p) != 0 || fn_828EA5F8(p) == 0) {
        return;
    }
    arg = 0;
    switch (kind) {
    case 0:
        id = 0x159;
        break;
    case 1:
        id = 0x15c;
        arg = 0x52;
        break;
    case 2:
        id = 0x15a;
        arg = 0x1e;
        break;
    case 3:
        id = 0x15b;
        arg = 0x38;
        break;
    default:
        return;
    }
    if (p->flags[id] != 1) {
        p->flags[id] = 1;
    }
    RtlEnterCriticalSection(m);
    if (m->busy != 0) {
        m->failed = 1;
        RtlLeaveCriticalSection(m);
        return;
    }
    RtlLeaveCriticalSection(m);
    if (fn_82512508(p) != 0 && fn_824B8B78(m, p, kind, arg) != 0) {
        m->id = id;
        m->player = p;
        m->kind = kind;
        m->f28 = 0;
        m->busy = 1;
        m->cb = fn_824B8FE0;
    } else {
        m->failed = 1;
    }
}
