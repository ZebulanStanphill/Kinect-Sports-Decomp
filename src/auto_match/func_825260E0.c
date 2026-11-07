typedef struct Entry_825260E0 {
    unsigned int refCount;   /* 0x000 */
    char name[0x3e8];        /* 0x004 */
    int valueA;              /* 0x3ec */
    int valueB;              /* 0x3f0 */
} Entry_825260E0;            /* size 0x3f4 */

extern int fn_82A81CD0(const char *a, const char *b);
extern Entry_825260E0 lbl_832767F0[35];

int fn_825260E0(const char *name, int *outA, int *outB)
{
    unsigned int i;

    for (i = 0; i < 35; i++) {
        if (lbl_832767F0[i].refCount != 0 &&
            fn_82A81CD0(name, lbl_832767F0[i].name) != 0) {
            lbl_832767F0[i].refCount++;
            *outA = lbl_832767F0[i].valueA;
            *outB = lbl_832767F0[i].valueB;
            return 1;
        }
    }
    return 0;
}
