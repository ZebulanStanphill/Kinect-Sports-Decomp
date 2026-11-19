extern unsigned int *auStack_30;
extern int fn_82811238();
extern int fn_82811400();
extern int fn_8287B658();


extern char lbl_832116F8[];
__int64 fn_828750B0(__int64 self,unsigned int flags)

{
  unsigned int uVar1;
  unsigned char auStack_30 [24];
  
  fn_8287B658(self + 4);
  if ((flags & 1) != 0) {
    uVar1 = fn_82811400(auStack_30,4);
    fn_82811238(lbl_832116F8,self,uVar1);
  }
  return self;
}

