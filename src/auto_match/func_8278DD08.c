#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_826FB150();
extern int fn_8278BDD0();
extern int fn_8278C290();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200561C;
extern unsigned int uStack_48;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8278DD08(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  double dVar6;
  unsigned char auStack_50 [4];
  unsigned int *puStack_4c;
  unsigned __int64 uStack_48;
  
  if (param_3 == 0) {
    fn_826FB150();
  }
  else {
    if (param_3 < 8) {
      uVar5 = 8;
    }
    else {
      uStack_48 = (unsigned __int64)(param_3 - 1);
      dVar6 = (double)fn_82F65E20((double)uStack_48);
      uStack_48 = ((((unsigned __int64)(uStack_48)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)((float)dVar6 * lbl_8200561C + lbl_82002AE0))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uVar5 = (unsigned __int64)(unsigned int)(1 << ((((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_48 = CONCAT44(0x144,(((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF));
    puStack_4c = (unsigned int *)0x0;
    puStack_4c = (unsigned int *)fn_8267BED0(param_2,uVar5 * 0xc + 8,&uStack_48);
    *puStack_4c = 0;
    puStack_4c[1] = (int)uVar5 + -1;
    if (uVar5 != 0) {
      iVar2 = 0;
      do {
        *(unsigned int *)((int)puStack_4c + iVar2 + 8) = 0xfffffffe;
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar5 != 0);
    }
    if (*param_1 != 0) {
      iVar2 = 0;
      lVar4 = (unsigned __int64)*(unsigned int *)(*param_1 + 4) + 1;
      do {
        iVar3 = iVar2 + *param_1;
        if (*(int *)(iVar3 + 8) != -2) {
          fn_8278BDD0(auStack_50,*(unsigned int *)(iVar3 + 0x10),iVar3 + 0x10);
          fn_8278C290(&puStack_4c,param_2);
          if (*(int *)(iVar3 + 0x10) != 0) {
            fn_8267C498();
          }
          *(unsigned int *)(iVar3 + 8) = 0xfffffffe;
        }
        lVar4 = lVar4 + -1;
        iVar2 = iVar2 + 0xc;
      } while (lVar4 != 0);
      fn_8267BE38(*param_1);
    }
    puVar1 = puStack_4c;
    puStack_4c = (unsigned int *)0x0;
    *param_1 = (int)puVar1;
    fn_826FB150(&puStack_4c);
  }
  return;
}

