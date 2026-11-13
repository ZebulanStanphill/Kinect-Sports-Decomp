typedef struct Event_82FEA2E0 {
    unsigned char pad0[2];
    unsigned short type;
    unsigned int handle;
    unsigned int a;
    unsigned int b;
    unsigned int rest[8];
} Event_82FEA2E0;

extern unsigned char *lbl_832642E0;
extern unsigned int lbl_832642E4;
extern unsigned int fn_82FAB9C0(void *table, unsigned int key);
extern unsigned int fn_8300F1F8(void);
extern unsigned int fn_8300F208(unsigned int ctx, Event_82FEA2E0 *ev, unsigned short size);

unsigned int fn_82FEA2E0(unsigned int key, unsigned int a, unsigned int b)
{
    Event_82FEA2E0 ev;

    ev.type = 0x23;
    ev.handle = fn_82FAB9C0(lbl_832642E0 + 0x674, key);
    if (ev.handle != 0) {
        ev.a = a;
        ev.b = b;
        return fn_8300F208(lbl_832642E4, &ev, (unsigned short)fn_8300F1F8());
    }
    return 2;
}
