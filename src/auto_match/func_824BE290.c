extern int fn_8245A5C8();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_824BE290(int param_1)

{
  int iVar1;
  double dVar2;
  
  if (*(int *)(param_1 + 0x54c) == 0) {
    if (*(int *)(param_1 + 0xf4) == *(int *)(param_1 + 0xf8)) {
      dVar2 = (double)lbl_821CA460;
    }
    else {
      dVar2 = (double)(*(float *)(param_1 + 0xdc) / *(float *)(*(int *)(param_1 + 0xf8) + -4));
    }
  }
  else {
    iVar1 = fn_8245A5C8();
    if ((*(int *)(iVar1 + 0x80068) == 0) || (*(unsigned short *)(iVar1 + 0x26) == 0)) {
      dVar2 = (double)ltcg_pool_0_0f;
    }
    else {
      dVar2 = (double)((float)*(unsigned short *)(iVar1 + 0x24) / (float)*(unsigned short *)(iVar1 + 0x26));
    }
  }
  return dVar2;
}

