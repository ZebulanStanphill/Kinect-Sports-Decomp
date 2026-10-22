extern unsigned lbl_8215494C, lbl_82154D80;
extern void fn_82E569B0(unsigned *,int);
extern void fn_82E50EA0(unsigned *);
void fn_82E56F80(unsigned *p) {
 unsigned *sub=p+17;
 *p=(unsigned)&lbl_8215494C;
 fn_82E569B0(sub,0);
 p[43]=0;
 sub[0]=(unsigned)&lbl_82154D80;
 if(sub[1]==0) fn_82E569B0(sub,0);
 fn_82E50EA0(p+2);
}
