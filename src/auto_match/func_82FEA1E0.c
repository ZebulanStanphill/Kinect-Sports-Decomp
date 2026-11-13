typedef unsigned short U16;
typedef unsigned int U32;

typedef struct Event_82FEA1E0 {
    unsigned char pad0[2];
    U16 type;
    U32 handle;
    U32 a;
    U32 b;
    U32 c;
    U32 d;
    U32 rest[6];
} Event_82FEA1E0;

extern unsigned char *lbl_832642E0;
extern U32 lbl_832642E4;
extern U32 fn_82FAB9C0(void *table, U32 key);
extern U32 fn_8300F1E0(void);
extern U32 fn_8300F208(U32 ctx, Event_82FEA1E0 *ev, U16 size);

U32 fn_82FEA1E0(U32 param_1, U32 param_2, U32 param_3, U32 param_4, U32 param_5)
{
    Event_82FEA1E0 ev;

    ev.type = 0x1f;
    ev.handle = fn_82FAB9C0(lbl_832642E0 + 0x674, param_1);
    if (ev.handle != 0) {
        ev.a = param_3;
        ev.b = param_2;
        ev.c = param_4;
        ev.d = param_5;
        return fn_8300F208(lbl_832642E4, &ev, (U16)fn_8300F1E0());
    }
    return 2;
}
