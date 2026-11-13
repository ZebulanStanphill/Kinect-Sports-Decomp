typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82645110();


void fn_8264C1F8(int param_1,int param_2,int param_3)

{
  unsigned char bVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned char bVar4;
  
  *(unsigned int *)(*(int *)(param_1 + 0x35a0) + 0x6c) = *(unsigned int *)(*(int *)(param_1 + 0x35a0) + 0x6c) | 0x40
  ;
  if ((param_2 != 0) || (param_3 != 0)) {
    *(int *)(param_1 + 0x3254) = param_2;
    *(unsigned int *)(param_1 + 0x325c) = 1;
    *(int *)(param_1 + 0x3258) = param_3;
    *(unsigned char *)(param_1 + 0x2abc) = *(unsigned char *)(param_1 + 0x2abc) & 0xfe;
    goto LAB_8264c338;
  }
  bVar1 = *(unsigned char *)(param_1 + 0x2abc);
  *(unsigned int *)(param_1 + 0x325c) = 0;
  if ((((bVar1 & 8) == 0) && ((bVar1 & 4) == 0)) && (*(char *)(param_1 + 0x304b) == '\0')) {
    if ((bVar1 & 0x10) == 0) {
      if (((((bVar1 & 0x20) == 0) ||
           ((*(int *)(param_1 + 0x3268) != *(int *)(param_1 + 0x3148) &&
            (*(int *)(param_1 + 0x3148) != 0)))) ||
          ((*(int *)(param_1 + 0x326c) != *(int *)(param_1 + 0x314c) &&
           (*(int *)(param_1 + 0x314c) != 0)))) ||
         ((((*(int *)(param_1 + 0x3270) != *(int *)(param_1 + 0x3150) &&
            (*(int *)(param_1 + 0x3150) != 0)) ||
           ((*(int *)(param_1 + 0x3274) != *(int *)(param_1 + 0x3154) &&
            (*(int *)(param_1 + 0x3154) != 0)))) ||
          ((*(int *)(param_1 + 0x3278) != *(int *)(param_1 + 0x3158) &&
           (*(int *)(param_1 + 0x3158) != 0)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    bVar4 = 1;
    if (!bVar2) goto LAB_8264c300;
  }
  else {
LAB_8264c300:
    bVar4 = 0;
  }
  *(unsigned int *)(param_1 + 0x3258) = 0;
  *(unsigned char *)(param_1 + 0x2abc) = bVar4 | bVar1 & 0xfe;
  *(unsigned int *)(param_1 + 0x3254) = 0xffffffff;
LAB_8264c338:
  uVar3 = *(unsigned int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x2ab4) = param_2;
  *(int *)(param_1 + 0x2ab8) = param_3;
  if (*(unsigned int *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar3 + 4) = 0xc0006000;
  *(unsigned int *)(uVar3 + 8) = *(unsigned int *)(param_1 + 0x3254);
  *(unsigned int *)(uVar3 + 0xc) = 0xc0006100;
  *(unsigned int *)(uVar3 + 0x10) = *(unsigned int *)(param_1 + 0x3258);
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar3 + 0x10);
  return;
}

