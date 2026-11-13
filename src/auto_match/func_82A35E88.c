extern int fn_82F64CE0();


__int64 fn_82A35E88(unsigned short *param_1,__int64 param_2,unsigned char *param_3,int param_4)

{
  unsigned short uVar1;
  unsigned char bVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  lVar4 = 0;
  if ((int)param_2 == -1) {
    param_2 = fn_82F64CE0();
    param_2 = param_2 + 1;
  }
  if (0 < (int)param_2) {
    do {
      uVar1 = *param_1;
      if (uVar1 < 0x80) {
        lVar4 = lVar4 + 1;
        if (((int)lVar4 <= param_4) && (param_3 != (unsigned char *)0x0)) {
          *param_3 = (unsigned char)uVar1;
LAB_82a35f80:
          param_3 = param_3 + 1;
        }
      }
      else {
        lVar3 = lVar4 + 1;
        if (uVar1 < 0x800) {
          if (((int)lVar3 <= param_4) && (param_3 != (unsigned char *)0x0)) {
            bVar2 = (unsigned char)(uVar1 >> 6) & 0x1f | 0xc0;
LAB_82a35f58:
            *param_3 = bVar2;
            param_3 = param_3 + 1;
          }
        }
        else {
          if (((int)lVar3 <= param_4) && (param_3 != (unsigned char *)0x0)) {
            *param_3 = (unsigned char)(uVar1 >> 0xc) | 0xe0;
            param_3 = param_3 + 1;
          }
          lVar3 = lVar4 + 2;
          if (((int)lVar3 <= param_4) && (param_3 != (unsigned char *)0x0)) {
            bVar2 = (unsigned char)(*param_1 >> 6) & 0x3f | 0x80;
            goto LAB_82a35f58;
          }
        }
        lVar4 = lVar3 + 1;
        if (((int)lVar4 <= param_4) && (param_3 != (unsigned char *)0x0)) {
          *param_3 = (unsigned char)*param_1 & 0x3f | 0x80;
          goto LAB_82a35f80;
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if ((param_4 != 0) && (param_4 < (int)lVar4)) {
    thunk_FUN_82a2b748(0x7a);
    lVar4 = 0;
  }
  return lVar4;
}

