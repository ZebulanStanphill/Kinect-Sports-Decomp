typedef struct Slot {
    int state;          /* 0x00 */
    int x4;
    int x8;             /* 0x08 */
    unsigned int xc;    /* 0x0c */
    int x10;
    int x14;            /* 0x14 */
} Slot;

typedef struct Channel {
    char pad[0x140];
    unsigned int owner; /* 0x140 */
    char pad144[0x150 - 0x144];
} Channel;

extern int lbl_83215000[];
extern char *lbl_832179FC;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int KeSetEvent(void *ev, int increment, unsigned char wait);
extern void fn_82A1E810(void *p);

int fn_829D4C60(unsigned int idx, int signal)
{
    char *g;
    void *cs;
    Slot *s;
    Channel *ch;
    unsigned int i;

    if (idx >= 8) {
        return 0x80070057;
    }
    if (lbl_83215000[0x2148 / 4] == 0 || lbl_832179FC == 0) {
        return 0x83010005;
    }
    cs = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(cs);
    g = lbl_832179FC;
    s = (Slot *)(g + idx * sizeof(Slot));
    if (s->xc != 0xfe || s->x14 != 0) {
        RtlLeaveCriticalSection(cs);
        return 0x8301000a;
    }
    if (s->state == 2) {
        for (i = 0, ch = (Channel *)(g + 0xc0); i < 6; i++, ch++) {
            if (ch->owner == idx) {
                ch->owner = -1;
                break;
            }
        }
    }
    if (s->state == 2 || s->state == 1) {
        s->state = 0;
        s->x8 = 0;
        g[0x24975] = 1;
        if (signal != 0) {
            KeSetEvent(*(void **)(lbl_832179FC + 0x8f4c4), 0, 0);
        } else {
            fn_82A1E810(*(void **)(lbl_832179FC + 0x8f4b8));
        }
    }
    RtlLeaveCriticalSection(cs);
    return 0;
}
