typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_8279A940(int param_1)

{
  float fVar1;
  bool bVar2;
  
  if ((*(unsigned char *)(param_1 + 0x13d) & 8) == 0) {
    if ((*(int *)(param_1 + 0x114) == 0) ||
       (bVar2 = false, (*(unsigned short *)(*(int *)(param_1 + 0x114) + 0x68) & 1) != 0)) {
      bVar2 = true;
    }
    fVar1 = lbl_821AAD20;
    if (*(unsigned int *)(param_1 + 0x100) != 0) {
      fVar1 = (float)*(unsigned int *)(param_1 + 0x100);
    }
    fVar1 = (fVar1 - (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x3c))) +
            (float)(__int64)(int)(-(unsigned int)!bVar2 & 0x4b0);
    if (fVar1 < 0.0) {
      fVar1 = lbl_821AAD20;
    }
    return (__int64)fVar1 & 0xffffffff;
  }
  return 0;
}

