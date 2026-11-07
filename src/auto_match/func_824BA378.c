typedef struct Player_824BA378 {
    char pad0[0x100];
    unsigned int *stats;
} Player_824BA378;

typedef struct Mgr_824BA378 {
    char cs[0x1c];
    Player_824BA378 *player;
    int stat;
    unsigned int kind;
    int flag;
    void *callback;
    int busy;
    int failed;
} Mgr_824BA378;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned char fn_828EA610(Player_824BA378 *p);
extern unsigned char fn_828EA5F8(Player_824BA378 *p);
extern unsigned char fn_82512508(Player_824BA378 *p);
extern int fn_824BA4F8(Mgr_824BA378 *m, Player_824BA378 *p, unsigned int kind, int flag, int extra);
extern void fn_824BABE8(void);

void fn_824BA378(Mgr_824BA378 *m, Player_824BA378 *p, unsigned int kind, int a, int b)
{
    int stat;
    int extra;

    if (p == 0 || fn_828EA610(p) || !fn_828EA5F8(p)) {
        return;
    }
    extra = 0;
    if (b != 0) {
        stat = 0x240;
    } else if (a != 0) {
        stat = 0x23f;
    } else {
        switch (kind) {
        case 0:
            stat = 0x23d;
            break;
        case 1:
            stat = 0x242;
            extra = 0x66;
            break;
        case 2:
            stat = 0x23e;
            extra = 0x22;
            break;
        case 3:
            stat = 0x241;
            extra = 0x44;
            break;
        default:
            return;
        }
    }
    if (p->stats[stat] != 1) {
        p->stats[stat] = 1;
    }
    RtlEnterCriticalSection(m);
    if (m->busy != 0) {
        m->failed = 1;
        RtlLeaveCriticalSection(m);
        return;
    }
    RtlLeaveCriticalSection(m);
    if (fn_82512508(p) && fn_824BA4F8(m, p, kind, a != 0 || b != 0, extra) != 0) {
        m->stat = stat;
        m->player = p;
        m->kind = kind;
        m->flag = a != 0 || b != 0;
        m->busy = 1;
        m->callback = (void *)fn_824BABE8;
        return;
    }
    m->failed = 1;
}
