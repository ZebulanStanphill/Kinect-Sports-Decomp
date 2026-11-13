extern unsigned int *auStack_40;
extern int fn_82A49C98();
extern int fn_82A49DF8();
extern int fn_82A77308();
extern unsigned int uStack_4c;
extern unsigned int *uStack_54;
extern unsigned int *uStack_5c;


unsigned __int64 fn_82A77860(int param_1)

{
  unsigned short uVar1;
  int *piVar2;
  unsigned char *puVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned char *puStack_60;
  unsigned int uStack_5c;
  unsigned char *puStack_58;
  unsigned int uStack_54;
  unsigned char *puStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_40 [40];
  
  uVar6 = 0;
  if (*(int **)(param_1 + 0x50) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(param_1 + 0x50);
  }
  puStack_58 = *(unsigned char **)(param_1 + 0x78);
  puStack_60 = (unsigned char *)0x0;
  puStack_50 = *(unsigned char **)(iVar5 + 0x2c);
  uVar1 = *(unsigned short *)(*(int *)(iVar5 + 0x2c) + 0xc);
  trapWord(6,(unsigned __int64)uVar1,0);
  uStack_5c = *(unsigned int *)(iVar5 + 0x34) / (unsigned int)uVar1;
  uStack_54 = uStack_5c;
  uStack_4c = uStack_5c;
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xfc) == 0)) {
    puVar3 = puStack_58;
    if ((*(int *)(param_1 + 0xfc) == 0) && (puVar3 = puStack_60, *(int *)(param_1 + 8) != 0)) {
      puVar3 = puStack_50;
    }
  }
  else {
    uVar4 = fn_82A49C98(puStack_58,1);
    fn_82A49DF8(auStack_40,0x28,1,*(unsigned short *)(puStack_58 + 2),
                      *(unsigned int *)(puStack_58 + 4),0x10,0x10,uVar4);
    puVar3 = auStack_40;
  }
  puStack_60 = puVar3;
  piVar2 = *(int **)(param_1 + 0xfc);
  if (piVar2 != (int *)0x0) {
    uVar6 = (**(int (***)())(*piVar2 + 0x20))(piVar2,1,&puStack_60,1,&puStack_50);
    uStack_5c = fn_82A77308(param_1,*(unsigned int *)(param_1 + 0xfc),uStack_4c);
    uStack_54 = uStack_5c;
    if ((int)uVar6 < 0) goto LAB_82a77a4c;
  }
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    uVar6 = (**(int (***)())(*piVar2 + 0x20))(piVar2,1,&puStack_58,1,&puStack_60);
    uStack_54 = fn_82A77308(param_1,*(unsigned int *)(param_1 + 8),uStack_5c);
  }
  if (-1 < (int)uVar6) {
    uStack_54 = *(unsigned short *)(*(int *)(param_1 + 0x78) + 0xc) * uStack_54;
    if (*(unsigned int *)(*(int *)(param_1 + 4) + 0x21c) < uStack_54) {
      *(unsigned int *)(*(int *)(param_1 + 4) + 0x21c) = uStack_54;
    }
    if (*(int *)(param_1 + 8) == 0) {
      return uVar6;
    }
    if (*(int *)(param_1 + 0xfc) == 0) {
      return uVar6;
    }
    if (*(unsigned short *)(puStack_60 + 0xc) * uStack_5c <= *(unsigned int *)(*(int *)(param_1 + 4) + 0x228)) {
      return uVar6;
    }
    *(unsigned int *)(*(int *)(param_1 + 4) + 0x228) = *(unsigned short *)(puStack_60 + 0xc) * uStack_5c;
    return uVar6;
  }
LAB_82a77a4c:
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 8) + 0x24))();
  }
  if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0xfc) + 0x24))();
  }
  return uVar6;
}

