extern int fn_829C8B38(unsigned,unsigned,unsigned,unsigned);
extern int fn_829C89A8(unsigned,unsigned);
extern void fn_82A1E108(void *);
extern int fn_829C7DE0(unsigned,unsigned,unsigned,int *);
extern void fn_829E4C68(void *,unsigned,void *,void *);
extern void fn_829DB5F0(void);
extern unsigned lbl_83217B08[];
extern unsigned _CountLeadingZeros(unsigned);
void fn_829DBBF8(void *arg) {
    struct { unsigned token; int value; unsigned rest[2]; } local;
    if (fn_829C8B38(0,1,0,1)>=0 && fn_829C89A8(0,1)>=0) {
        fn_82A1E108(arg);
        if (fn_829C7DE0(0,1,3,&local.value)>=0) lbl_83217B08[0x16]=((unsigned char)(local.value==50)^1)+1;
        else lbl_83217B08[0x16]=2;
        if (fn_829C8B38(0,1,0,0)>=0) {
            fn_829E4C68(&local.token,1,&lbl_83217B08[0x12],local.rest);
            fn_829DB5F0();
        }
    }
}
