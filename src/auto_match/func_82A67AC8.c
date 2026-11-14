extern void fn_82A651C8(void);
extern void fn_82A646D0(void);
extern void fn_82A649D8(void);
extern void fn_82A64238(void);
extern void fn_82A665A8(void);
extern void fn_82A66D00(void);
extern void fn_82A65C20(void);
extern void fn_82A65558(void);
extern void fn_82A673A8(void);

typedef void (*Func_82A67AC8)(void);

Func_82A67AC8 fn_82A67AC8(unsigned int kind, unsigned int variant)
{
    Func_82A67AC8 fn = 0;
    switch (kind) {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        fn = fn_82A673A8;
        break;
    case 1:
        if (variant == 1)
            fn = fn_82A665A8;
        else if (variant == 2)
            fn = fn_82A66D00;
        else if (variant == 6)
            fn = fn_82A65C20;
        else
            fn = fn_82A65558;
        break;
    case 7:
        if (variant == 1)
            fn = fn_82A651C8;
        else if (variant == 2)
            fn = fn_82A646D0;
        else if (variant == 6)
            fn = fn_82A649D8;
        else
            fn = fn_82A64238;
        break;
    }
    return fn;
}
