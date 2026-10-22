extern int *_errno(void);
extern unsigned long *fn_82F68278(void);
extern unsigned int lbl_8329F60C;
extern char *lbl_8329F620[];

int fn_82F85C50(int fh, int value)
{
    if (fh >= 0 && (unsigned int)fh < lbl_8329F60C) {
        if (*(int *)(lbl_8329F620[fh >> 5] + (fh & 0x1f) * 0x48) == -1) {
            *(int *)(lbl_8329F620[fh >> 5] + (fh & 0x1f) * 0x48) = value;
            return 0;
        }
    }
    *_errno() = 9;
    *fn_82F68278() = 0;
    return -1;
}
