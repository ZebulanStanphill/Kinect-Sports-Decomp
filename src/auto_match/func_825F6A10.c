extern int fn_825A2410(int);
extern void XMemCpy(int,int *,unsigned);
extern unsigned lbl_8218DB08[];
int fn_825F6A10(int self,int *p) {
 int r=fn_825A2410(self);
 XMemCpy(r,p,lbl_8218DB08[*p*2+1]); return r;
}
