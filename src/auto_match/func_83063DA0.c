typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82F68CC0();
extern int fn_8305C3F0();
extern int fn_83063A88();
extern int fn_83065E70();
extern int fn_830670A8();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int lbl_8217E698;


void fn_83063DA0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned char **ppuStack_50;
  int iStack_4c;
  int iStack_48;
  
  fn_83063A88();
  if (param_3 == 0) {
    param_3 = fn_830670A8();
  }
  *(int *)(param_1 + 0x28) = param_3;
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_2 + 8);
  iStack_48 = 0;
  ppuStack_50 = &lbl_8217E698;
  *(unsigned char *)(param_1 + 0x24) = 1;
  uVar8 = 0;
  iStack_4c = fn_8305C3F0(param_2);
  iStack_48 = iStack_4c;
  if (iStack_4c != 0) {
    do {
      *(int *)(iStack_48 + 0x2c) = (int)uVar8;
      uVar8 = uVar8 + 1;
      iStack_48 = (*(int (**)())ppuStack_50[1])(&ppuStack_50,iStack_48);
    } while (iStack_48 != 0);
    iStack_48 = 0;
    if (0x3fffffff < (uVar8 & 0xffffffff)) {
      lVar3 = -1;
      goto LAB_83063e5c;
    }
  }
  lVar3 = (uVar8 & 0x3fffffff) << 2;
LAB_83063e5c:
  puVar4 = (unsigned int *)fn_8265CA60(lVar3);
  if (0 < (int)uVar8) {
    puVar7 = puVar4 + -1;
    do {
      uVar5 = fn_83065E70();
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 1;
      *puVar7 = uVar5;
    } while (uVar8 != 0);
  }
  iStack_4c = fn_8305C3F0(param_2);
  iVar6 = iStack_4c;
  while (iStack_48 = iVar6, iVar6 != 0) {
    iVar1 = puVar4[*(int *)(iVar6 + 0x2c)];
    if ((*(int *)(iVar6 + 0x20) != 0) || (bVar2 = true, *(int *)(iVar6 + 0x24) != 0)) {
      bVar2 = false;
    }
    if (!bVar2) {
      fn_82F68CC0(iVar1 + 0x10,iVar6,0x1c);
    }
    if (*(int *)(iVar6 + 0x1c) != 0) {
      *(unsigned int *)(iVar1 + 0x2c) = puVar4[*(int *)(*(int *)(iVar6 + 0x1c) + 0x2c)];
    }
    if (*(int *)(iVar6 + 0x20) != 0) {
      *(unsigned int *)(iVar1 + 0x30) = puVar4[*(int *)(*(int *)(iVar6 + 0x20) + 0x2c)];
    }
    if (*(int *)(iVar6 + 0x24) != 0) {
      *(unsigned int *)(iVar1 + 0x34) = puVar4[*(int *)(*(int *)(iVar6 + 0x24) + 0x2c)];
    }
    *(unsigned int *)(iVar1 + 0x38) = *(unsigned int *)(iVar6 + 0x28);
    iVar6 = (*(int (**)())ppuStack_50[1])(&ppuStack_50,iStack_48);
  }
  *(unsigned int *)(param_1 + 0x2c) = *puVar4;
  iStack_4c = fn_8305C3F0(param_2);
  for (iStack_48 = iStack_4c; iStack_48 != 0;
      iStack_48 = (*(int (**)())ppuStack_50[1])(&ppuStack_50,iStack_48)) {
    *(unsigned int *)(iStack_48 + 0x2c) = 0;
  }
  fn_8265CAA0(puVar4);
  return;
}

