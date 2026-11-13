extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82739680();
extern int fn_827396D0();


void fn_8273ADA8(int param_1)

{
  unsigned int uVar1;
  char cVar5;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar6;
  unsigned __int64 uVar7;
  int iVar8;
  double dVar9;
  
  cVar5 = fn_82695468(param_1,0x23);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eeb4,0,0);
  }
  else {
    iVar8 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar8 = 0;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      dVar9 = (double)fn_826972E0(uVar2,uVar1);
      uVar3 = (unsigned int)dVar9;
      uVar7 = (unsigned __int64)uVar3;
      if (((int)uVar3 < 100) && (-1 < (int)uVar3)) {
        uVar7 = uVar7 + 0x76c;
      }
      iVar6 = *(int *)(iVar8 + 0x40);
      if (0x3b < iVar6) {
        uVar3 = fn_82739680(*(unsigned int *)(iVar8 + 0x3c));
        uVar3 = uVar3 & 0xff;
        uVar4 = fn_82739680(uVar7);
        *(unsigned int *)(iVar8 + 0x40) = (iVar6 - uVar3) + (uVar4 & 0xff);
      }
      iVar6 = (int)uVar7;
      *(int *)(iVar8 + 0x3c) = iVar6;
      uVar3 = iVar6 - 0x7b1;
      *(__int64 *)(iVar8 + 0x30) =
           (__int64)
           (int)(((iVar6 + -0x641) / 400 - (iVar6 + -0x76d) / 100) +
                 ((int)uVar3 >> 2) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 3) != 0) +
                 (iVar6 + -0x7b2) * 0x16d + *(int *)(iVar8 + 0x40)) * 86400000 +
           (__int64)*(int *)(iVar8 + 0x38);
      fn_827396D0(iVar8);
    }
  }
  return;
}

