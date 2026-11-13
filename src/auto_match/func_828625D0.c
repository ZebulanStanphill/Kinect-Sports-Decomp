extern int fn_8281D460();
extern float lbl_821AAD20;


void fn_828625D0(int param_1,int param_2)

{
  int iVar1;
  int lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_2 + 8);
  *(float *)(*(int *)(param_1 + 0x28) + *(int *)(param_2 + 8)) = 0.0f;
  *(int *)(iVar4 + 4) = iVar4 + 0xc;
  iVar1 = *(unsigned short *)(param_1+8)+2;
  if(iVar1>0) {
    lVar2 = 0;
    do {
      fn_8281D460(*(unsigned int *)(iVar4 + 4) + lVar2);
      iVar3 = iVar3 + 1;
      iVar1 = *(unsigned short *)(param_1 + 8) + 2;
      lVar2 = lVar2 + 0x10;
    } while (iVar3 < iVar1);
  }
  *(short *)(iVar4 + 8) = (short)iVar1;
  return;
}

