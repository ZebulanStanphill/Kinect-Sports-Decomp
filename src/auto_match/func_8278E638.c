typedef unsigned char bool;
extern int fn_826A8E58();
extern int fn_827741E8();
extern int fn_8278C110();
extern int fn_8278CAE8();
extern int fn_8278DD08();
extern unsigned int iStack_3c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


bool fn_8278E638(int param_1,char param_2)

{
  unsigned int *puVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piStack_40;
  int iStack_3c;
  struct { unsigned int first; unsigned int second; } stack_pair_38;

  
  piVar7 = (int *)(param_1 + 0xc);
  iVar6 = 0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    iVar6 = **(int **)(param_1 + 0xc);
  }
  fn_8278C110(&piStack_40,piVar7);
  stack_pair_38.first = 0;
  stack_pair_38.second = 0;
  cVar2 = fn_826A8E58(&piStack_40,&stack_pair_38.first);
  if (cVar2 == '\0') {
    stack_pair_38.first = 0;
    stack_pair_38.second = 0;
    do {
      if (*(int *)(*(int *)(iStack_3c * 0xc + *piStack_40 + 0x10) + 4) == 1) {
        fn_8278CAE8(&piStack_40);
      }
      fn_827741E8(&piStack_40);
      cVar2 = fn_826A8E58(&piStack_40,&stack_pair_38.first);
    } while (cVar2 == '\0');
  }
  if (param_2 == '\0') {
    puVar1 = (unsigned int *)*piVar7;
    uVar3 = 0;
    if (puVar1 != (unsigned int *)0x0) {
      uVar3 = (unsigned __int64)*puVar1;
    }
    if (puVar1 == (unsigned int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    if ((unsigned __int64)uVar4 < (uVar3 * 5 & 0xffffffff) >> 2) {
      fn_8278DD08(piVar7,piVar7);
    }
  }
  puVar1 = (unsigned int *)*piVar7;
  uVar4 = 0;
  if (puVar1 != (unsigned int *)0x0) {
    uVar4 = *puVar1;
  }
  if (uVar4 < *(unsigned int *)(param_1 + 0x14)) {
    if ((puVar1 != (unsigned int *)0x0) && (100 < *puVar1)) goto LAB_8278e784;
    iVar5 = 100;
  }
  else {
    if (puVar1 == (unsigned int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    iVar5 = uVar4 + 10;
  }
  *(int *)(param_1 + 0x14) = iVar5;
LAB_8278e784:
  if ((int *)*piVar7 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)*piVar7;
  }
  return iVar5 != iVar6;
}

