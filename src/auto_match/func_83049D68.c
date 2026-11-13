extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int iStack_3c;
extern unsigned int uStack_28;


unsigned __int64 fn_83049D68(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_30 [8];
  unsigned int uStack_28;
  
  uVar4 = param_2 + *(int *)(param_1 + 0x34);
  *(unsigned int *)(param_1 + 0x34) = uVar4;
  if (*(unsigned int *)(param_1 + 0x58) <= uVar4) {
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 == 1) {
      (**(int (***)())(**(int **)(param_1 + 0x2c) + 0xc))(*(int **)(param_1 + 0x2c),auStack_30);
      uStack_28 = 0;
      (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x10))(*(int **)(param_1 + 0x2c),auStack_30);
      *(unsigned char *)(param_1 + 0x7c) = 1;
    }
    else {
      if (sVar1 != 0) {
        *(short *)(param_1 + 0x1c) = sVar1 + -1;
      }
      iVar2 = *(int *)(param_1 + 0x54);
      *(char *)(param_1 + 0x7e) = *(char *)(param_1 + 0x7e) + '\x01';
      iVar3 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x28))
                        (*(int **)(param_1 + 0x2c),iVar2,0,auStack_40);
      if (iVar3 != 1) {
        return 2;
      }
      *(int *)(param_1 + 0x34) = iVar2 - *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x30) = iVar2 - iStack_3c;
    }
  }
  return 1;
}

