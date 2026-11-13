#define true 1


unsigned __int64 fn_828F9B38(unsigned __int64 param_1,int param_2,int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 0;
  }
  if ((param_1 & 0xffffffff) == 0) {
    return 0xffffffff8876086c;
  }
  uVar1 = *(unsigned int *)param_1;
  if ((uVar1 & 0xffffff00) != 0x102a1100) {
    uVar2 = uVar1 & 0xffff0000;
    if (((((uVar2 != 0x46580000) && (uVar2 != 0x54580000)) && (uVar2 != 0x7ffe0000)) &&
        ((uVar2 != 0x7fff0000 && (uVar2 != 0xfffe0000)))) && (uVar2 != 0xffff0000)) {
      return 0xffffffff88760b59;
    }
    while( true ) {
      do {
        uVar3 = param_1;
        param_1 = uVar3 + 4;
        uVar2 = *(unsigned int *)param_1;
      } while ((uVar2 & 0x80000000) != 0);
      uVar4 = uVar2 & 0xffff;
      if (uVar4 == 0xffff) break;
      if (uVar4 == 0xfffe) {
        uVar5 = (unsigned __int64)(uVar2 >> 0x10) & 0x7fff;
        if ((1 < uVar5) && (param_2 == *(int *)((int)uVar3 + 8))) {
          if (param_3 != (int *)0x0) {
            *param_3 = (int)uVar3 + 0xc;
          }
          if (param_4 != (unsigned int *)0x0) {
            *param_4 = (int)((uVar5 - 1 & 0xffffffff) << 2);
          }
          return 0;
        }
        uVar5 = uVar5 << 2;
LAB_828f9c20:
        param_1 = uVar5 + param_1;
      }
      else {
        if (0x1ff < (uVar1 & 0xffff)) {
          uVar5 = (unsigned __int64)(uVar2 >> 0x16) & 0x3c;
          goto LAB_828f9c20;
        }
        if (uVar4 == 0x51) {
          param_1 = uVar3 + 0x18;
        }
      }
    }
  }
  return 1;
}

