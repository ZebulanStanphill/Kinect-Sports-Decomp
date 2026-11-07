extern int lbl_82027B20[];
extern int *lbl_8315A394;
int *fn_828F13C0(int key)
{
    int *p;
    for (p = &lbl_82027B20[10]; p < lbl_8315A394; p += 9)
        if (key == *p)
            return p;
    return lbl_82027B20;
}
