#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F7C468();
extern int fn_82F857F8();
extern int fn_82F85978();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;
extern unsigned int stack0x00000000;
extern unsigned int uStack00000016;
extern unsigned int uStack_50;


unsigned __int64 fn_82F88978(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned char uVar1;
  unsigned __int64 uVar2;
  unsigned short uVar5;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned char *puVar8;
  unsigned char *puVar9;
  unsigned short *puVar10;
  unsigned short uStack00000016;
  unsigned int uStack_50;
  
  uVar2 = ZEXT48(&stack0x00000000);
  uVar5 = (unsigned short)param_1;
  if (((param_1 & 0xffff) == 0xffff) ||
     ((uVar4 = param_2[3], (uVar4 & 1) == 0 && (((uVar4 & 0x80) == 0 || ((uVar4 & 2) != 0)))))) {
LAB_82f88bc4:
    param_1 = 0xffffffffffffffff;
  }
  else {
    uStack00000016 = uVar5;
    if (param_2[2] == 0) {
      fn_82F857F8(param_2);
    }
    if ((param_2[3] & 0x40) == 0) {
      iVar3 = fn_82F7C468(param_2);
      puVar9 = &lbl_831BBF60;
      puVar8 = puVar9;
      if ((iVar3 != -1) && (iVar3 = fn_82F7C468(param_2), iVar3 != -2)) {
        iVar3 = fn_82F7C468(param_2);
        uVar4 = fn_82F7C468(param_2);
        puVar8 = (unsigned char *)((uVar4 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar3 >> 5]);
      }
      if ((puVar8[4] & 0x80) != 0) {
        iVar3 = fn_82F7C468(param_2);
        if ((iVar3 != -1) && (iVar3 = fn_82F7C468(param_2), iVar3 != -2)) {
          iVar3 = fn_82F7C468(param_2);
          uVar4 = fn_82F7C468(param_2);
          puVar9 = (unsigned char *)((uVar4 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar3 >> 5]);
        }
        if ((puVar9[0x28] & 0xfe) == 0) {
          iVar3 = fn_82F85978(uVar2 - 0x50,uVar2 - 0x4c,5,param_1);
          if (iVar3 != 0) goto LAB_82f88bc4;
          uVar6 = (unsigned __int64)uStack_50;
        }
        else {
          uVar6 = 2;
          uStack_50 = 2;
        }
        if ((param_2[2] + uVar6 & 0xffffffff) <= (unsigned __int64)*param_2) {
LAB_82f88b0c:
          if (-1 < (__int64)(uVar6 - 1)) {
            lVar7 = (uVar6 - 1) + (uVar2 - 0x4b);
            do {
              uVar4 = *param_2;
              lVar7 = lVar7 + -1;
              uVar1 = *(unsigned char *)lVar7;
              *param_2 = uVar4 - 1;
              *(unsigned char *)(uVar4 - 1) = uVar1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
            uVar6 = (unsigned __int64)uStack_50;
          }
          param_2[1] = param_2[1] + (int)uVar6;
          param_2[3] = param_2[3] & 0xffffffee | 1;
          return param_1;
        }
        if ((param_2[1] == 0) && ((int)uVar6 <= (int)param_2[6])) {
          *param_2 = (unsigned int)(param_2[2] + uVar6);
          goto LAB_82f88b0c;
        }
        goto LAB_82f88bc4;
      }
    }
    if (*param_2 < param_2[2] + 2) {
      if ((param_2[1] != 0) || (param_2[6] < 2)) goto LAB_82f88bc4;
      *param_2 = param_2[2] + 2;
    }
    uVar4 = *param_2;
    puVar10 = (unsigned short *)(uVar4 - 2);
    *param_2 = (unsigned int)puVar10;
    if ((param_2[3] & 0x40) == 0) {
      *puVar10 = uVar5;
    }
    else if ((unsigned __int64)*puVar10 != (param_1 & 0xffff)) {
      *param_2 = uVar4;
      goto LAB_82f88bc4;
    }
    param_2[1] = param_2[1] + 2;
    param_2[3] = param_2[3] & 0xffffffee | 1;
  }
  return param_1;
}

