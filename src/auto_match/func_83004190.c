extern int fn_82F68918();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1a;


void fn_83004190(double param_1,unsigned short *param_2)

{
  float fVar1;
  double dVar2;
  unsigned short uStack_1a;
  
  fVar1 = (float)(param_1 * (double)lbl_8200D898);
  if (lbl_821AAD20 <= fVar1) {
    dVar2 = (double)fn_82F68918((double)(fVar1 + lbl_82002C5C));
  }
  else {
    dVar2 = (double)fn_82F6B2A8((double)(fVar1 - lbl_82002C5C));
  }
  uStack_1a = (unsigned short)(int)dVar2;
  *param_2 = uStack_1a;
  return;
}

