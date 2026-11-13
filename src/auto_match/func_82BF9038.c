extern unsigned int *auStack_18;
extern unsigned int lbl_8322FD10;
extern unsigned int lbl_8322FD18;
extern unsigned int uStack_14;


unsigned int fn_82BF9038(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  __int64 lStack_20;
  unsigned char auStack_18 [4];
  unsigned int uStack_14;
  
  lStack_20 = (param_3 & 0xffffffff) + lbl_8322FD10;
  if (param_4 == 0) {
    uVar1 = NtWriteFile(lbl_8322FD18,0,0,0,auStack_18,param_1,param_2,&lStack_20);
  }
  else {
    uVar1 = NtReadFile();
  }
  if ((-1 < (int)uVar1) && ((param_2 & 0xffffffff) != (unsigned __int64)uStack_14)) {
    uVar1 = 0xc0000185;
  }
  return uVar1 >> 0x1f ^ 1;
}

