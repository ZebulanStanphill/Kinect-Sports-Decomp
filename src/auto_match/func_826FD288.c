extern int fn_8267C498();
extern int fn_8269CEE0();


void fn_826FD288(int self) {
 int *pair[2];
 if ((*(unsigned short *)(self+0xb00)&1)!=0) {
  fn_8269CEE0(pair,self+0xad8);
  { int *obj=pair[0];
   if(obj) {
    obj[1]++;
    fn_8267C498(obj);
    if(obj[8] && !(*(unsigned char (**)(int *,int,int))(*obj+0xd0))(obj,0,2)) {
     fn_8267C498(obj); return;
    }
    fn_8267C498(obj);
   }
  }
 }
 *(unsigned int *)(self+0xb00)&=0xfffeffff;
}
