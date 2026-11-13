typedef void (*Func_83088FB0)(void);
typedef struct Table_83088FB0 { Func_83088FB0 f[8]; } Table_83088FB0;
typedef struct TableRef_83088FB0 { Table_83088FB0 *table; int count; } TableRef_83088FB0;
typedef struct FuncPair_83088FB0 { Func_83088FB0 a; Func_83088FB0 b; } FuncPair_83088FB0;

/* both by-value arguments live in one stack block: ref at 0x50, pair at 0x58 */
typedef struct Args_83088FB0 { TableRef_83088FB0 ref; FuncPair_83088FB0 pair; } Args_83088FB0;

extern Table_83088FB0 lbl_832656D0;
extern void fn_82CE8268(void *ctx, int kind, TableRef_83088FB0 ref, FuncPair_83088FB0 pair);
extern void fn_83099190(void);
extern void fn_83098A18(void);
extern void fn_83097978(void);
extern void fn_83097A58(void);
extern void fn_83097E18(void);
extern void fn_830981B8(void);
extern void fn_83097F78(void);
extern void fn_83097850(void);
extern void fn_83088B00(void);
extern void fn_83088BE0(void);

void fn_83088FB0(void *ctx)
{
    Args_83088FB0 a;

    lbl_832656D0.f[0] = fn_83099190;
    lbl_832656D0.f[1] = fn_83098A18;
    lbl_832656D0.f[2] = fn_83097978;
    lbl_832656D0.f[3] = fn_83097A58;
    lbl_832656D0.f[4] = fn_83097E18;
    lbl_832656D0.f[5] = fn_830981B8;
    lbl_832656D0.f[6] = fn_83097F78;
    lbl_832656D0.f[7] = fn_83097850;
    a.ref.table = &lbl_832656D0;
    a.pair.a = fn_83088B00;
    a.pair.b = fn_83088BE0;
    a.ref.count = 8;
    fn_82CE8268(ctx, 3, a.ref, a.pair);
}
