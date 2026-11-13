extern unsigned int *auStack_40;
extern int memcpy();
extern int fn_8305C458();
extern int fn_83066F98();
extern int fn_83066FC8();
extern int fn_83067080();
extern int fn_830670A8();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int lbl_8217E698;


void fn_8305CAA8(unsigned char *param_1,unsigned char *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned char **ppuStack_50;
  int iStack_4c;
  int iStack_48;
  unsigned char auStack_40 [16];
  
  fn_8305C458();
  if (param_3 == (unsigned int *)0x0) {
    param_3 = (unsigned int *)fn_830670A8();
  }
  *(unsigned int **)(param_1 + 0x60) = param_3;
  *param_1 = *param_2;
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_2 + 0x34);
  *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(param_2 + 0x38);
  *(unsigned int *)(param_1 + 0x3c) = *(unsigned int *)(param_2 + 0x3c);
  *(unsigned int *)(param_1 + 0x40) = *(unsigned int *)(param_2 + 0x40);
  *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)(param_2 + 0x44);
  *(unsigned int *)(param_1 + 0x48) = *(unsigned int *)(param_2 + 0x48);
  *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(param_2 + 0x4c);
  *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_2 + 0x50);
  *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_2 + 0x54);
  *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_2 + 0x58);
  memcpy(param_1 + 0xc,param_2 + 0xc,0x28);
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  uVar2 = (**(int (***)())*param_3)(param_3,(unsigned __int64)uVar1 * 0x30);
  fn_83067080(auStack_40,uVar2,(unsigned __int64)uVar1 * 0x30);
  iVar3 = fn_83066FC8(auStack_40,(unsigned __int64)*(unsigned int *)(param_1 + 0x20) * 0x30,0xffffffffffffffff);
  *(int *)(param_1 + 4) = iVar3;
  iStack_4c = *(int *)(param_2 + 4);
  iVar4 = 0;
  ppuStack_50 = &lbl_8217E698;
  if (iStack_4c != 0) {
    puVar5 = (unsigned int *)(iVar3 + -8);
    iStack_48 = iStack_4c;
    do {
      puVar5 = puVar5 + 0xc;
      *puVar5 = *(unsigned int *)(iStack_48 + 0x28);
      *(int *)(iStack_48 + 0x28) = iVar4;
      iVar4 = iVar4 + 1;
      iStack_48 = (*(int (**)())ppuStack_50[1])(&ppuStack_50,iStack_48);
    } while (iStack_48 != 0);
  }
  iVar3 = *(int *)(param_1 + 4);
  iStack_4c = *(int *)(param_2 + 4);
  for (iStack_48 = iStack_4c; iStack_48 != 0;
      iStack_48 = (*(int (**)())ppuStack_50[1])(&ppuStack_50,iStack_48)) {
    if (*(int *)(iStack_48 + 0x1c) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iStack_48 + 0x1c) + 0x28) * 0x30 + *(int *)(param_1 + 4);
    }
    *(int *)(iVar3 + 0x1c) = iVar4;
    if (*(int *)(iStack_48 + 0x20) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iStack_48 + 0x20) + 0x28) * 0x30 + *(int *)(param_1 + 4);
    }
    *(int *)(iVar3 + 0x20) = iVar4;
    if (*(int *)(iStack_48 + 0x24) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iStack_48 + 0x24) + 0x28) * 0x30 + *(int *)(param_1 + 4);
    }
    *(int *)(iVar3 + 0x24) = iVar4;
    memcpy(iVar3,iStack_48,0x1c);
    iVar3 = iVar3 + 0x30;
  }
  iStack_4c = *(int *)(param_2 + 4);
  iStack_48 = iStack_4c;
  if (iStack_4c != 0) {
    puVar5 = (unsigned int *)(*(int *)(param_1 + 4) + -8);
    do {
      puVar5 = puVar5 + 0xc;
      *(unsigned int *)(iStack_48 + 0x28) = *puVar5;
      iStack_48 = (*(int (**)())ppuStack_50[1])(&ppuStack_50,iStack_48);
    } while (iStack_48 != 0);
  }
  fn_83066F98(auStack_40);
  return;
}

