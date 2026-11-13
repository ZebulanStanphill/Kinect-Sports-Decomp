extern int fn_82520780();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_8232D150(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if (param_2 == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
            (*(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c));
    if (fVar1 < *(float *)(param_1 + 0x28)) {
      return 1;
    }
    if (fVar1 < *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c)) {
      return 2;
    }
  }
  else {
    iVar2 = fn_82520780((double)*(float *)(param_1 + 0x34),0xffffffff83265a28);
    if (iVar2 == 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      if (((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
          (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28)) < *(float *)(param_1 + 0x28)) {
        return 1;
      }
      return 2;
    }
  }
  return 3;
}

