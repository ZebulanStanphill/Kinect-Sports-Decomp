__declspec(noreturn) extern void fn_82AA66A8(void *, int, ...);

int *fn_82B455D0(void *context, int *object)
{
    if (object && object[1] != 1)
        fn_82AA66A8(context, 0x12c1);
    return object;
}
