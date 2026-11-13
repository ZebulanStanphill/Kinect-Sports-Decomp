extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_8268CC00();
extern int fn_8268D758();
extern int fn_8269A240();
extern int fn_8269A358();


void fn_826F7AE0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa90);
  uVar1 = *(unsigned int *)(param_2 + 0x40);
  uVar2 = *(unsigned int *)(param_2 + 0x44);
  if (uVar6 != 0) {
    iVar5 = 0;
    do {
      piVar4 = *(int **)(*(int *)(param_1 + 0xa8c) + iVar5);
      iVar3 = piVar4[8];
      fn_8268CC00(auStack_90);
      fn_8269A240(iVar3,auStack_90);
      iVar3 = piVar4[8];
      fn_8268D758(auStack_70);
      fn_8269A358(iVar3,auStack_70);
      *(unsigned char **)(param_2 + 0x40) = auStack_90;
      *(unsigned char **)(param_2 + 0x44) = auStack_70;
      (**(int (***)())(*piVar4 + 0x60))(piVar4,param_2);
      uVar6 = uVar6 - 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 != 0);
  }
  *(unsigned int *)(param_2 + 0x40) = uVar1;
  *(unsigned int *)(param_2 + 0x44) = uVar2;
  return;
}

