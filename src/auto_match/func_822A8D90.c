typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f0;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822315A0();
extern int fn_822A8A50();
extern int fn_822A8D30();
extern int fn_822A9460();
extern int fn_822A9B80();
extern int fn_822A9BF0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82536CC8();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82D7E470();
extern unsigned int iStack_ec;
extern unsigned int lbl_821AC454;
extern unsigned int lbl_821C0DB8;
extern unsigned int lbl_8327F874;
extern unsigned int stack0x00000000;


unsigned int *
fn_822A8D90(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  char cVar1;
  unsigned int uVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned __int64 uVar6;
  int *piVar12;
  unsigned int uVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  unsigned int *puVar17;
  unsigned int *puVar18;
  unsigned int uVar20;
  unsigned __int64 uVar19;
  unsigned char auStack_f0 [4];
  int iStack_ec;
  unsigned int auStack_e8 [2];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [48];
  unsigned char auStack_a0 [160];
  
  param_1[1] = param_3;
  puVar18 = param_1 + 2;
  *param_1 = &lbl_821AC454;
  fn_82230300(puVar18,0,0);
  uVar20 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  fn_82230300(param_1 + 0x11,0,0);
  param_1[0x18] = 0;
  puVar17 = param_1 + 0x1c;
  param_1[0x19] = 1;
  param_1[0x1a] = 1;
  param_1[0x1b] = 0;
  fn_82230300(puVar17,0,0);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  piVar16 = param_1 + 0x23;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = param_4;
  param_1[9] = 0;
  piVar7 = (int *)fn_8251F720(param_2,0);
  iVar8 = fn_8251FBA8();
  param_1[0x20] = 0;
  puVar9 = puVar17;
  if (0xf < (unsigned int)param_1[0x21]) {
    puVar9 = (unsigned int *)*puVar17;
  }
  *(unsigned char *)puVar9 = 0;
  param_1[6] = 0;
  puVar9 = puVar18;
  if (0xf < (unsigned int)param_1[7]) {
    puVar9 = (unsigned int *)*puVar18;
  }
  bVar3 = false;
  *(unsigned char *)puVar9 = 0;
  piVar5 = piVar7;
  while (piVar4 = piVar5, piVar4 < (int *)(iVar8 + (int)piVar7)) {
    if (*piVar4 == 0) {
      piVar5 = piVar4 + 0x12;
      if (!bVar3) {
        piVar12 = piVar4 + 1;
        bVar3 = true;
        piVar15 = piVar12;
        do {
          cVar1 = *(char *)piVar15;
          piVar15 = (int *)((int)piVar15 + 1);
        } while (cVar1 != '\0');
        fn_82230360(puVar17,piVar12,(char *)((int)piVar15 + (-1 - (int)piVar12)));
        piVar12 = piVar4 + 9;
        piVar15 = piVar12;
        do {
          cVar1 = *(char *)piVar15;
          piVar15 = (int *)((int)piVar15 + 1);
        } while (cVar1 != '\0');
        fn_82230360(puVar18,piVar12,(char *)((int)piVar15 + (-1 - (int)piVar12)));
        piVar15 = piVar4 + 0x11;
        if (*piVar15 != 0) {
          uVar11 = fn_8251F720(piVar15,0);
          param_1[10] = uVar11;
        }
        param_1[9] = *piVar15;
      }
    }
    else {
      piVar5 = piVar4;
      if (*piVar4 == 5) {
        puVar9 = (unsigned int *)fn_8265C9E0(0x10);
        if (puVar9 == (unsigned int *)0x0) {
          puVar9 = (unsigned int *)0x0;
        }
        else {
          *puVar9 = &lbl_821C0DB8;
          puVar9[1] = 1;
          puVar9[2] = 1;
          puVar9[3] = 0;
        }
        puVar10 = (unsigned int *)fn_822A9460(&stack0x00000000 + -0xf0,param_1,piVar4);
        iVar14 = 0;
        if ((unsigned int *)(&stack0x00000000 + -0xe8) != puVar10) {
          iVar14 = puVar10[1];
          puVar10[1] = 0;
          *puVar10 = 0;
        }
        if (puVar9 != (unsigned int *)0x0) {
          fn_822315A0(puVar9);
        }
        if (iStack_ec != 0) {
          fn_822315A0();
        }
        fn_822A9BF0(piVar16,&stack0x00000000 + -0xe0);
        piVar5 = piVar4 + 0x48;
        if (iVar14 != 0) {
          fn_822315A0();
        }
      }
    }
  }
  fn_8251FA58(piVar7);
  fn_8266EC60();
  uVar11 = fn_82D7E470();
  param_1[0x1a] = (unsigned int)LZCOUNT(uVar11) >> 5;
  iVar8 = fn_822A9B80();
  if (iVar8 != 0) {
    uVar13 = 0;
    if (param_1[0x24] - *piVar16 >> 4 != 0) {
      iVar14 = 0;
      do {
        uVar2 = *(unsigned int *)(*(int *)(iVar14 + *piVar16) + 0xa0);
        if ((uVar2 == 0) ||
           (uVar11 = 1,
           ((unsigned int)*(unsigned char *)(*(int *)(*(int *)(iVar8 + 0xf0) + 8) + (uVar2 >> 3)) & 1 << (uVar2 & 7))
           == 0)) {
          uVar11 = 0;
        }
        *(unsigned int *)(iVar14 + *piVar16 + 0xc) = uVar11;
        uVar13 = uVar13 + 1;
        iVar14 = iVar14 + 0x10;
      } while (uVar13 < (unsigned int)(param_1[0x24] - *piVar16 >> 4));
    }
    uVar13 = param_1[0xf];
    if ((uVar13 != 0) &&
       (((unsigned int)*(unsigned char *)((uVar13 >> 3) + *(int *)(*(int *)(iVar8 + 0xf0) + 8)) & 1 << (uVar13 & 7))
        != 0)) {
      uVar20 = 1;
    }
    param_1[0xe] = uVar20;
  }
  if (param_1[6] != 0) {
    fn_828647F0(&stack0x00000000 + -0xd0,*(unsigned int *)(param_1[1] + 0x84c));
    if (0xf < (unsigned int)param_1[7]) {
      puVar18 = (unsigned int *)*puVar18;
    }
    uVar19 = (unsigned __int64)lbl_8327F874;
    if (uVar19 == 0) {
      uVar19 = fn_82536CC8();
      lbl_8327F874 = (unsigned int)uVar19;
    }
    uVar6 = fn_82864988(&stack0x00000000 + -0xa0,puVar18);
    uVar19 = fn_822A8D30(uVar19,&stack0x00000000 + -0xd0);
    if ((uVar19 & 0xffffffff) != 0) {
      fn_822A8A50(uVar19,uVar6);
    }
    fn_82864898(&stack0x00000000 + -0xa0);
    fn_82864898(&stack0x00000000 + -0xd0);
  }
  return param_1;
}

