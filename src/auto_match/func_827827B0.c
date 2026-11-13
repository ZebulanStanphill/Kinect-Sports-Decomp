extern int fn_8277C100();
extern int fn_8277CA30();
extern int fn_8277CB68();
extern int fn_8277DDC0();
extern int fn_8277E1A8();
extern int fn_8277EE08();
extern int fn_827806D0();
extern int fn_82782068();
extern int fn_82782658();
extern unsigned int lbl_82015514;


void fn_827827B0(int param_1)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  unsigned int uVar9;
  int *piVar10;
  unsigned int uVar11;
  __int64 lVar12;
  double dVar13;
  double dVar14;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    lVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0xdc) + 1;
    fn_8277CB68(param_1 + 0xcc,lVar12,0x20);
    *(int *)(param_1 + 0xd0) = (int)lVar12;
    fn_8277E1A8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xdc) + 1,1);
    uVar2 = lbl_82015514;
    *(unsigned int *)(param_1 + 0x114) = lbl_82015514;
    *(unsigned int *)(param_1 + 0x118) = uVar2;
    if (*(char *)(param_1 + 4) != '\0') {
      fn_8277DDC0(param_1);
    }
    fn_827806D0(param_1);
    piVar10 = (int *)(param_1 + 0x8c);
    uVar9 = 0;
    uVar11 = 0;
    fn_8277CB68(piVar10,*(unsigned int *)(param_1 + 0x60),0x20);
    fn_8277CB68(param_1 + 0x98,*(unsigned int *)(param_1 + 0x60),0x20);
    fn_8277CB68(param_1 + 0xa4,*(unsigned int *)(param_1 + 0x60),0x20);
    uVar2 = *(unsigned int *)(param_1 + 0x60);
    fn_8277CB68(param_1 + 0xb0,uVar2,0x20);
    *(unsigned int *)(param_1 + 0xb4) = uVar2;
    fn_8277CA30(param_1 + 0x11c,*(unsigned int *)(param_1 + 0x60),0x20);
    fn_8277CA30(param_1 + 0x128,*(unsigned int *)(param_1 + 0x60),0x20);
    *(unsigned int *)(param_1 + 0x134) = 0;
    *(unsigned int *)(param_1 + 0x144) = 0;
    dVar13 = (double)*(float *)(*(int *)((*(unsigned int *)**(unsigned int **)(param_1 + 0x88) >> 8 & 0xfffffc
                                         ) + *(int *)(param_1 + 0x3c)) +
                                (*(unsigned int *)**(unsigned int **)(param_1 + 0x88) & 0x3ff) * 8 + 4);
    if (*(int *)(param_1 + 0x7c) != 0) {
      do {
        uVar9 = uVar9 + 1;
        dVar14 = dVar13;
        if (uVar9 < *(unsigned int *)(param_1 + 0x7c)) {
          uVar4 = *(unsigned int *)(*(int *)((uVar9 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x88)) +
                           (uVar9 * 4 & 0xffc));
          dVar14 = (double)*(float *)(*(int *)((uVar4 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x3c)) +
                                      (uVar4 & 0x3ff) * 8 + 4);
        }
        if (uVar11 < *(unsigned int *)(param_1 + 0x74)) {
          iVar6 = uVar11 << 2;
          do {
            if (dVar13 < (double)*(float *)(*(int *)(iVar6 + *(int *)(param_1 + 0x70)) + 4)) break;
            uVar11 = uVar11 + 1;
            iVar6 = iVar6 + 4;
          } while (uVar11 < *(unsigned int *)(param_1 + 0x74));
        }
        uVar4 = fn_8277EE08(dVar13,dVar14,param_1);
        if (*(int *)(param_1 + 0xbc) == 0) {
          if (uVar4 != 0) {
            fn_8277C100(param_1,piVar10);
          }
          fn_82782068(dVar13,param_1,piVar10);
        }
        else {
          fn_82782658(dVar13,dVar14,param_1);
        }
        if ((uVar4 & 2) != 0) {
          uVar5 = 0;
          uVar4 = 0;
          if (*(int *)(param_1 + 0x90) != 0) {
            iVar6 = 0;
            iVar7 = 0;
            do {
              iVar3 = *(int *)(iVar7 + *piVar10);
              if ((*(unsigned int *)(iVar3 + 0x2c) & 2) == 0) {
                *(int *)(iVar6 + *piVar10) = iVar3;
                uVar5 = uVar5 + 1;
                iVar6 = iVar6 + 4;
              }
              uVar4 = uVar4 + 1;
              iVar7 = iVar7 + 4;
            } while (uVar4 < *(unsigned int *)(param_1 + 0x90));
          }
          if (uVar5 < *(unsigned int *)(param_1 + 0x90)) {
            *(unsigned int *)(param_1 + 0x90) = uVar5;
          }
        }
        dVar13 = dVar14;
      } while (uVar9 < *(unsigned int *)(param_1 + 0x7c));
    }
    if (*(char *)(param_1 + 8) != '\0') {
      uVar9 = 0;
      if (*(int *)(param_1 + 0x104) != 0) {
        do {
          uVar11 = uVar9 >> 8;
          uVar4 = uVar9 & 0x3ff;
          uVar9 = uVar9 + 1;
          pfVar8 = (float *)(*(int *)((uVar11 & 0xfffffc) + *(int *)(param_1 + 0x110)) + uVar4 * 8);
          fVar1 = pfVar8[1];
          pfVar8[1] = -*pfVar8;
          *pfVar8 = fVar1;
        } while (uVar9 < *(unsigned int *)(param_1 + 0x104));
      }
    }
  }
  return;
}

