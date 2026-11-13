extern unsigned int *auStack_40;
extern int fn_82809CB0();
extern int fn_82810BE8();
extern int fn_82863A70();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_82863BC0(int param_1,float *param_2)

{
  unsigned short uVar1;
  __int64 lVar2;
  double dVar3;
  double dVar4;
  unsigned char auStack_40 [1];
  
  lVar2 = 2;
  *param_2 = lbl_821AAD20;
  uVar1 = *(unsigned short *)(param_1 + 8);
  if (2 < uVar1) {
    dVar4 = (double)lbl_82002C5C;
    do {
      fn_82863A70(*(unsigned int *)(param_1 + 4),uVar1,0,lVar2 + -1,lVar2,auStack_40);
      fn_82810BE8(auStack_40);
      dVar3 = (double)fn_82809CB0();
      lVar2 = lVar2 + 1;
      *param_2 = (float)(dVar3 * dVar4 + (double)*param_2);
      uVar1 = *(unsigned short *)(param_1 + 8);
    } while ((int)lVar2 < (int)(unsigned int)uVar1);
  }
  return;
}

