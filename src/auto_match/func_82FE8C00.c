typedef unsigned short U16;
typedef unsigned int U32;

typedef struct Event_82FE8C00 {
    unsigned char pad0[2];
    U16 type;
    U32 param;
    U32 first;
    U32 second;
    U32 rest[8];
} Event_82FE8C00;

extern U32 lbl_832642E4;
extern U32 fn_82FE89F8(U32 a);
extern U32 fn_8300F108(void);
extern U32 fn_8300F208(U32 ctx, Event_82FE8C00 *ev, U16 size);

U32 fn_82FE8C00(U32 param_1, U32 param_2, U32 param_3)
{
    Event_82FE8C00 ev;
    U32 a;
    U32 b;

    a = fn_82FE89F8(param_1);
    b = fn_82FE89F8(param_2);
    if (a != 0 && b != 0) {
        ev.param = param_3;
        ev.first = a;
        ev.type = 4;
        ev.second = b;
        return fn_8300F208(lbl_832642E4, &ev, (U16)fn_8300F108());
    }
    return 0xf;
}
