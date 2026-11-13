typedef struct Event_82FEA1E0 {
    unsigned char pad0[2];
    unsigned short type;
    unsigned int handle;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned int rest[6];
} Event_82FEA1E0;

extern unsigned char *lbl_832642E0;
extern unsigned int lbl_832642E4;
extern unsigned int fn_82FAB9C0(void *table, unsigned int key);
extern unsigned int fn_8300F1E0(void);
extern unsigned int fn_8300F208(unsigned int ctx, Event_82FEA1E0 *ev, unsigned short size);

unsigned int fn_82FEA1E0(unsigned int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5)
{
    Event_82FEA1E0 ev;

    ev.type = 0x1f;
    ev.handle = fn_82FAB9C0(lbl_832642E0 + 0x674, param_1);
    if (ev.handle != 0) {
        ev.a = param_3;
        ev.b = param_2;
        ev.c = param_4;
        ev.d = param_5;
        return fn_8300F208(lbl_832642E4, &ev, (unsigned short)fn_8300F1E0());
    }
    return 2;
}
