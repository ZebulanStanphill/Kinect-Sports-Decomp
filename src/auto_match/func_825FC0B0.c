extern int fn_825D4FE8();
extern int fn_825FBDB8();
extern int fn_8265C9E0();
extern unsigned int lbl_821CADB0;


void fn_825FC0B0(double param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,
                  unsigned int param_5,unsigned __int64 param_6,unsigned int param_7,int param_8)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  fn_825FBDB8();
  *(float *)(param_2 + 0x16c) = (float)param_1;
  *(unsigned int *)(param_2 + 0x25c) = param_4;
  *(unsigned int *)(param_2 + 0x254) = 4;
  *(unsigned int *)(param_2 + 0x260) = param_5;
  *(unsigned int *)(param_2 + 0x168) = param_7;
  if (param_8 == 0) {
    uVar3 = *(unsigned int *)(param_2 + 0x20) & 0xffffefff;
  }
  else {
    uVar3 = *(unsigned int *)(param_2 + 0x20) | 0x1000;
  }
  *(unsigned int *)(param_2 + 0x20) = uVar3;
  uVar1 = fn_8265C9E0(0x60);
  if ((uVar1 & 0xffffffff) == 0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2 = (unsigned int *)fn_825D4FE8(uVar1,param_3,0x23);
    puVar2[0x14] = param_2;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    *puVar2 = &lbl_821CADB0;
    puVar2[0x10] = puVar2[0x10] | 7;
  }
  *(unsigned int **)(param_2 + 0x170) = puVar2;
  return;
}

