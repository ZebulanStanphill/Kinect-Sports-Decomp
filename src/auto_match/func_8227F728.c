extern float fRam831d115c;


unsigned __int64 fn_8227F728(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x1c) - *param_2;
  fVar2 = -fRam831d115c;
  if (((((fVar2 <= fVar1) && (fVar1 <= fRam831d115c)) &&
       (fVar1 = *(float *)(param_1 + 0x20) - param_2[1], fVar2 <= fVar1)) &&
      ((fVar1 <= fRam831d115c && (fVar1 = *(float *)(param_1 + 0x24) - *param_3, fVar2 <= fVar1))))
     && ((fVar1 <= fRam831d115c &&
         ((fVar1 = *(float *)(param_1 + 0x28) - param_3[1], fVar2 <= fVar1 &&
          (fVar1 <= fRam831d115c)))))) {
    return 1;
  }
  return 0;
}

