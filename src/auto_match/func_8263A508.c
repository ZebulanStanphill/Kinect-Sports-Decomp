typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826374C0();


void fn_8263A508(int param_1,int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned char bVar4;
  
  *(int *)(param_1 + 0x3158) = param_2;
  if (param_2 == 0) {
    *(unsigned int *)(param_1 + 0x2940) = *(unsigned int *)(param_1 + 0x2940) & 0xfffffff0;
    *(unsigned char *)(param_1 + 0x2abe) = *(unsigned char *)(param_1 + 0x2abe) & 0xdf;
    uVar3 = *(unsigned __int64 *)(param_1 + 0x10) | 0x100;
  }
  else {
    if (*(int *)(param_1 + 0x3148) == 0) {
      fn_826374C0();
    }
    *(unsigned int *)(param_1 + 0x2888) = *(unsigned int *)(param_2 + 0x1c);
    *(unsigned int *)(param_1 + 0x2940) = *(unsigned int *)(param_2 + 0x20);
    *(unsigned char *)(param_1 + 0x2abe) =
         ((unsigned char)*(unsigned int *)(param_2 + 0x20) & 1) << 5 | *(unsigned char *)(param_1 + 0x2abe) & 0xdf;
    if ((*(unsigned char *)(param_1 + 0x2abf) & 0x20) != 0) {
      if ((*(unsigned char *)(param_1 + 0x2abc) & 0x10) == 0) {
        if (((((*(unsigned char *)(param_1 + 0x2abc) & 0x20) == 0) ||
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
      if (bVar2) {
        *(unsigned int *)(param_1 + 0x2880) =
             *(int *)(param_1 + 0x3424) << 0x12 | *(unsigned int *)(param_1 + 0x2880) & 0x3ffff;
      }
    }
    uVar3 = *(unsigned __int64 *)(param_1 + 0x10);
    *(unsigned __int64 *)(param_1 + 0x10) = uVar3 | 0x80000000000000;
    *(unsigned __int64 *)(param_1 + 0x10) = uVar3 | 0x80000000000100;
    uVar3 = uVar3 | 0x80000000020100;
  }
  *(unsigned __int64 *)(param_1 + 0x10) = uVar3;
  if ((((*(int *)(param_1 + 0x325c) == 0) && (bVar4 = *(unsigned char *)(param_1 + 0x2abc), (bVar4 & 8) == 0)
       ) && ((bVar4 & 4) == 0)) && (*(char *)(param_1 + 0x304b) == '\0')) {
    if ((bVar4 & 0x10) == 0) {
      if (((((bVar4 & 0x20) == 0) ||
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
    if (bVar2) goto LAB_8263a74c;
  }
  bVar4 = 0;
LAB_8263a74c:
  uVar1 = *(unsigned int *)(param_1 + 0x2f14);
  *(unsigned char *)(param_1 + 0x2abc) = bVar4 | *(unsigned char *)(param_1 + 0x2abc) & 0xfe;
  *(unsigned int *)(param_1 + 0x2f14) = uVar1;
  *(unsigned int *)(param_1 + 0x2934) =
       (-(unsigned int)(*(int *)(param_1 + 0x3158) != 0) & uVar1 & 1) << 1 |
       *(unsigned int *)(param_1 + 0x2934) & 0xfffffffd;
  uVar3 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar3 | 0x800;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar3 | 0x20800;
  uVar1 = *(unsigned int *)(param_1 + 0x2f18);
  *(unsigned int *)(param_1 + 0x2f18) = uVar1;
  *(unsigned int *)(param_1 + 0x2934) =
       *(unsigned int *)(param_1 + 0x2934) & 0xfffffffe |
       -(unsigned int)(*(int *)(param_1 + 0x3158) != 0) & uVar1 & 1;
  uVar3 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar3 | 0x800;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar3 | 0x20800;
  return;
}

