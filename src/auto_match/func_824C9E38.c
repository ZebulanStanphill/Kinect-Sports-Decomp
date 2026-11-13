extern int fn_82230218();
extern int fn_824C9D48();
extern int fn_82520780();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_824C9E38(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82520780((double)(float)param_2[9],0xffffffff83265a28);
  if ((int)uVar1 != 0) {
    if ((float)param_2[7] <= ltcg_pool_0_0f) {
      if (0xf < (unsigned int)param_2[5]) {
        param_2 = (unsigned int *)*param_2;
      }
      fn_824C9D48(param_1,param_2);
    }
    else {
      fn_82230218(param_1 + 0x24,param_2,0,0xffffffffffffffff);
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(float *)(param_1 + 0x40) =
           ((float)param_2[8] - (float)param_2[7]) *
           ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + (float)param_2[7];
    }
    uVar1 = 1;
  }
  return uVar1;
}

