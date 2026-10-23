extern void fn_82233888(void *p);
extern void fn_8289D4C0(void *p);
extern unsigned int lbl_82196DA8;
extern unsigned int lbl_82196E00;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;

void fn_82233B18(unsigned int *object)
{
    unsigned int *sub;
    *object = (unsigned int)&lbl_82196E00;
    sub = object + 0xba;
    *sub = (unsigned int)&lbl_82197100;
    fn_8289D4C0(sub);
    object[0xa5] = (unsigned int)&lbl_82197080;
    fn_8289D4C0(&object[0xa5]);
    object[0x90] = (unsigned int)&lbl_82197080;
    fn_8289D4C0(&object[0x90]);
    object[0x7b] = (unsigned int)&lbl_82196DA8;
    fn_8289D4C0(&object[0x7b]);
    fn_82233888(object);
}
