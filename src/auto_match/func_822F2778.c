extern int fn_82230110(void *a, const char *s);
extern int fn_82230300(void *a, int b, int c);
extern int fn_822E5340(int a, void *b);
extern int fn_822E53F8(int a, void *b);
extern int fn_822F24E8();
extern int fn_822F2870(void *a);

void fn_822F2778(int param_1)
{
    unsigned char a[32];
    unsigned char b[32];

    fn_822F24E8();
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
        fn_822F2870((void *)param_1);
        fn_82230110(a, "idle_crouched");
        fn_822E5340(*(int *)(param_1 + 0xc), a);
        fn_82230300(a, 1, 0);
        fn_82230110(b, "locomotion_standing");
        fn_822E53F8(*(int *)(param_1 + 0xc), b);
        fn_82230300(b, 1, 0);
    }
}
