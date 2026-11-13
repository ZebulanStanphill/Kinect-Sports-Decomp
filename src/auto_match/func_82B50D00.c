#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82AF87E0();


void fn_82B50D00(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  if ((param_1[1] & 1) == 0) {
    uVar2 = *param_1 & 0xfffffffe;
    iVar3 = uVar2 - 4;
    if (iVar3 != 0) {
      if (*(int *)(uVar2 + 4) + 1U <= *(unsigned int *)(uVar2 + 8)) goto LAB_82b50d50;
    }
  }
  iVar3 = fn_82AF87E0(param_1,1);
LAB_82b50d50:
  iVar1 = *(int *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = iVar1 + 1;
  *(unsigned __int64 *)((iVar1 + 2) * 8 + iVar3) = CONCAT44(param_3,param_2);
  return;
}

