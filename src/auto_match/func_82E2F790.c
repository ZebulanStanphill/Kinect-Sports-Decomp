extern int fn_82E2E4C0();
extern int fn_82E2F3F8();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E2F790(int param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int * apiStack_50;
  
  apiStack_50 = (int *)0x0;
  uVar4 = 0;
  fn_82E50CB8(param_1 + 0x54);
  uVar5 = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    while ((iVar2 = fn_82E2F3F8(param_1 + 0x94,uVar5,&apiStack_50), piVar1 = apiStack_50,
           iVar2 != 0 && (apiStack_50 != (int *)0x0))) {
      sVar3 = (**(int (***)())(*apiStack_50 + 0x88))(apiStack_50);
      if ((sVar3 == param_2) ||
         (uVar5 = uVar5 + 1, (unsigned __int64)*(unsigned int *)(param_1 + 0xfc) <= (uVar5 & 0xffffffff)))
      goto LAB_82e2f834;
    }
    uVar4 = 0xffffffff80070057;
LAB_82e2f834:
    if (piVar1 != (int *)0x0) {
      sVar3 = (**(int (***)())(*piVar1 + 0x88))(piVar1);
      if (sVar3 == param_2) {
        (**(int (***)())(*piVar1 + 8))(piVar1);
        if (((unsigned __int64)*(unsigned int *)(param_1 + 0xfc) < (uVar5 + 1 & 0xffffffff)) ||
           (iVar2 = fn_82E2E4C0(param_1 + 0x94,uVar5), iVar2 < 0)) {
          uVar4 = 0xffffffff8000ffff;
        }
        else {
          *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + -1;
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0xffffffffc00d36b3;
      }
    }
  }
  fn_82E50F10(param_1 + 0x54);
  return uVar4;
}

