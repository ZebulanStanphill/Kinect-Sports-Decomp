extern int fn_82F655D8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005778;
extern unsigned int lbl_82015618;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8305A668(double param_1,unsigned __int64 param_2,double param_3,int param_4)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  if (param_1 < lbl_82005710) {
    param_3 = param_3 - lbl_82005778;
  }
  dVar3 = (double)fn_82F655D8(lbl_82015618,param_3 * lbl_82005720);
  iVar2 = *(int *)(param_4 + 8);
  fVar1 = (float)dVar3;
  *(float *)(iVar2 + 0xa4) = fVar1;
  *(float *)(iVar2 + 0x94) = fVar1;
  *(float *)(iVar2 + 0x84) = fVar1;
  *(float *)(iVar2 + 0x74) = fVar1;
  *(float *)(iVar2 + 100) = fVar1;
  *(float *)(iVar2 + 0x54) = fVar1;
  return;
}

