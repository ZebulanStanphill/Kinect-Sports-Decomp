extern int fn_8267B6F8();
extern int fn_8267B7E0();
extern int fn_826F6DD0();
extern unsigned int iStack_3c;


unsigned __int64 fn_826F8F18(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iStack_3c;
  
  uVar2 = fn_8267B6F8(param_2);
  uVar1 = *(unsigned int *)(param_2 + 0x2c);
  uVar3 = (unsigned __int64)(*(float *)(param_1 + 0x14) * (float)(uVar2 & 0xffffffff));
  iStack_3c = (int)uVar3;
  uVar3 = (uVar3 & 0xffffffff) + (unsigned __int64)uVar1 + param_3;
  if ((iStack_3c <= (int)uVar2 - *(int *)(param_1 + 0xc)) ||
     ((*(unsigned int *)(param_1 + 8) != 0 && ((unsigned __int64)*(unsigned int *)(param_1 + 8) < (uVar3 & 0xffffffff)))))
  {
    fn_826F6DD0(param_1,param_2);
    if (*(unsigned int *)(param_1 + 8) == 0) {
      return 1;
    }
    if ((uVar3 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 8)) {
      return 1;
    }
    if ((uVar2 - *(unsigned int *)(param_1 + 0xc) & 0xffffffff) < (param_3 & 0xffffffff)) {
      uVar3 = (*(unsigned int *)(param_1 + 0xc) - uVar2) + (unsigned __int64)uVar1 + param_3;
      *(int *)(param_1 + 0x10) = (int)uVar3;
    }
    else {
      uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
    }
  }
  fn_8267B7E0(param_2,uVar3);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x2c);
  return 1;
}

