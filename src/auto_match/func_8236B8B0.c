extern void fn_82299BF0(char *p, void *a, char *b);
extern void fn_82358FD8(int a, char *buf, int n, int s);
extern int fn_8236B6E8(char *p, int a, void *b);
extern float lbl_821917A8[];
extern int lbl_82193960[];

void fn_8236B8B0(char *self, int a, int idx)
{
    char *q;
    char info[192];
    char buf[2056];

    if (fn_8236B6E8(self, a, info) != 0) {
        q = *(char **)(**(char ***)(self + 0x4b0) + 0xd4);
        fn_82358FD8(*(int *)(q + 0x1c), buf, 0x400, lbl_82193960[idx]);
        q = *(char **)(q + 0x3c);
        if (*(int *)(q + 0x1220) == 0) {
            fn_82299BF0(q, info, buf);
            *(float *)(q + 0x121c) = lbl_821917A8[2];
        }
    }
}
