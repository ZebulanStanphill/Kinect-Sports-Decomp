extern void *KeTlsGetValue(unsigned int index);
extern int lbl_8315AB38;
void *fn_82934160(void)
{
    void *r = 0;
    int i = lbl_8315AB38;
    if (i != -1) {
        r = KeTlsGetValue(i);
    }
    return r;
}
