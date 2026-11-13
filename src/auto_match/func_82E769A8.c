extern int fn_82EE5E28();
extern int fn_82EE5F60();


unsigned __int64 fn_82E769A8(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char abStack_40;
  
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  uVar1 = *(unsigned int *)(param_1 + 0x230);
  if (uVar1 == 0) {
LAB_82e769e4:
    *param_2 = uVar1;
    return 0x400d3a98;
  }
  abStack_40 = 0;
  uVar2 = fn_82EE5F60(param_1 + 0x218,&abStack_40,1);
  if (-1 < (int)uVar2) {
    if ((abStack_40 & 0x80) != 0x80) {
      uVar2 = 0;
      *param_2 = 0;
      goto LAB_82e76a9c;
    }
    *param_2 = 1;
    if ((abStack_40 & 0x60) != 0) {
      return 0xffffffffc00d3a9a;
    }
    *(unsigned int *)(param_1 + 0x13c) = abStack_40 & 0x10;
    if ((abStack_40 & 0x10) != 0) {
      *(unsigned int *)(param_1 + 0x148) = *(unsigned int *)(param_1 + 0x138);
    }
    if ((abStack_40 & 0xf) != 2) {
      return 0xffffffffc00d3a9a;
    }
    if (uVar1 < 3) goto LAB_82e769e4;
    uVar2 = fn_82EE5E28(param_1 + 0x218,3);
    if (-1 < (int)uVar2) {
      *(unsigned char *)(param_1 + 0x150) = 3;
      *param_2 = 3;
    }
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
LAB_82e76a9c:
  *(unsigned char *)(param_1 + 0x238) = *(unsigned char *)(param_1 + 0x238) | 1;
  return uVar2;
}

