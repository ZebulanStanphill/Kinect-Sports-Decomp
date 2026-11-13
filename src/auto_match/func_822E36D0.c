extern int fn_822C72E0();
extern int fn_822CF078();
extern int fn_822D6AB8();
extern int fn_824D62A8();
extern int fn_8288B760();


void fn_822E36D0(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar3;
  unsigned int *puVar6;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + 0x168);
  uVar4 = fn_822CF078();
  if ((uVar4 & *(unsigned int *)(param_1 + 0x28)) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x20) + 0x168) == 0) {
      uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x20) + 0x16c);
    }
    else {
      uVar4 = fn_8288B760();
      uVar4 = uVar4 & 0xff;
    }
    if ((uVar4 == 0) && (*(int *)(param_1 + 0x28) != 0)) {
      puVar6 = (unsigned int *)(param_1 + 4);
      if (0xf < *(unsigned int *)(param_1 + 0x18)) {
        puVar6 = (unsigned int *)*puVar6;
      }
      fn_822C72E0(param_2,puVar6);
      if (piVar1 != (int *)0x0) {
        *(unsigned char *)(piVar1 + 0x3f) = 0;
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x20) + 0x24) != 0) &&
       (iVar5 = fn_824D62A8(), iVar5 != 0)) {
      puVar6 = (unsigned int *)(param_1 + 4);
      if (0xf < *(unsigned int *)(param_1 + 0x18)) {
        puVar6 = (unsigned int *)*puVar6;
      }
      fn_822C72E0(param_2,puVar6);
      if ((piVar1 != (int *)0x0) && (uVar2 = *(unsigned int *)(param_1 + 0x28), piVar1[0x2f] != 0)) {
        lVar3 = (**(int (***)())(*piVar1 + 0x50))(piVar1);
        fn_822D6AB8(lVar3 + 0x120,uVar2);
      }
    }
  }
  return;
}

