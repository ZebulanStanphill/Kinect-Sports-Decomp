extern int fn_82F67FE8();
extern int fn_82F68958();


extern char lbl_82196FAC[];
unsigned int  fn_829DAE58(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = fn_82F68958(param_2,lbl_82196FAC);
  if ((uVar1 & 0xffffffff) != 0) {
    iVar2 = fn_82F67FE8(uVar1,"%f",param_1);
    uVar1 = (unsigned int)(iVar2 == 1);
  }
  return uVar1;
}

