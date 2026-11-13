extern int fn_8302BBA8();


void fn_8303C5A0(int param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  iVar2 = *param_2;
  uVar3 = fn_8302BBA8();
  (**(int (***)())(iVar2 + 0xc0))(param_2,uVar1 >> 3 & 0x1f,uVar3);
  return;
}

