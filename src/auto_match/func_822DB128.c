#define true 1
extern unsigned int *auStack_e8;
extern int fn_822315A0();
extern int fn_822BD338();
extern int fn_822DB5D0();
extern int fn_822DB628();
extern int fn_822DC6A0();
extern int fn_8232C8B8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8255FD70();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F63CA0();
extern unsigned int iStack00000014;
extern unsigned int iStack_100;
extern unsigned int iStack_e0;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_8219297C;
extern unsigned int lbl_821AE598;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_822DB128(int param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned short *puVar6;
  char cVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iStack00000014;
  int iStack_100;
  int aiStack_f8 [2];
  unsigned int *puStack_f0;
  unsigned int *puStack_ec;
  unsigned int auStack_e8 [2];
  int iStack_e0;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  int *piStack_c0;
  int *piStack_bc;
  
  if (0xf < (unsigned int)param_2[5]) {
    param_2 = (unsigned int *)*param_2;
  }
  iStack00000014 = param_1;
  fn_8255FD70(&piStack_c0,*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x118) + 0x24),
                    param_2);
  iStack_100 = 0;
  dVar15 = (double)lbl_8219297C;
  dVar14 = (double)lbl_821917B0;
  piVar9 = piStack_c0;
  iVar10 = aiStack_f8[0];
  do {
    if (piVar9 == piStack_bc) {
      if (piStack_c0 != (int *)0x0) {
        fn_8265CA20();
      }
      return;
    }
    iVar2 = *piVar9;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    aiStack_f8[0] = iVar2;
    puVar6 = (unsigned short *)fn_8251F720((unsigned int *)(iVar2 + 0x44),0);
    uVar1 = puVar6[6];
    while (uVar1 != 0) {
      if (uVar1 == 0x14) goto LAB_822db23c;
      puVar6 = (unsigned short *)((unsigned int)*puVar6 + (int)puVar6);
      uVar1 = puVar6[6];
    }
    puVar6 = (unsigned short *)0x0;
LAB_822db23c:
    uVar3 = *(unsigned int *)(puVar6 + 8);
    dVar16 = (double)*(float *)(puVar6 + 2);
    if (uVar3 == 0) {
      iVar10 = 0;
    }
    else if (uVar3 == 1) {
      iVar10 = 1;
    }
    else if (uVar3 < 3) {
      iVar10 = 2;
    }
    fn_8251FA58();
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    auStack_e8[0] = 0;
    iStack_e0 = 1;
    fn_82F63CA0(auStack_e8,0xffffffff821ac4b4,1);
    fn_822DC6A0(auStack_e8,(int)auStack_e8 + iStack_e0,
                      ((int)auStack_e8 + iStack_e0) - (int)auStack_e8);
    fn_822DB628(&uStack_d0,aiStack_f8,auStack_e8);
    uVar8 = (unsigned __int64)uStack_cc;
    uVar4 = 0;
    if (uVar8 != uStack_d0) {
      do {
        uVar13 = uVar4;
        uVar8 = uVar8 - 0x1c;
        cVar7 = fn_822BD338(uVar8,0xffffffff821adac8);
        if (cVar7 == '\0') {
          cVar7 = fn_822BD338(uVar8,0xffffffff821adacc);
          if (cVar7 == '\0') {
            cVar7 = fn_822BD338(uVar8,0xffffffff821adad0);
            if (cVar7 != '\0') {
              uVar13 = 3;
            }
          }
          else {
            uVar13 = 2;
          }
        }
        else {
          uVar13 = 1;
        }
        uVar4 = uVar13;
      } while ((uVar8 & 0xffffffff) != (unsigned __int64)uStack_d0);
      uVar8 = (unsigned __int64)uStack_cc;
      param_1 = iStack00000014;
    }
    cVar7 = fn_822BD338(uVar8 - 0x1c,0xffffffff821adad4);
    if ((cVar7 != '\0') && (uVar8 = (unsigned __int64)uStack_cc, uVar8 != uStack_d0)) {
      do {
        uVar8 = uVar8 - 0x1c;
        cVar7 = fn_822BD338(uVar8,0xffffffff821adadc);
        uVar11 = uVar12;
        if (cVar7 != '\0') {
          uVar11 = uVar12 | 1;
        }
        cVar7 = fn_822BD338(uVar8,0xffffffff821adae0);
        if (cVar7 == '\0') {
          cVar7 = fn_822BD338(uVar8,0xffffffff821adae8);
          if (cVar7 != '\0') {
            uVar11 = uVar11 | 4;
          }
        }
        else {
          uVar11 = uVar11 | 2;
        }
        uVar12 = uVar11;
        param_1 = iStack00000014;
      } while ((uVar8 & 0xffffffff) != (unsigned __int64)uStack_d0);
    }
    puStack_ec = (unsigned int *)fn_8265C9E0(0x34);
    if (puStack_ec == (unsigned int *)0x0) {
      puStack_ec = (unsigned int *)0x0;
    }
    else {
      *puStack_ec = &lbl_821AE598;
      puStack_ec[1] = 1;
      puStack_ec[2] = 1;
      if (puStack_ec + 3 != (int *)0x0) {
        uVar4 = *(unsigned int *)(iVar2 + 0x44);
        uVar5 = *(unsigned int *)(iVar2 + 0x40);
        puStack_ec[7] = (float)dVar16;
        puStack_ec[9] = (float)dVar15;
        puStack_ec[10] = (float)dVar14;
        puStack_ec[6] = iVar2;
        puStack_ec[8] = iVar10;
        puStack_ec[5] = uVar4;
        puStack_ec[4] = uVar5;
        puStack_ec[3] = iStack_100;
        puStack_ec[0xb] = uVar11;
        puStack_ec[0xc] = uVar13;
      }
    }
    puStack_f0 = puStack_ec + 3;
    fn_8232C8B8(param_1 + 0x140,&puStack_f0);
    if (puStack_ec != (unsigned int *)0x0) {
      fn_822315A0();
    }
    iStack_100 = iStack_100 + 1;
    fn_822DB5D0(&uStack_d0);
    piVar9 = piVar9 + 1;
  } while( true );
}

