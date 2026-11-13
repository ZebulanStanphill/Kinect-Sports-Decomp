extern unsigned int *auStack_70;
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8305D7D0();
extern int fn_83066DD8();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_821AAD20;


void fn_83061070(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned char auStack_70 [16];
  
  puVar1 = (unsigned int *)fn_82F6A548();
  uVar2 = puVar1[1];
  dVar8 = (double)lbl_82005C88;
  if (uVar2 != 0) {
    dVar7 = (double)lbl_821AAD20;
    do {
      dVar5 = dVar7;
      dVar9 = dVar7;
      fn_8305D7D0(uVar2,auStack_70);
      iVar3 = 0;
      if (0 < (int)puVar1[6]) {
        lVar4 = 0;
        do {
          dVar6 = (double)fn_83066DD8(auStack_70,lVar4 + (unsigned __int64)*puVar1);
          if (dVar6 < dVar5) {
            dVar5 = dVar6;
          }
          if (dVar9 < dVar6) {
            dVar9 = dVar6;
          }
          iVar3 = iVar3 + 1;
          lVar4 = lVar4 + 0xc;
        } while (iVar3 < (int)puVar1[6]);
      }
      dVar5 = (double)(float)(dVar9 - dVar5);
      if ((dVar5 < dVar8) && (dVar8 = dVar5, (param_2 & 0xffffffff) != 0)) {
        *(unsigned int *)param_2 = uVar2;
      }
    } while ((uVar2 != 0) && (uVar2 = *(unsigned int *)(uVar2 + 4), uVar2 != 0));
  }
  fn_82F6A594(dVar8);
  return;
}

