#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826F2730();
extern int fn_827B02B0();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200561C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_48;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_826F1BA8(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  double dVar7;
  unsigned int *apuStack_50 [2];
  unsigned __int64 uStack_48;
  
  if (param_3 == 0) {
    fn_827B02B0();
  }
  else {
    if (param_3 < 8) {
      uVar5 = 8;
    }
    else {
      uStack_48 = (unsigned __int64)(param_3 - 1);
      dVar7 = (double)fn_82F65E20((double)uStack_48);
      uStack_48 = ((((unsigned __int64)(uStack_48)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)((float)dVar7 * lbl_8200561C + lbl_82002AE0))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uVar5 = (unsigned __int64)(unsigned int)(1 << ((((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_48 = CONCAT44(2,(((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF));
    apuStack_50[0] = (unsigned int *)0x0;
    apuStack_50[0] = (unsigned int *)fn_8267B890(lbl_831E7E64,uVar5 * 0x14 + 8,&uStack_48);
    *apuStack_50[0] = 0;
    apuStack_50[0][1] = (int)uVar5 + -1;
    if (uVar5 != 0) {
      iVar3 = 0;
      do {
        *(unsigned int *)((int)apuStack_50[0] + iVar3 + 8) = 0xfffffffe;
        uVar5 = uVar5 - 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar5 != 0);
    }
    if (*param_1 != 0) {
      iVar3 = 0;
      lVar4 = (unsigned __int64)*(unsigned int *)(*param_1 + 4) + 1;
      do {
        iVar1 = *param_1;
        if (*(int *)(iVar3 + iVar1 + 8) != -2) {
          lVar6 = 4;
          do {
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          fn_826F2730(apuStack_50,param_2);
          *(unsigned int *)(iVar3 + iVar1 + 8) = 0xfffffffe;
        }
        lVar4 = lVar4 + -1;
        iVar3 = iVar3 + 0x14;
      } while (lVar4 != 0);
      fn_8267BE38(*param_1);
    }
    puVar2 = apuStack_50[0];
    apuStack_50[0] = (unsigned int *)0x0;
    *param_1 = (int)puVar2;
    fn_827B02B0(apuStack_50);
  }
  return;
}

