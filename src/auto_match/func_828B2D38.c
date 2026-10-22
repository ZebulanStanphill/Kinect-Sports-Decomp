typedef int (*code)();
extern int *fn_8240D930(void);
extern unsigned char fn_825B5568(void);
extern int fn_828B2BF8(void);
extern unsigned int lbl_820E8684;

void fn_828B2D38(int param_1)
{
    int *obj;
    unsigned int buf[4];

    if (*(unsigned char *)(param_1 + 0x38) == 0) {
        fn_828B2BF8();
        if (fn_825B5568() != 0) {
            fn_828B2BF8();
            obj = fn_8240D930();
            if ((*(code *)(*obj + 0x20))(obj, *(int *)(param_1 + 0x40)) == 0) {
                buf[0] = lbl_820E8684;
                fn_828B2BF8();
                obj = fn_8240D930();
                (*(code *)(*obj + 0xc))(obj, *(int *)(param_1 + 0x40), buf, 1);
                *(unsigned char *)(param_1 + 0x38) = 1;
            }
        }
    }
}
