typedef struct Event_82FE8CF0 {
    unsigned char pad0[2];
    unsigned short type;
    unsigned int param;
    unsigned int handle;
    unsigned int rest[9];
} Event_82FE8CF0;

extern unsigned int lbl_832642E4;
extern unsigned int fn_82FE89F8(unsigned int a);
extern unsigned int fn_8300F110(void);
extern unsigned int fn_8300F208(unsigned int ctx, Event_82FE8CF0 *ev, unsigned short size);

unsigned int fn_82FE8CF0(unsigned int param_1, unsigned int param_2)
{
    Event_82FE8CF0 ev;
    unsigned int h;

    h = fn_82FE89F8(param_1);
    if (h != 0) {
        ev.param = param_2;
        ev.handle = h;
        ev.type = 5;
        return fn_8300F208(lbl_832642E4, &ev, (unsigned short)fn_8300F110());
    }
    return 0xf;
}
