/* Matches 100% when compiled with /O1 (objects.json lists /O2 for this unit;
   at /O2 the compiler threads the "hook ? hook() : 0" result test). */
extern void fn_82356690(int p);
extern void fn_823569A8(int p);
extern int (*lbl_83276774[12])(void);

void fn_82354840(int param_1)
{
    int r;

    if (lbl_83276774[8]) {
        r = lbl_83276774[8]();
    } else {
        r = 0;
    }
    if (r != 0) {
        fn_823569A8(param_1);
        fn_82356690(param_1);
        if (*(int *)(param_1 + 8) != 0x13) {
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
            *(int *)(param_1 + 8) = 0x13;
        }
        if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 8) != 2)) {
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
            *(int *)(param_1 + 8) = 2;
        }
    }
}
