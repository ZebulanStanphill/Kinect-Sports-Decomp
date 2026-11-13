extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82D82B58(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar2 = 0;
  dVar5 = (double)lbl_82002AE0;
  dVar6 = (double)lbl_821AAD20;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar3 = 0;
    do {
      fStack_60 = *(float *)(*(int *)(param_1 + 8) + 0x18);
      fStack_58 = fStack_60 - fStack_60;
      iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x28));
      dVar4 = dVar6;
      if ((double)fStack_58 != dVar6) {
        dVar4 = (double)(float)(dVar5 / (double)fStack_58);
      }
      fStack_54 = (float)dVar4;
      fStack_5c = fStack_60;
      (**(int (***)())(**(int **)(param_1 + 8) + 0x1c))
                (*(int **)(param_1 + 8),*(unsigned int *)(iVar1 + 0x48),*(unsigned int *)(iVar1 + 0x4c),
                 param_1,&fStack_60,1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar3 = 0;
    do {
      fStack_50 = *(float *)(*(int *)(param_1 + 8) + 0x18);
      fStack_48 = fStack_50 - fStack_50;
      iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x34));
      dVar4 = dVar6;
      if ((double)fStack_48 != dVar6) {
        dVar4 = (double)(float)(dVar5 / (double)fStack_48);
      }
      fStack_44 = (float)dVar4;
      fStack_4c = fStack_50;
      (**(int (***)())(**(int **)(param_1 + 8) + 0x1c))
                (*(int **)(param_1 + 8),*(unsigned int *)(iVar1 + 0x48),*(unsigned int *)(iVar1 + 0x4c),
                 param_1,&fStack_50,1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}

