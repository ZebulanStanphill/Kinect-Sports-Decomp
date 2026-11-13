extern unsigned int *auStack_10;
extern int fn_8291C0A8();
extern int fn_8291C428();


unsigned __int64 fn_8291C690(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int auStack_10;
  
  if ((param_2 & 0xffffffff) == 0) {
    iVar2 = fn_8291C428(param_1,param_3,&auStack_10);
    if (-1 < iVar2) {
      uVar1 = (unsigned __int64)auStack_10;
LAB_8291c6e0:
      return ~uVar1;
    }
  }
  else {
    uVar1 = fn_8291C0A8(~param_2,param_3,1);
    if ((uVar1 & 0xffffffff) != 0) goto LAB_8291c6e0;
  }
  return 0;
}

