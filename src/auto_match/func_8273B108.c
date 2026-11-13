extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82739680();
extern int fn_827396D0();
extern unsigned int lbl_82011DEC;
extern unsigned int lbl_82011DF0;


void fn_8273B108(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  char cVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  cVar5 = fn_82695468(param_1,0x23);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eeb4,0,0);
  }
  else {
    iVar9 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar9 = 0;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      dVar10 = (double)fn_826972E0(uVar3,uVar1);
      iVar8 = (int)dVar10;
      lVar6 = 0;
      uVar4 = fn_82739680(*(unsigned int *)(iVar9 + 0x3c));
      iVar2 = *(int *)(iVar9 + 0x40);
      do {
        iVar7 = (int)(((uVar4 & 0xff) * 0xc + lVar6 & 0xffffffff) << 2);
        if (iVar2 < *(int *)(&lbl_82011DF0 + iVar7)) {
          if ((int)lVar6 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(&lbl_82011DEC + iVar7);
          }
          iVar8 = (iVar7 - iVar2) + iVar8 + -1;
          *(int *)(iVar9 + 0x40) = iVar2 + iVar8;
          *(__int64 *)(iVar9 + 0x30) = (__int64)iVar8 * 86400000 + *(__int64 *)(iVar9 + 0x30);
          fn_827396D0(iVar9);
          return;
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < 0xc);
    }
  }
  return;
}

