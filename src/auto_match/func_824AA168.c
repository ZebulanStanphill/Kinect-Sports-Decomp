extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_3c;
extern unsigned int fStack_4c;
extern int fn_824AA530();
extern unsigned int lbl_82195898;
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824AA168(int *param_1,unsigned __int64 param_2)

{
  float fVar1;
  __int64 lVar2;
  __int64 lVar3;
  double dVar4;
  unsigned char auStack_50 [4];
  float fStack_4c;
  unsigned char auStack_40 [4];
  float fStack_3c;
  
  lVar3 = (-(unsigned __int64)(param_1[0xf] != 0) & 0xfffffffc) + 10;
  lVar2 = (-(unsigned __int64)(param_1[0xf] != 0) & 0xfffffffc) + 9;
  fn_824AA530(auStack_50,param_2,lVar3,lVar2);
  fn_824AA530(auStack_40,param_2,lVar3,lVar2);
  fVar1 = lbl_82195898;
  if (ABS(fStack_4c) <= ABS(fStack_3c)) {
    fStack_4c = fStack_3c;
  }
  param_1[0x10] = (unsigned int)LZCOUNT(param_1[0xf] - (unsigned int)(ltcg_pool_0_0f < fStack_4c)) >> 5;
  param_1[0x11] = (unsigned int)(fVar1 < ABS(fStack_4c));
  dVar4 = (double)(**(int (***)())(*param_1 + 0x28))(param_1,param_2);
  param_1[0xc] = (int)(float)dVar4;
  return;
}

