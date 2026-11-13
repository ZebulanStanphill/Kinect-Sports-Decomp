extern float lbl_8217DB8C;


double fn_8304C3D8(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = 0;
  for (uVar2 = (unsigned int)param_2[1] >> 0xe; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
    iVar1 = iVar1 + 1;
  }
  return (double)((float)(((__int64)*param_2 * (__int64)iVar1 +
                           ((__int64)*param_2 * (__int64)iVar1 & 0x1fffffffU) * 8 & 0x3fffffff) <<
                         2) * lbl_8217DB8C);
}

