extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82739680();
extern int fn_827396D0();


void fn_8273AEE0(int param_1)

{
  unsigned int uVar1;
  char cVar5;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
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
      uVar2 = fn_826957D0(param_1,0);
      dVar10 = (double)fn_826972E0(uVar2,uVar1);
      iVar6 = *(int *)(iVar9 + 0x40);
      uVar8 = (unsigned int)dVar10;
      uVar7 = (unsigned __int64)uVar8;
      if (0x3b < iVar6) {
        uVar3 = fn_82739680(*(unsigned int *)(iVar9 + 0x3c));
        uVar3 = uVar3 & 0xff;
        uVar4 = fn_82739680(uVar7);
        uVar8 = (unsigned int)uVar7;
        *(unsigned int *)(iVar9 + 0x40) = (iVar6 - uVar3) + (uVar4 & 0xff);
      }
      *(unsigned int *)(iVar9 + 0x3c) = uVar8;
      uVar3 = uVar8 - 0x7b1;
      *(__int64 *)(iVar9 + 0x30) =
           (__int64)
           (int)(((int)(uVar8 - 0x641) / 400 - (int)(uVar8 - 0x76d) / 100) +
                 ((int)uVar3 >> 2) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 3) != 0) +
                 (uVar8 - 0x7b2) * 0x16d + *(int *)(iVar9 + 0x40)) * 86400000 +
           (__int64)*(int *)(iVar9 + 0x38);
      fn_827396D0(iVar9);
    }
  }
  return;
}

