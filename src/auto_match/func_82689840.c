extern void fn_82670230(int);
void fn_82689840(int self,unsigned value) {
 int obj;
 if(value!=*(unsigned *)(self+0x10)) {
  obj=*(int *)(self+0xc);
  if(obj!=0) {
   (*(void (**)(int,int))(*(int *)obj+0x30))(obj,self+8);
   if(*(unsigned *)(self+0xc)!=0) fn_82670230(*(int *)(self+0xc));
   *(int *)(self+0xc)=0;
  }
 }
 *(unsigned *)(self+0x10)=value;
}
