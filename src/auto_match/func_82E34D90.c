#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern int fn_82E34AF8();
extern int fn_82E34C68();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82E34D90(int *param_1,int param_2,unsigned short *param_3,float *param_4)

{
  unsigned __int64 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = 0;
  if ((((param_1 == (int *)0x0) || (param_3 == (unsigned short *)0x0)) || (param_2 == 0)) ||
     (param_4 == (float *)0x0)) {
    return 0xffffffff80070057;
  }
  param_4[1] = -(_seed_nan);
  dVar3 = (double)lbl_821AAD20;
  *param_4 = lbl_821AAD20;
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      dVar2 = (double)fn_82E34C68(param_1[5],*param_3);
      *param_4 = (float)dVar2;
    }
    else {
      uVar1 = fn_82E34AF8(*(unsigned int *)(param_3 + 0xc),*(unsigned int *)(param_2 + 4),*param_3);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
    if ((double)*param_4 < dVar3) {
      return 0xffffffff80070057;
    }
  }
  return uVar1;
}

