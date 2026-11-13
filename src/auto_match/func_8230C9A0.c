typedef unsigned char bool;
extern int fn_822C4DB0();
extern int fn_8230CA60();
extern int fn_8288B760();
extern unsigned int ltcg_pool_0_0f;


void fn_8230C9A0(double param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x38) - param_1);
  *(float *)(param_2 + 0x38) = fVar1;
  bVar4 = fVar1 < ltcg_pool_0_0f;
  if (*(int *)(*(int *)(param_2 + 0xc) + 0x168) == 0) {
    uVar2 = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x16c);
  }
  else {
    uVar2 = fn_8288B760();
    uVar2 = uVar2 & 0xff;
  }
  if (uVar2 == 0) {
    fn_822C4DB0();
  }
  else {
    iVar3 = fn_8230CA60(param_2,bVar4,*(unsigned int *)(param_2 + 0x40));
    if (iVar3 != 0) {
      *(unsigned int *)(param_2 + 0x38) = *(unsigned int *)(*(int *)(param_2 + 0x34) + 4);
    }
  }
  return;
}

