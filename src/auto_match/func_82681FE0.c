extern int fn_8267C4C8();
extern int fn_826BD8C8();


void fn_82681FE0(unsigned __int64 param_1,int param_2,int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x8f;
  if (uVar2 == 4) {
    param_3[2] = param_3[2] + 1;
  }
  else if (uVar2 == 5) {
    fn_8267C4C8(param_3 + -3);
  }
  else if (5 < uVar2) {
    if (uVar2 < 8) {
      iVar1 = fn_826BD8C8(param_3);
      *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
    }
    else if (uVar2 == 8) {
      *param_3 = *param_3 + 1;
    }
  }
  return;
}

