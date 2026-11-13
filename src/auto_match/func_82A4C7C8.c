typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;


unsigned __int64 fn_82A4C7C8(int param_1,unsigned int param_2)

{
  bool bVar1;
  double dVar2;
  
  if ((*(float *)(param_1 + 0x38) != lbl_82002AE0) ||
     (bVar1 = false, *(float *)(param_1 + 0x3c) != lbl_82002AE0)) {
    bVar1 = true;
  }
  dVar2 = (double)((float)param_2 * *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x3c));
  if (bVar1) {
    return ((__int64)(dVar2 + lbl_82005758) & 0xffffffffU) + 1;
  }
  return (__int64)(dVar2 + lbl_82005730) & 0xffffffff;
}

