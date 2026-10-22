extern void fn_828974A8(void *p);
extern void fn_8289D4C0(void *p);
extern unsigned int lbl_82196A54;
extern unsigned int lbl_82197070;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;
extern unsigned int lbl_821B9BC8;
void fn_82232400(unsigned int *object)
{
    unsigned int *sub;
    *object = (unsigned int)&lbl_82196A54;
    sub = object + 0x54;
    *sub = (unsigned int)&lbl_82197080;
    fn_8289D4C0(sub);
    object[0x51] = (unsigned int)&lbl_821B9BC8;
    object[0x3c] = (unsigned int)&lbl_82197100;
    fn_8289D4C0(&object[0x3c]);
    object[0x27] = (unsigned int)&lbl_82197100;
    fn_8289D4C0(&object[0x27]);
    object[0x12] = (unsigned int)&lbl_82197100;
    fn_8289D4C0(&object[0x12]);
    *object = (unsigned int)&lbl_82197070;
    fn_828974A8(object);
}

