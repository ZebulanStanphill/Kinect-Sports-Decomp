extern void __emit(unsigned);
extern int fn_827D5070(unsigned);
extern int fn_827D50B8(unsigned);
extern void fn_82517978(unsigned *,unsigned,unsigned,int);
extern int fn_823AB478(unsigned);
extern void fn_82A1EFA0(int);
extern void fn_82A1E810(unsigned);
extern void fn_822315A0(unsigned);
extern unsigned char lbl_83276742;
extern unsigned char lbl_83265988[];
void fn_8251F658(unsigned *p,char *q) {
 unsigned result;
 __emit(0x7c2004ac);
 result=fn_827D5070(*p);
 { unsigned handle=*p; if(fn_827D50B8(handle)!=0) {
  if(*(int *)(q+0x13c)!=0) goto done;
  { unsigned tmp[2]; tmp[0]=0; tmp[1]=0;
    fn_82517978(tmp,*p,p[1],0);
    lbl_83276742=1;
    if(lbl_83265988[0x45]) {
      fn_82A1EFA0(fn_823AB478(*(unsigned *)lbl_83265988));
    }
    fn_82A1EFA0(0);
  }
 }
 }
 **(unsigned **)(q+8)=result;
done:
 __emit(0x7c2004ac);
 fn_82A1E810(*(unsigned *)(q+0x18));
 if(p[1]) fn_822315A0(p[1]);
}
