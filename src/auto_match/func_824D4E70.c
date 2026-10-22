extern void fn_824CD480(void *p);
extern void *fn_824CD4E8(void *p);
extern void fn_82517CB0(void);
extern void fn_82517D50(void);
extern void *fn_8265C9E0(int size);
extern unsigned int lbl_821C0BE0;
extern unsigned int lbl_821C0C24;
extern unsigned int lbl_821C0DF8;
extern unsigned int lbl_821C112C;

unsigned int *fn_824D4E70(unsigned int *param_1)
{
    void *p;
    unsigned int *puVar3;
    int i;

    fn_82517D50();
    param_1[0x20] = 0;
    *param_1 = (unsigned int)&lbl_821C0BE0;
    puVar3 = param_1 + 0x28;
    param_1[0x1a] = (unsigned int)&lbl_821C0C24;
    i = 0x13;
    param_1[0x24] = 0;
    do {
        fn_824CD480(puVar3);
        puVar3 = puVar3 + 0x1c;
    } while (--i >= 0);
    *(unsigned __int64 *)(param_1 + 0x22) = 0;
    p = fn_8265C9E0(0x220);
    param_1[0x25] = (unsigned int)(p != 0 ? fn_824CD4E8(p) : 0);
    fn_82517CB0();
    *param_1 = (unsigned int)&lbl_821C0DF8;
    param_1[0x1a] = (unsigned int)&lbl_821C112C;
    fn_82517CB0();
    return param_1;
}
