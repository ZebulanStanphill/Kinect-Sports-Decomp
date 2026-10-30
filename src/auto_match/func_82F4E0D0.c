typedef struct E { char d[0x30]; } E;
typedef struct G {
    char pad[0x2b28];
    unsigned int f0 : 30;
    unsigned int flag : 1;
    unsigned int f31 : 1;
    char pad2[0x2b58 - 0x2b2c];
    E e[6];
} G;
extern G *lbl_8326183C;
extern char lbl_83261840[];
extern void fn_824B4298(void *dst, void *src, int n);
extern void fn_82F4D528(void);
extern void fn_82F4DE98(E *e);

void fn_82F4E0D0(void *src)
{
    int i;
    fn_824B4298(lbl_83261840, src, 0xab0);
    if ((unsigned char)lbl_8326183C->flag)
        fn_82F4D528();
    for (i = 0; i < 6; i++)
        fn_82F4DE98(&lbl_8326183C->e[i]);
}
