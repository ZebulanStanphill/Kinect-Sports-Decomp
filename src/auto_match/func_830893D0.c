typedef void (*Func_830893D0)(void);
typedef struct Table_830893D0 { Func_830893D0 f[7]; } Table_830893D0;
typedef struct TableRef_830893D0 { Table_830893D0 *table; int count; } TableRef_830893D0;
typedef struct FuncPair_830893D0 { Func_830893D0 a; Func_830893D0 b; } FuncPair_830893D0;

/* both by-value arguments live in one stack block: ref at 0x50, pair at 0x58 */
typedef struct Args_830893D0 { TableRef_830893D0 ref; FuncPair_830893D0 pair; } Args_830893D0;

extern Table_830893D0 lbl_832656F0;
extern void fn_82CE8268(void *ctx, int kind, TableRef_830893D0 ref, FuncPair_830893D0 pair);
extern void fn_8309A540(void);
extern void fn_8309A490(void);
extern void fn_830997F8(void);
extern void fn_8309A9C8(void);
extern void fn_83099E28(void);
extern void fn_830996D0(void);
extern void fn_83099580(void);
extern void fn_83089260(void);
extern void fn_83089070(void);

void fn_830893D0(void *ctx)
{
    Args_830893D0 a;

    lbl_832656F0.f[3] = fn_8309A9C8;
    lbl_832656F0.f[4] = fn_83099E28;
    lbl_832656F0.f[0] = fn_8309A540;
    lbl_832656F0.f[1] = fn_8309A490;
    lbl_832656F0.f[2] = fn_830997F8;
    lbl_832656F0.f[5] = fn_830996D0;
    lbl_832656F0.f[6] = fn_83099580;
    a.ref.table = &lbl_832656F0;
    a.pair.a = fn_83089260;
    a.pair.b = fn_83089070;
    a.ref.count = 7;
    fn_82CE8268(ctx, 2, a.ref, a.pair);
}
