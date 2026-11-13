extern unsigned int *auStack_100;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_822ACDA0();
extern int fn_822B3058();
extern int fn_82507978();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82526C10();
extern unsigned int lbl_821AC494;


unsigned __int64 fn_822ACC48(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  unsigned __int64 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [1];
  char acStack_d0 [128];
  char acStack_50 [80];
  
  pcVar8 = acStack_d0;
  do {
    if (acStack_50 <= pcVar8) break;
    cVar1 = pcVar8[(int)&lbl_821AC494 - (int)acStack_d0];
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar9 = 0;
  if (pcVar8 == acStack_50) {
    pcVar8[-1] = '\0';
  }
  fn_82526C10(acStack_d0,0x80,0xffffffff821ac4b4,param_4,param_2);
  fn_82526C10(acStack_d0);
  uVar10 = 0;
  uVar5 = fn_822ACDA0(param_1,acStack_d0);
  if ((uVar5 & 0xffffffff) != 0) {
    piVar6 = (int *)fn_8251F720(uVar5,0);
    for (piVar11 = piVar6; (piVar11 != (int *)0x0 && (*piVar11 != 0));
        piVar11 = (int *)(piVar11[1] + (int)piVar11)) {
      if (*piVar11 == 2) {
        uVar2 = piVar11[2];
        uVar5 = (unsigned __int64)uVar2;
        if (uVar5 < (param_3 & 0xffffffff)) {
          fn_82507978(piVar11,auStack_100,auStack_f0);
          if ((param_4 & 0xffffffff) != 0) {
            iVar7 = fn_822B3058(auStack_e0,*param_1);
            puVar3 = (unsigned int *)((int)in_r0 + iVar7 & 0xfffffff0);
            uVar12 = puVar3[1];
            uVar13 = puVar3[2];
            uVar14 = puVar3[3];
            puVar4 = (unsigned int *)(uVar2 * 0x10 + (int)param_4 & 0xfffffff0);
            *puVar4 = *puVar3;
            puVar4[1] = uVar12;
            puVar4[2] = uVar13;
            puVar4[3] = uVar14;
          }
          if ((uVar9 & 0xffffffff) <= uVar5) {
            uVar9 = uVar5 + 1;
          }
          uVar10 = uVar10 + 1;
          if ((param_3 & 0xffffffff) <= (uVar10 & 0xffffffff)) break;
        }
      }
    }
    if (piVar6 != (int *)0x0) {
      fn_8251FA58(piVar6);
    }
  }
  return uVar9;
}

