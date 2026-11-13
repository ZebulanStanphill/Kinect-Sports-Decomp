typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826C6368();
extern int fn_827AEAA8();
extern unsigned int uStack_40;


void fn_827A98B0(unsigned int *param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  bool bVar4;
  char cVar5;
  unsigned int uStack_40;
  
  if (param_1[0x14] != 0) {
    fn_8267C498();
  }
  param_1[0x14] = 0;
  uVar1 = *param_1;
  if ((uVar1 == 0) || (bVar4 = false, param_1[1] <= uVar1)) {
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
  if ((*(unsigned short *)(uVar1 + 6) >> 0xe & 1) != 0) {
    if ((*(unsigned short *)(uVar1 + 6) >> 0xd & 1) != 0) {
      piVar2 = *(int **)param_1[2];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + 1;
      }
      puVar3 = (unsigned int *)param_1[0x13];
      if ((puVar3 != (unsigned int *)0x0) &&
         (uVar1 = *puVar3, *puVar3 = (unsigned int)((unsigned __int64)uVar1 - 1), (unsigned __int64)uVar1 - 1 == 0)) {
        fn_826C6368(puVar3);
        fn_8267BE38(puVar3);
      }
      param_1[0x13] = (unsigned int)piVar2;
      param_1[2] = param_1[2] + 4;
    }
    if ((*(unsigned short *)(*param_1 + 6) >> 0xc & 1) != 0) {
      uVar1 = *(unsigned int *)param_1[2];
      param_1[2] = (unsigned int)((unsigned int *)param_1[2] + 1);
      param_1[0x10] = uVar1;
      param_1[0x11] = uVar1;
    }
    if ((*(unsigned short *)(*param_1 + 6) >> 0xb & 1) != 0) {
      uVar1 = *(unsigned int *)param_1[2];
      if (uVar1 != 0) {
        *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
      }
      if (param_1[0x14] != 0) {
        fn_8267C498();
      }
      param_1[0x14] = uVar1;
      param_1[2] = param_1[2] + 4;
    }
  }
  if ((*(unsigned short *)(*param_1 + 6) >> 10 & 1) == 0) {
    param_1[0x15] = 0;
  }
  else {
    param_1[0x15] = 1;
    param_1[0x12] = param_1[0x10];
  }
  cVar5 = fn_827AEAA8(param_1 + 3);
  uVar1 = *param_1;
  if (cVar5 == '\0') {
    param_1[0x10] = param_1[0x11];
    if (((*(unsigned short *)(uVar1 + 4) & 0xf000) == 0) && ((*(unsigned short *)(uVar1 + 6) >> 3 & 1) == 0)) {
      return;
    }
    if ((param_1[0xf] & 0x10000000) != 0) {
      if ((param_1[0xf] & 0x10000000) == 0) {
        uStack_40 = 0;
      }
      else {
        uStack_40 = param_1[0xd];
      }
      param_1[0x10] = uStack_40;
    }
    if ((*(unsigned char *)(param_1 + 0xf) & 7) != 0) {
      param_1[0x15] = *(unsigned char *)(param_1 + 0xf) & 7;
    }
    if ((param_1[0xf] & 0x20000000) != 0) {
      if ((param_1[0xf] & 0x20000000) == 0) {
        uStack_40 = 0;
      }
      else {
        uStack_40 = param_1[0xe];
      }
      goto LAB_827a9afc;
    }
  }
  else {
    if ((*(unsigned short *)(uVar1 + 6) >> 10 & 1) == 0) {
      return;
    }
    param_1[0x15] = 1;
  }
  uStack_40 = param_1[0x10];
LAB_827a9afc:
  param_1[0x12] = uStack_40;
  return;
}

