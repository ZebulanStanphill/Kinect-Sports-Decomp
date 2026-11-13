extern unsigned int iStack_c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8208ED48;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8217C3D0;
extern unsigned int lbl_8217C3D4;
extern unsigned int lbl_821AAD20;


double fn_8301E4B8(double param_1)

{
  float fVar1;
  unsigned __int64 uVar2;
  int iStack_c;
  
  if (param_1 <= (double)lbl_8216C698) {
    return (double)lbl_821AAD20;
  }
  if ((double)lbl_821AAD20 <= param_1) {
    return (double)lbl_82002AE0;
  }
  uVar2 = (unsigned __int64)(param_1 + (double)lbl_8208ED48);
  iStack_c = (int)uVar2;
  fVar1 = (float)(param_1 + (double)lbl_8208ED48) - (float)(uVar2 & 0xffffffff);
  return (double)(*(float *)(&lbl_8217C3D0 + iStack_c * 4) * (lbl_82002AE0 - fVar1) +
                 *(float *)(&lbl_8217C3D4 + iStack_c * 4) * fVar1);
}

