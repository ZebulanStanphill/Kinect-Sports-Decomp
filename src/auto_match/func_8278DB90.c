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

void fn_8278DB90(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  double dVar7;
  unsigned char auStack_60 [4];
  unsigned int *puStack_5c;
  unsigned __int64 uStack_58;
  
  if (param_3 == 0) {
    fn_826DAE08();
  }
  else {
    if (param_3 < 8) {
      uVar6 = 8;
    }
    else {
      uStack_58 = (unsigned __int64)(param_3 - 1);
      dVar7 = (double)fn_82F65E20((double)uStack_58);
      uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)((float)dVar7 * lbl_8200561C + lbl_82002AE0))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uVar6 = (unsigned __int64)(unsigned int)(1 << ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_58 = CONCAT44(0x144,(((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF));
    puStack_5c = (unsigned int *)0x0;
    puStack_5c = (unsigned int *)fn_8267BED0(param_2,uVar6 * 0xc + 8,&uStack_58);
    *puStack_5c = 0;
    puStack_5c[1] = (int)uVar6 + -1;
    if (uVar6 != 0) {
      iVar3 = 0;
      do {
        *(unsigned int *)((int)puStack_5c + iVar3 + 8) = 0xfffffffe;
        uVar6 = uVar6 - 1;
        iVar3 = iVar3 + 0xc;
      } while (uVar6 != 0);
    }
    if (*param_1 != 0) {
      iVar3 = 0;
      lVar5 = (unsigned __int64)*(unsigned int *)(*param_1 + 4) + 1;
      do {
        iVar4 = iVar3 + *param_1;
        if (*(int *)(iVar4 + 8) != -2) {
          uVar2 = fn_8278BA98(auStack_60,*(unsigned int *)(iVar4 + 0x10));
          fn_8278C160(&puStack_5c,param_2,iVar4 + 0x10,uVar2);
          if (*(int *)(iVar4 + 0x10) != 0) {
            fn_8267C4F0();
          }
          *(unsigned int *)(iVar4 + 8) = 0xfffffffe;
        }
        lVar5 = lVar5 + -1;
        iVar3 = iVar3 + 0xc;
      } while (lVar5 != 0);
      fn_8267BE38(*param_1);
    }
    puVar1 = puStack_5c;
    puStack_5c = (unsigned int *)0x0;
    *param_1 = (int)puVar1;
    fn_826DAE08(&puStack_5c);
  }
  return;
}

