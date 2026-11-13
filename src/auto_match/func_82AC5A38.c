extern int fn_82AC5320();
extern int fn_82AC5428();
extern int fn_82AC55A0();
extern int fn_82AC5698();
extern int fn_82AC5778();
extern int fn_82AC5880();


unsigned __int64 fn_82AC5A38(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  iVar1 = param_1[0x12];
  if ((unsigned int)(param_1[0x14] + iVar1) < 0xad209) {
    uVar2 = fn_82AC5320(param_1[0xb],param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar2 = fn_82AC5428(param_1[2],param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar3 = param_1[0xc];
    if ((uVar3 == 0) ||
       ((((uVar6 = param_1[0x11], uVar6 <= uVar3 && (uVar3 + 8 <= uVar6 + iVar1)) &&
         (*(unsigned int *)(uVar3 + 4) < 0x104)) &&
        ((uVar6 <= uVar3 && ((*(unsigned int *)(uVar3 + 4) + 3 & 0xfffffffc) + 8 + uVar3 <= uVar6 + iVar1)))
        ))) {
      uVar2 = fn_82AC5880(param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (*(char *)(param_1 + 10) == '\0') {
        if (((unsigned int)param_1[0x11] <= (unsigned int)param_1[3]) &&
           ((unsigned __int64)*(unsigned int *)(*param_1 + 0x18) * 4 + (unsigned __int64)(unsigned int)param_1[3] <=
            (__int64)param_1[0x11] + (unsigned __int64)(unsigned int)param_1[0x12])) {
          uVar2 = fn_82AC55A0(param_1[4],param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_82AC5698(param_1[6]);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_82AC5778(param_1[5]);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          goto LAB_82ac5c18;
        }
      }
      else {
        uVar3 = param_1[7];
        puVar4 = (unsigned int *)param_1[3];
        if (((((uVar3 & 0x20000) == 0) && ((uVar3 & 0x40000) == 0)) &&
            ((unsigned int *)param_1[0x11] <= puVar4)) &&
           ((uVar3 >> 3 & 0x7c) + (int)puVar4 <= (unsigned int)(param_1[0x11] + param_1[0x12]))) {
          uVar6 = uVar3 >> 5 & 0x1f;
          uVar3 = 0;
          uVar5 = 0;
          if (uVar6 != 0) {
            do {
              if ((uVar5 != 0) && ((*puVar4 & 0xff) <= uVar3)) {
                return 0xffffffff80004005;
              }
              uVar5 = uVar5 + 1;
              uVar3 = *puVar4 & 0xff;
              puVar4 = puVar4 + 1;
            } while (uVar5 < uVar6);
          }
LAB_82ac5c18:
          uVar3 = param_1[0x15];
          uVar6 = uVar3 - 2;
          if (uVar6 < uVar3) {
            puVar4 = (unsigned int *)(param_1 + uVar3 + 0x14);
            do {
              if ((*puVar4 & 0xc0000000) != 0) {
                return 0xffffffff80004005;
              }
              uVar6 = uVar6 + 1;
              puVar4 = puVar4 + 1;
            } while (uVar6 < uVar3);
          }
          return 0;
        }
      }
    }
  }
  return 0xffffffff80004005;
}

