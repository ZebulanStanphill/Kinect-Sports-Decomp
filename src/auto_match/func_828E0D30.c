extern unsigned char fn_828865A0(int p);
extern unsigned char fn_828ACC40(int p);
extern unsigned char fn_828ACD00(int p);
extern unsigned char fn_828AD740(int p);
extern int fn_828D45F8(int p);
extern void fn_828E09C8(int p);
extern void fn_828E0DE0(int p, int q);

void fn_828E0D30(int param_1)
{
    if (fn_828ACC40(*(int *)(param_1 + 0x18)) || fn_828ACD00(*(int *)(param_1 + 0x18))) {
        if (fn_828AD740(*(int *)(param_1 + 0x14)) && fn_828865A0(param_1)) {
            fn_828E09C8(fn_828D45F8(param_1));
        }
        if (*(int *)(param_1 + 8) != 0) {
            fn_828E0DE0(param_1, 0);
            *(int *)(param_1 + 8) = 0;
        }
    }
}
