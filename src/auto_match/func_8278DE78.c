#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_60;
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8267C4F0();
extern int fn_826DAE08();
extern int fn_8278BA98();
extern int fn_8278C160();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200561C;
extern unsigned int uStack_58;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8278DE78(int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  __int64 lVar7;
  double dVar8;
  unsigned char auStack_60 [4];
  unsigned int *puStack_5c;
  unsigned __int64 uStack_58;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    uVar4 = 8;
  }
  else {
    if ((unsigned int)(*piVar1 * 5) <= (unsigned int)((piVar1[1] + 1) * 4)) {
      return;
    }
    uVar4 = ((unsigned __int64)(unsigned int)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  if (uVar4 == 0) {
    fn_826DAE08();
  }
  else {
    if (uVar4 < 8) {
      uVar4 = 8;
    }
    else {
      uStack_58 = uVar4 - 1 & 0xffffffff;
      dVar8 = (double)fn_82F65E20((double)uStack_58);
      uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)((float)dVar8 * lbl_8200561C + lbl_82002AE0))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uVar4 = (unsigned __int64)(unsigned int)(1 << ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_58 = CONCAT44(0x144,(((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF));
    puStack_5c = (unsigned int *)0x0;
    puStack_5c = (unsigned int *)fn_8267BED0(param_2,uVar4 * 0xc + 8,&uStack_58);
    *puStack_5c = 0;
    puStack_5c[1] = (int)uVar4 + -1;
    if (uVar4 != 0) {
      iVar5 = 0;
      do {
        *(unsigned int *)((int)puStack_5c + iVar5 + 8) = 0xfffffffe;
        uVar4 = uVar4 - 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar4 != 0);
    }
    if (*param_1 != 0) {
      iVar5 = 0;
      lVar7 = (unsigned __int64)*(unsigned int *)(*param_1 + 4) + 1;
      do {
        iVar6 = iVar5 + *param_1;
        if (*(int *)(iVar6 + 8) != -2) {
          uVar3 = fn_8278BA98(auStack_60,*(unsigned int *)(iVar6 + 0x10));
          fn_8278C160(&puStack_5c,param_2,iVar6 + 0x10,uVar3);
          if (*(int *)(iVar6 + 0x10) != 0) {
            fn_8267C4F0();
          }
          *(unsigned int *)(iVar6 + 8) = 0xfffffffe;
        }
        lVar7 = lVar7 + -1;
        iVar5 = iVar5 + 0xc;
      } while (lVar7 != 0);
      fn_8267BE38(*param_1);
    }
    puVar2 = puStack_5c;
    puStack_5c = (unsigned int *)0x0;
    *param_1 = (int)puVar2;
    fn_826DAE08(&puStack_5c);
  }
  return;
}

