#define true 1
extern int fn_826E7800();


unsigned int fn_826E8488(int param_1,unsigned int param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  
  uVar4 = 0;
joined_r0x826e84a8:
  do {
    if ((int)param_2 < 1) {
      return uVar4;
    }
    uVar2 = (unsigned int)*(unsigned char *)(param_1 + 0x15);
    if (uVar2 == 0) {
      *(unsigned char *)(param_1 + 0x15) = 0;
      if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
        fn_826E7800(param_1,1);
      }
      bVar3 = *(unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      *(unsigned char *)(param_1 + 0x15) = 8;
    }
    else {
      bVar1 = *(unsigned char *)(param_1 + 0x14);
      if ((int)(unsigned int)*(unsigned char *)(param_1 + 0x15) <= (int)param_2) {
        param_2 = param_2 - uVar2;
        *(unsigned char *)(param_1 + 0x15) = 0;
        uVar4 = (unsigned int)bVar1 << (param_2 & 0x3f) | uVar4;
        goto joined_r0x826e84a8;
      }
      uVar2 = uVar2 - param_2;
      *(char *)(param_1 + 0x15) = (char)uVar2;
      bVar3 = (char)(1 << (uVar2 & 0x3f)) - 1U & bVar1;
      uVar4 = bVar1 >> (uVar2 & 0x3f) | uVar4;
      param_2 = 0;
    }
    *(unsigned char *)(param_1 + 0x14) = bVar3;
  } while( true );
}

