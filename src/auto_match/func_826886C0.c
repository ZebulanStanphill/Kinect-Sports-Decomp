#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82688000();
extern int fn_82688648();
extern int fn_8268A158();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200561C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_58;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_826886C0(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  double dVar6;
  unsigned int *apuStack_60 [2];
  unsigned __int64 uStack_58;
  
  if (param_3 == 0) {
    fn_82688648();
  }
  else {
    if (param_3 < 8) {
      uVar5 = 8;
    }
    else {
      uStack_58 = (unsigned __int64)(param_3 - 1);
      dVar6 = (double)fn_82F65E20((double)uStack_58);
      uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)((float)dVar6 * lbl_8200561C + lbl_82002AE0))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uVar5 = (unsigned __int64)(unsigned int)(1 << ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_58 = CONCAT44(2,(((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF));
    apuStack_60[0] = (unsigned int *)0x0;
    apuStack_60[0] =
         (unsigned int *)fn_8267B890(lbl_831E7E64,(uVar5 & 0xfffffff) * 0x10 + 8,&uStack_58);
    *apuStack_60[0] = 0;
    apuStack_60[0][1] = (int)uVar5 + -1;
    if (uVar5 != 0) {
      iVar2 = 0;
      do {
        *(unsigned int *)((int)apuStack_60[0] + iVar2 + 8) = 0xfffffffe;
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + 0x10;
      } while (uVar5 != 0);
    }
    if (*param_1 != 0) {
      iVar2 = 0;
      lVar4 = (unsigned __int64)*(unsigned int *)(*param_1 + 4) + 1;
      do {
        iVar3 = iVar2 + *param_1;
        if (*(int *)(iVar3 + 8) != -2) {
          fn_82688000(apuStack_60,param_2,iVar3 + 0x10);
          fn_8268A158(iVar3 + 0x10);
          *(unsigned int *)(iVar3 + 8) = 0xfffffffe;
        }
        lVar4 = lVar4 + -1;
        iVar2 = iVar2 + 0x10;
      } while (lVar4 != 0);
      fn_8267BE38(*param_1);
    }
    puVar1 = apuStack_60[0];
    apuStack_60[0] = (unsigned int *)0x0;
    *param_1 = (int)puVar1;
    fn_82688648(apuStack_60);
  }
  return;
}

