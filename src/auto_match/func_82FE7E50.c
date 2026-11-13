extern int fn_82FF2910(void);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void *fn_8300FAB8(void *mem);
extern int fn_8300F5B0(void);
extern int fn_8300F458(void *obj);
extern void *lbl_831BC768;
extern void *lbl_832642E4;

int fn_82FE7E50(void)
{
    int result = fn_82FF2910();
    if (lbl_832642E4 == 0 && result == 1) {
        void *mem = fn_82FA5060(lbl_831BC768, 0xb4);
        lbl_832642E4 = mem ? fn_8300FAB8(mem) : 0;
        if (lbl_832642E4 != 0) {
            result = fn_8300F5B0();
            if (result != 1) {
                return result;
            }
            return fn_8300F458(lbl_832642E4);
        }
        return 0x34;
    }
    return result;
}
