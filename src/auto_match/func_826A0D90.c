#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8269F0E0();
extern int fn_826A0A70();
extern int fn_826A0AE8();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200561C;
extern unsigned int uStack_58;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_826A0D90(int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  double dVar7;
  unsigned int *apuStack_60 [2];
  unsigned __int64 uStack_58;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    uVar3 = 8;
  }
  else {
    if ((unsigned int)(*piVar1 * 5) <= (unsigned int)((piVar1[1] + 1) * 4)) {
      return;
    }
    uVar3 = ((unsigned __int64)(unsigned int)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  if (uVar3 == 0) {
    fn_826A0A70();
  }
  else {
    if (uVar3 < 8) {
      uVar3 = 8;
    }
    else {
      uStack_58 = uVar3 - 1 & 0xffffffff;
      dVar7 = (double)fn_82F65E20((double)uStack_58);
      uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)((float)dVar7 * lbl_8200561C + lbl_82002AE0))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uVar3 = (unsigned __int64)(unsigned int)(1 << ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_58 = CONCAT44(0x143,(((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF));
    apuStack_60[0] = (unsigned int *)0x0;
    apuStack_60[0] = (unsigned int *)fn_8267BED0(param_2,uVar3 * 0x24 + 8,&uStack_58);
    *apuStack_60[0] = 0;
    apuStack_60[0][1] = (int)uVar3 + -1;
    if (uVar3 != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)((int)apuStack_60[0] + iVar4 + 8) = 0xfffffffe;
        uVar3 = uVar3 - 1;
        iVar4 = iVar4 + 0x24;
      } while (uVar3 != 0);
    }
    if (*param_1 != 0) {
      iVar4 = 0;
      lVar6 = (unsigned __int64)*(unsigned int *)(*param_1 + 4) + 1;
      do {
        iVar5 = iVar4 + *param_1;
        if (*(int *)(iVar5 + 8) != -2) {
          uVar3 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x14);
          if ((*(unsigned int *)(iVar5 + 0x10) & 0x20000) != 0) {
            uVar3 = (__int64)*(short *)(iVar5 + 0x18) ^ uVar3;
          }
          fn_826A0AE8(apuStack_60,param_2,iVar5 + 0x10,uVar3);
          fn_8269F0E0(iVar5 + 0x10,0);
          *(unsigned int *)(iVar5 + 8) = 0xfffffffe;
        }
        lVar6 = lVar6 + -1;
        iVar4 = iVar4 + 0x24;
      } while (lVar6 != 0);
      fn_8267BE38(*param_1);
    }
    puVar2 = apuStack_60[0];
    apuStack_60[0] = (unsigned int *)0x0;
    *param_1 = (int)puVar2;
    fn_826A0A70(apuStack_60);
  }
  return;
}

