#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_826DACD8();
extern int fn_826DAE08();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200561C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_48;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_826DB220(int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  double dVar7;
  unsigned int *apuStack_50 [2];
  unsigned __int64 uStack_48;
  
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
    fn_826DAE08();
  }
  else {
    if (uVar3 < 8) {
      uVar3 = 8;
    }
    else {
      uStack_48 = uVar3 - 1 & 0xffffffff;
      dVar7 = (double)fn_82F65E20((double)uStack_48);
      uStack_48 = ((((unsigned __int64)(uStack_48)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)((float)dVar7 * lbl_8200561C + lbl_82002AE0))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uVar3 = (unsigned __int64)(unsigned int)(1 << ((((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_48 = CONCAT44(2,(((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF));
    apuStack_50[0] = (unsigned int *)0x0;
    apuStack_50[0] = (unsigned int *)fn_8267B890(lbl_831E7E64,uVar3 * 0xc + 8,&uStack_48);
    *apuStack_50[0] = 0;
    apuStack_50[0][1] = (int)uVar3 + -1;
    if (uVar3 != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)((int)apuStack_50[0] + iVar4 + 8) = 0xfffffffe;
        uVar3 = uVar3 - 1;
        iVar4 = iVar4 + 0xc;
      } while (uVar3 != 0);
    }
    if (*param_1 != 0) {
      iVar4 = 0;
      lVar6 = (unsigned __int64)*(unsigned int *)(*param_1 + 4) + 1;
      do {
        iVar5 = iVar4 + *param_1;
        if (*(int *)(iVar5 + 8) != -2) {
          fn_826DACD8(apuStack_50,param_2,iVar5 + 0x10,*(unsigned int *)(*(int *)(iVar5 + 0x10) + 8)
                       );
          if (*(int *)(iVar5 + 0x10) != 0) {
            fn_8267C4F0();
          }
          *(unsigned int *)(iVar5 + 8) = 0xfffffffe;
        }
        lVar6 = lVar6 + -1;
        iVar4 = iVar4 + 0xc;
      } while (lVar6 != 0);
      fn_8267BE38(*param_1);
    }
    puVar2 = apuStack_50[0];
    apuStack_50[0] = (unsigned int *)0x0;
    *param_1 = (int)puVar2;
    fn_826DAE08(apuStack_50);
  }
  return;
}

