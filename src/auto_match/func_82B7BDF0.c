typedef struct Outs_82B7BDF0 {
    unsigned int result;
    unsigned char extra[4];
} Outs_82B7BDF0;

extern unsigned char fn_82BA0310();

unsigned int fn_82B7BDF0(int param_1)
{
    __int64 cVar1;
    Outs_82B7BDF0 outs;

    cVar1 = fn_82BA0310(*(unsigned int *)(param_1 + 0xab0));
    (*(int (**)())(**(int **)(param_1 + 0x5d0) + 0xc))
              (*(int **)(param_1 + 0x5d0), cVar1 == 0, 2, 3, &outs.result, outs.extra);
    return outs.result;
}
