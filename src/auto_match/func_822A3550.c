typedef unsigned char bool;
extern unsigned int *auStack_100;
extern unsigned int *auStack_118;
extern unsigned int *auStack_120;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_8227BA18();
extern int fn_82672C20();
extern unsigned int iStack_114;
extern unsigned int iStack_11c;
extern unsigned int uStack_110;
extern unsigned int uStack_dc;


void fn_822A3550(int param_1)

{
  bool bVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int uVar8;
  int *piVar9;
  unsigned char *puVar10;
  __int64 lVar11;
  double dVar12;
  double dVar13;
  unsigned char auStack_120 [4];
  int iStack_11c;
  unsigned char auStack_118 [4];
  int iStack_114;
  unsigned __int64 uStack_110;
  unsigned char auStack_100 [8];
  double dStack_f8;
  unsigned char auStack_f0 [8];
  double dStack_e8;
  unsigned char auStack_e0 [4];
  unsigned int uStack_dc;
  int *piStack_d8;
  unsigned char auStack_d0 [8];
  double dStack_c8;
  unsigned char auStack_c0 [8];
  double dStack_b8;
  unsigned char auStack_b0 [8];
  double dStack_a8;
  unsigned char auStack_a0 [8];
  int *piStack_98;
  unsigned char auStack_90 [8];
  char cStack_88;
  unsigned char auStack_80 [128];
  
  fn_8227BA18();
  if (*(int *)(param_1 + 0x1ff8) != 0) {
    piVar4 = (int *)(param_1 + 0x1188);
    uVar5 = 0;
    do {
      if (*piVar4 == 0) break;
      piVar7 = piVar4 + 1;
      uVar6 = 1;
      do {
        if (*piVar7 == 0) break;
        puVar3 = (unsigned int *)((int)&uStack_110 + 4);
        lVar11 = 3;
        do {
          puVar3[3] = 0;
          puVar3 = puVar3 + 4;
          *puVar3 = 0;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        fn_82273CD8(auStack_100,3);
        dVar13 = (double)uVar5;
        dStack_f8 = dVar13;
        fn_82273CD8(auStack_f0,3);
        uStack_110 = (unsigned __int64)uVar6;
        dVar12 = (double)uStack_110;
        dStack_e8 = dVar12;
        fn_82273CD8(auStack_e0,4);
        piStack_d8 = piVar7 + 1;
        puVar3 = (unsigned int *)fn_82279C58(auStack_118,param_1);
        fn_82672C20(*puVar3,0xffffffff821ac020,auStack_100,3);
        if (iStack_114 != 0) {
          fn_822315A0();
        }
        uVar8 = 0;
        piVar9 = piVar7 + 5;
        do {
          if (*piVar9 == 0) break;
          puVar3 = &uStack_dc;
          lVar11 = 5;
          do {
            puVar3[3] = 0;
            puVar3 = puVar3 + 4;
            *puVar3 = 0;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          fn_82273CD8(auStack_d0,3);
          dStack_c8 = dVar13;
          fn_82273CD8(auStack_c0,3);
          dStack_b8 = dVar12;
          fn_82273CD8(auStack_b0,3);
          uVar8 = uVar8 + 1;
          dStack_a8 = (double)uVar8;
          fn_82273CD8(auStack_a0,4);
          piStack_98 = piVar9 + 1;
          iVar2 = piVar9[5];
          fn_82273CD8(auStack_90,2);
          cStack_88 = '\x01' - (iVar2 == 0);
          puVar3 = (unsigned int *)fn_82279C58(auStack_120,param_1);
          fn_82672C20(*puVar3,0xffffffff821ac040,auStack_d0,5);
          if (iStack_11c != 0) {
            fn_822315A0();
          }
          puVar10 = auStack_80;
          lVar11 = 4;
          do {
            puVar10 = puVar10 + -0x10;
            fn_82273C88(puVar10);
            lVar11 = lVar11 + -1;
          } while (-1 < lVar11);
          piVar9 = piVar9 + 6;
        } while (uVar8 < 3);
        puVar10 = auStack_d0;
        lVar11 = 2;
        do {
          puVar10 = puVar10 + -0x10;
          fn_82273C88(puVar10);
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
        piVar7 = piVar7 + 0x17;
        bVar1 = uVar6 < 10;
        uVar6 = uVar6 + 1;
      } while (bVar1);
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0xe7;
    } while (uVar5 < 4);
    *(unsigned int *)(param_1 + 0x1ff8) = 0;
  }
  return;
}

