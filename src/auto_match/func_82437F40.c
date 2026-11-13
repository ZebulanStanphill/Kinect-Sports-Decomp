extern int fn_822A53D8();
extern int fn_82438150();
extern int fn_8243E0D8();
extern int fn_82F622A8();
extern unsigned int lbl_821B9328;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


/* WARNING: Removing unreachable block (ram,0x82437f8c) */
/* WARNING: Removing unreachable block (ram,0x82437f90) */

void fn_82437F40(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  unsigned char **ppuStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_4c;
  
  uVar2 = *param_1;
  uVar1 = (int)(param_1[1] - uVar2) / 0x18;
  if ((param_2 & 0xffffffff) < (unsigned __int64)uVar1) {
    uVar5 = param_2 * 0x18 + (unsigned __int64)uVar2;
    if ((uVar5 & 0xffffffff) != (unsigned __int64)param_1[1]) {
      uVar1 = param_1[1];
      uVar6 = uVar5;
      if ((uVar5 & 0xffffffff) != (unsigned __int64)uVar1) {
        do {
          fn_8243E0D8(uVar6);
          uVar6 = uVar6 + 0x18;
        } while ((uVar6 & 0xffffffff) != (unsigned __int64)uVar1);
      }
      param_1[1] = (unsigned int)uVar5;
    }
  }
  else if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    lVar4 = param_2 - (__int64)(int)uVar1;
    if ((0xaaaaaaaU - lVar4 & 0xffffffff) < (unsigned __int64)uVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar5 = lVar4 + (int)uVar1;
    uVar1 = (int)(param_1[2] - uVar2) / 0x18;
    if ((unsigned __int64)uVar1 < (uVar5 & 0xffffffff)) {
      uVar6 = 0;
      if ((unsigned __int64)uVar1 <= (0xaaaaaaa - (unsigned __int64)(uVar1 >> 1) & 0xffffffff)) {
        uVar6 = (unsigned __int64)(uVar1 >> 1) + (__int64)(int)uVar1;
      }
      if ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        uVar6 = uVar5;
      }
      fn_82438150(param_1,uVar6);
    }
    puVar7 = (unsigned int *)param_1[1];
    for (lVar4 = param_2 - (__int64)((int)((int)puVar7 - *param_1) / 0x18); lVar4 != 0;
        lVar4 = lVar4 + -1) {
      ppuStack_60 = &lbl_821B9328;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_4c = 0;
      if (puVar7 != (unsigned int *)0x0) {
        *puVar7 = &lbl_821B9328;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        cVar3 = fn_822A53D8(puVar7 + 1,0);
        if (cVar3 != '\0') {
          puVar7[2] = puVar7[1];
        }
        puVar7[5] = 0;
      }
      fn_8243E0D8(&ppuStack_60);
      puVar7 = puVar7 + 6;
    }
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0x18) * 0x18 + param_1[1];
  }
  return;
}

