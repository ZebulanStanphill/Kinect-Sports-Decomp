typedef unsigned short U16;
typedef unsigned int U32;

typedef struct Event_82FE8CF0 {
    unsigned char pad0[2];
    U16 type;
    U32 param;
    U32 handle;
    U32 rest[9];
} Event_82FE8CF0;

extern U32 lbl_832642E4;
extern U32 fn_82FE89F8(U32 a);
extern U32 fn_8300F110(void);
extern U32 fn_8300F208(U32 ctx, Event_82FE8CF0 *ev, U16 size);

U32 fn_82FE8CF0(U32 param_1, U32 param_2)
{
    Event_82FE8CF0 ev;
    U32 h;

    h = fn_82FE89F8(param_1);
    if (h != 0) {
        ev.param = param_2;
        ev.handle = h;
        ev.type = 5;
        return fn_8300F208(lbl_832642E4, &ev, (U16)fn_8300F110());
    }
    return 0xf;
}
