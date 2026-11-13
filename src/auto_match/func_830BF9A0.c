#define true 1
extern int fn_82CC3F68();
extern int fn_830BF860();
extern int fn_830BF8B0();
extern int fn_830BF900();
extern int fn_830BF950();
extern int fn_830C10E0();
extern unsigned int uRam8329f07c;
extern unsigned int uRam8329f088;
extern unsigned int uStack_a0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


unsigned __int64 fn_830BF9A0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned short uVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned int *puVar18;
  unsigned int *puVar19;
  int iVar20;
  unsigned __int64 uVar21;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_a0;
  
  uVar11 = *(unsigned int *)(param_1 + 0xdc);
  iVar7 = *(int *)(param_1 + 0x88) << 4;
  uVar2 = *(unsigned int *)(param_1 + 0xec0);
  uVar3 = *(unsigned int *)(param_1 + 0xe0);
  uVar4 = *(unsigned int *)(param_1 + 0xec4);
  uVar8 = *(unsigned short *)(param_2 + 0x32) >> 1;
  uVar5 = *(unsigned int *)(param_1 + 0xec8);
  iVar6 = *(int *)(param_1 + 0x110);
  bVar1 = *(unsigned char *)(param_2 + 0x21);
  if (param_4 == 0) {
    *(unsigned int *)(param_3 + 0x1c) = *(unsigned int *)(param_1 + 0x56fc);
  }
  else {
    *(unsigned int *)(param_3 + 0x1c) = *(unsigned int *)(param_4 * 0x10 + param_2 + 0x5c8);
  }
  lVar10 = (__int64)(int)((unsigned int)*(unsigned short *)(param_2 + 0x4c) << 3) * (__int64)param_5;
  uVar15 = (__int64)(int)((unsigned int)*(unsigned short *)(param_2 + 0x4a) << 4) * (__int64)param_5 +
           (unsigned __int64)uVar2 + (unsigned __int64)uVar11;
  uVar16 = lVar10 + (unsigned __int64)uVar4 + (unsigned __int64)uVar3;
  uVar21 = lVar10 + (unsigned __int64)uVar5 + (unsigned __int64)uVar3;
  uStack_bc = (unsigned int)uVar15;
  puVar18 = (unsigned int *)((unsigned int)uVar8 * param_5 * 0x18 + iVar6);
  uStack_c0 = (unsigned int)uVar16;
  uStack_b8 = (unsigned int)uVar21;
  if (param_5 < param_6) {
    uStack_a0 = param_6 - param_5;
    while( true ) {
      uVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0x50d8);
      uVar11 = 0;
      uVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0x50dc);
      uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x50e0);
      if (uVar8 != 0) {
        iVar6 = (int)uVar16;
        iVar17 = 0;
        do {
          iVar20 = 0;
          lVar10 = 0;
          puVar19 = (unsigned int *)(param_2 + 0x22c);
          do {
            puVar19 = puVar19 + 1;
            uVar2 = *puVar19;
            lVar9 = (unsigned __int64)*(unsigned int *)(param_3 + 0x1c) - 0x80;
            uVar3 = *(unsigned int *)(((iVar20 >> 2) + 2) * 4 + param_3);
            dataCacheBlockTouch((unsigned __int64)*(unsigned int *)(param_3 + 0x1c) - 0x100);
            *(int *)(param_3 + 0x1c) = (int)lVar9;
            fn_82CC3F68(lVar9,lVar10 + (unsigned __int64)*(unsigned int *)(param_2 + 0x568),
                            (unsigned __int64)*(unsigned char *)(puVar18 + 1) * 0x40 +
                            (unsigned __int64)*(unsigned int *)(param_2 + 0x188),uRam8329f07c,
                            (unsigned __int64)uVar3 + (unsigned __int64)uVar2,
                            *(unsigned short *)(((iVar20 >> 2) + 0x2d) * 2 + param_2),uRam8329f088);
            lVar10 = lVar10 + 0x80;
            iVar20 = iVar20 + 1;
          } while ((int)lVar10 < 0x300);
          if ((bVar1 & 1) == 0) {
            if ((*puVar18 & 0x10000) == 0) {
              fn_830BF900();
            }
            else {
              fn_830BF950(*(unsigned int *)(param_2 + 0x568),uVar15,uVar16,
                              (unsigned int)((int)uVar21 - iVar6) + uVar16,*(unsigned short *)(param_2 + 0x4a),
                              *(unsigned short *)(param_2 + 0x4c));
            }
          }
          else {
            lVar10 = ((unsigned __int64)uVar11 & 0x7fffffff) * 2;
            iVar20 = (int)(((unsigned __int64)uVar11 & 0x1fffffff) << 3);
            if ((*puVar18 & 0x800) == 0) {
              *(unsigned int *)(*(int *)(param_2 + 0x160) + iVar17) = 0;
              *(unsigned int *)
               ((int)(((unsigned __int64)*(unsigned short *)(param_2 + 0x32) + lVar10 + 1 & 0xffffffff) << 2) +
               *(int *)(param_2 + 0x15c)) = 0;
              *(unsigned int *)
               ((int)(((unsigned __int64)*(unsigned short *)(param_2 + 0x32) + lVar10 & 0xffffffff) << 2) +
               *(int *)(param_2 + 0x15c)) = 0;
              *(unsigned int *)(iVar20 + *(int *)(param_2 + 0x15c) + 4) = 0;
              *(unsigned int *)(iVar20 + *(int *)(param_2 + 0x15c)) = 0;
            }
            else {
              *(unsigned int *)(*(int *)(param_2 + 0x160) + iVar17) = 1;
              *(unsigned int *)
               ((int)(((unsigned __int64)*(unsigned short *)(param_2 + 0x32) + lVar10 + 1 & 0xffffffff) << 2) +
               *(int *)(param_2 + 0x15c)) = 1;
              *(unsigned int *)
               ((int)(((unsigned __int64)*(unsigned short *)(param_2 + 0x32) + lVar10 & 0xffffffff) << 2) +
               *(int *)(param_2 + 0x15c)) = 1;
              *(unsigned int *)(iVar20 + *(int *)(param_2 + 0x15c) + 4) = 1;
              *(unsigned int *)(iVar20 + *(int *)(param_2 + 0x15c)) = 1;
            }
            if ((*puVar18 & 0x10000) == 0) {
              fn_830BF860();
              uVar14 = uVar14 + 0x20;
              uVar13 = uVar13 + 0x10;
              uVar12 = uVar12 + 0x10;
            }
            else {
              fn_830BF8B0(*(unsigned int *)(param_2 + 0x568),uVar14,uVar13,uVar12,iVar7,iVar7 >> 1
                             );
              uVar14 = uVar14 + 0x20;
              uVar13 = uVar13 + 0x10;
              uVar12 = uVar12 + 0x10;
            }
          }
          uVar11 = uVar11 + 1;
          uVar15 = uVar15 + 0x10;
          uVar16 = uVar16 + 8;
          puVar18 = puVar18 + 6;
          iVar17 = iVar17 + 4;
        } while ((int)uVar11 < (int)(unsigned int)uVar8);
        uVar21 = (unsigned __int64)uStack_b8;
        uVar16 = (unsigned __int64)uStack_c0;
        uVar15 = (unsigned __int64)uStack_bc;
      }
      if ((bVar1 & 1) != 0) {
        fn_830C10E0(param_2,uVar15,uVar16,uVar21,*(unsigned int *)(param_1 + 0x50d8),
                        *(unsigned int *)(param_1 + 0x50dc),*(unsigned int *)(param_1 + 0x50e0));
      }
      uVar12 = (unsigned __int64)uStack_a0;
      uStack_c0 = *(int *)(param_1 + 0xe8) + (int)uVar16;
      uStack_bc = (int)uVar15 + *(int *)(param_1 + 0xe4);
      uStack_b8 = *(int *)(param_1 + 0xe8) + (int)uVar21;
      uStack_a0 = (unsigned int)(uVar12 - 1);
      if (uVar12 - 1 == 0) break;
      uVar21 = (unsigned __int64)uStack_b8;
      uVar16 = (unsigned __int64)uStack_c0;
      uVar15 = (unsigned __int64)uStack_bc;
    }
  }
  return 0;
}

