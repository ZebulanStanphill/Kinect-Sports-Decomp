__declspec(noreturn) extern void fn_82AA66A8(void *,int,...);
int *fn_82B454C8(void *context,int *object,int type) {
    if (object && object[1] == 14) {
        if (object[7] != type)
            fn_82AA66A8(context, 0x12c1);
        return object;
    }
    fn_82AA66A8(context, 0x12c1);
}
