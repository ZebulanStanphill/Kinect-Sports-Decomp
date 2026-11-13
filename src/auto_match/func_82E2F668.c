extern int fn_82E2F3F8();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E2F668(int param_1,short param_2,unsigned int *param_3)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int * apiStack_50;
  
  apiStack_50 = (int *)0x0;
  uVar4 = 0;
  if (param_3 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_3 = 0;
  fn_82E50CB8(param_1 + 0x54);
  uVar5 = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    while (iVar2 = fn_82E2F3F8(param_1 + 0x94,uVar5,&apiStack_50), piVar1 = apiStack_50,
          iVar2 != 0) {
      if (apiStack_50 == (int *)0x0) goto LAB_82e2f724;
      sVar3 = (**(int (***)())(*apiStack_50 + 0x88))(apiStack_50);
      if ((sVar3 == param_2) ||
         (uVar5 = uVar5 + 1, (unsigned __int64)*(unsigned int *)(param_1 + 0xfc) <= (uVar5 & 0xffffffff))) break;
    }
    if (piVar1 != (int *)0x0) {
      sVar3 = (**(int (***)())(*piVar1 + 0x88))(piVar1);
      if (sVar3 == param_2) {
        *param_3 = piVar1;
        (**(int (***)())(*piVar1 + 4))(piVar1);
      }
      else {
        uVar4 = 0xffffffffc00d36b3;
      }
      goto LAB_82e2f778;
    }
  }
LAB_82e2f724:
  uVar4 = 0xffffffffc00d36bb;
LAB_82e2f778:
  fn_82E50F10(param_1 + 0x54);
  return uVar4;
}

