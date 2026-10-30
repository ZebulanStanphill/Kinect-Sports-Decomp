extern void fn_82BE64E0(unsigned int id, int flags);
extern unsigned int fn_82BE7220(void *mgr, unsigned int id);
extern void fn_82BE7B68(void *cur);
extern void *lbl_8322B1D8;
extern char *lbl_8322B1DC;

void fn_82BE66A0(unsigned int id)
{
    fn_82BE64E0(id, 0x103000);
    if (lbl_8322B1D8 != 0 && fn_82BE7220(lbl_8322B1D8, id) == 0x2bf) {
        if (lbl_8322B1DC != 0 && id == *(unsigned int *)(lbl_8322B1DC + 0x80)) {
            fn_82BE7B68(lbl_8322B1DC);
        }
    }
}
