extern int fn_82E0A0F8();
extern int fn_82E0A398();
extern int fn_82E0BA38();
extern int fn_82E0C5E0();


unsigned int * fn_82E0CEB8(unsigned int *param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  
  if (param_2[0x1e] == 0) {
    uVar5 = fn_82E0A0F8(param_2);
  }
  else {
    uVar5 = *(unsigned int *)(param_2[0x1e] + 0x34);
  }
  *param_1 = uVar5;
  iVar1 = *param_2;
  param_1[1] = 0;
  (**(int (***)())(iVar1 + 0x28))(param_2);
  uVar2 = fn_82E0A398();
  if ((uVar2 & 0xffffffff) != 0) {
    fn_82E0C5E0(param_2,uVar2);
  }
  piVar4 = (int *)fn_82E0BA38(param_2);
  iVar1 = *piVar4;
  uVar3 = (**(int (***)())(*param_2 + 0x18))(param_2);
  uVar5 = (**(int (***)())(iVar1 + 0x10))(piVar4,uVar3);
  param_1[1] = uVar5;
  return param_1;
}

