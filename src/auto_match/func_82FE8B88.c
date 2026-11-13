typedef struct Event_82FE8B88 {
    unsigned char pad0[2];
    unsigned short type;
    unsigned int param;
    unsigned int first;
    unsigned int second;
    unsigned int rest[8];
} Event_82FE8B88;

extern unsigned int lbl_832642E4;
extern unsigned int fn_82FE8948(unsigned int a);
extern unsigned int fn_8300F108(void);
extern unsigned int fn_8300F208(unsigned int ctx, Event_82FE8B88 *ev, unsigned short size);

unsigned int fn_82FE8B88(unsigned int param_1, unsigned int param_2, unsigned int param_3)
{
    Event_82FE8B88 ev;
    unsigned int a;
    unsigned int b;

    a = fn_82FE8948(param_1);
    b = fn_82FE8948(param_2);
    if (a != 0 && b != 0) {
        ev.param = param_3;
        ev.first = a;
        ev.type = 4;
        ev.second = b;
        return fn_8300F208(lbl_832642E4, &ev, (unsigned short)fn_8300F108());
    }
    return 0xf;
}
