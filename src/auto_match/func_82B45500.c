__declspec(noreturn) extern void fn_82AA66A8(void *,int,...);
int *fn_82B45500(void *context,int *object,int type,unsigned int size) {
    if (object && object[1] == 14) {
        if (object[7] != type)
            fn_82AA66A8(context, 0x12c1);
        if ((unsigned int)(object[6] * object[5]) != size)
            fn_82AA66A8(context, 0x12c1);
        return object;
    }
    fn_82AA66A8(context, 0x12c1);
}
