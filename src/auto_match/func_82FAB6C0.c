extern void fn_82FAB1D8(void);
extern void fn_82FF7868(void *mgr, void *item);
extern void fn_82FABC50(void *p);
extern void *lbl_832642E8;

typedef struct Obj {
    int x0;
    char item[0x28];
    char sub[4];
} Obj;

void fn_82FAB6C0(Obj *p)
{
    fn_82FAB1D8();
    fn_82FF7868(lbl_832642E8, p ? p->item : 0);
    fn_82FABC50(p->sub);
}
