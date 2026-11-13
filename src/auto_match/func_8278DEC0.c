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

void fn_8278DEC0(int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  double dVar7;
  unsigned char auStack_50 [4];
  unsigned int *puStack_4c;
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
    fn_826FB150();
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
    uStack_48 = CONCAT44(0x144,(((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF));
    puStack_4c = (unsigned int *)0x0;
    puStack_4c = (unsigned int *)fn_8267BED0(param_2,uVar3 * 0xc + 8,&uStack_48);
    *puStack_4c = 0;
    puStack_4c[1] = (int)uVar3 + -1;
    if (uVar3 != 0) {
      iVar4 = 0;
      do {
        *(unsigned int *)((int)puStack_4c + iVar4 + 8) = 0xfffffffe;
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
          fn_8278BDD0(auStack_50,*(unsigned int *)(iVar5 + 0x10),iVar5 + 0x10);
          fn_8278C290(&puStack_4c,param_2);
          if (*(int *)(iVar5 + 0x10) != 0) {
            fn_8267C498();
          }
          *(unsigned int *)(iVar5 + 8) = 0xfffffffe;
        }
        lVar6 = lVar6 + -1;
        iVar4 = iVar4 + 0xc;
      } while (lVar6 != 0);
      fn_8267BE38(*param_1);
    }
    puVar2 = puStack_4c;
    puStack_4c = (unsigned int *)0x0;
    *param_1 = (int)puVar2;
    fn_826FB150(&puStack_4c);
  }
  return;
}

