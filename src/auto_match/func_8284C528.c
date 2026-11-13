extern int fn_8280A620();
extern int fn_8284C480();


unsigned __int64 fn_8284C528(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if (param_3 != 0) {
    uVar1 = fn_8280A620();
    param_1 = (unsigned __int64)(uVar1 >> (param_3 & 0x3f));
  }
  if ((int)param_1 < 1) {
    param_1 = 1;
  }
  uVar3 = (unsigned __int64)(unsigned int)param_2[1];
  uVar3 = (__int64)
          (int)((int)(((uVar3 + param_1) - 1 & ~(uVar3 - 1) & 0xffffffff) / uVar3) + 0x1fU &
               0xffffffe0) * (__int64)(int)param_2[3];
  iVar2 = fn_8284C480(*param_2);
  if (iVar2 != 0) {
    uVar3 = uVar3 + 0xff & 0xffffff00;
  }
  return uVar3;
}

