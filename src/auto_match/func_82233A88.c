extern void fn_82233720(void *p);
extern void fn_82897D88(void *p);
extern unsigned int lbl_82196DF0;
extern unsigned int lbl_82196E20;
extern unsigned int lbl_821970C0;
extern unsigned int lbl_82197534;

void fn_82233A88(unsigned int *object)
{
    unsigned int *sub;
    *object = (unsigned int)&lbl_82196E20;
    sub = object + 0xc5;
    *sub = (unsigned int)&lbl_82197534;
    fn_82897D88(sub);
    object[0xaf] = (unsigned int)&lbl_821970C0;
    fn_82897D88(&object[0xaf]);
    object[0x99] = (unsigned int)&lbl_821970C0;
    fn_82897D88(&object[0x99]);
    object[0x83] = (unsigned int)&lbl_82196DF0;
    fn_82897D88(&object[0x83]);
    fn_82233720(object);
}
