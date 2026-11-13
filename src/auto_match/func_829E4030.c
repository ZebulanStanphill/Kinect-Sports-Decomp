extern int fn_829E5870();
extern int fn_829E59A8();
extern unsigned int lbl_82015BD8;
extern unsigned int lbl_82057B5C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_829E4030(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else if (*(int *)(param_1 + 0xac) == 0) {
    uVar2 = fn_829E5870(param_1 + 8);
    if ((-1 < (int)uVar2) && (uVar2 = fn_829E59A8(param_1 + 0x24,param_1 + 8), -1 < (int)uVar2))
    {
      *(int *)(param_1 + 4) = param_2;
      uVar2 = 0;
      *(unsigned int *)(param_1 + 0xac) = 1;
      uVar1 = lbl_82057B5C;
      *(unsigned int *)(param_1 + 0xe0) = lbl_82015BD8;
      *(unsigned int *)(param_1 + 0xe8) = uVar1;
    }
  }
  else {
    uVar2 = 0xffffffff8000ffff;
  }
  return uVar2;
}

