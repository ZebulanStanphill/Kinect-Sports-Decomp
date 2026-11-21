typedef unsigned char bool;

/* WARNING: Inlined function: __savegprlr_25 */

unsigned __int64 fn_82E22570(unsigned int *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar6;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int ****ppppuVar5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned int ***apppuStack_60 [4];
  int iStack_50;
  unsigned int uStack_4c;
  
  fn_8251C390(auStack_70,0xffffffff8214bee4,0x76);
  if (*(char *)(param_1 + 0x17) == '\0') {
    do {
      fn_82A1E650(param_1[0x1a],0xffffffffffffffff);
      do {
        fn_82230110(apppuStack_60,0xffffffff82196582);
        RtlEnterCriticalSection(param_1 + 0x1b);
        iVar2 = param_1[0x26];
        if (iVar2 != 0) {
          uVar9 = param_1[0x25];
          iVar4 = 0;
          if ((int *)param_1[0x22] != (int *)0x0) {
            iVar4 = *(int *)param_1[0x22];
          }
          if (*(unsigned int *)(iVar4 + 8) <= uVar9) {
            uVar9 = uVar9 - *(unsigned int *)(iVar4 + 8);
          }
          fn_82230218(apppuStack_60,*(unsigned int *)(*(int *)(iVar4 + 4) + uVar9 * 4),0,
                      0xffffffffffffffff);
          fn_82E21FC8(param_1 + 0x22);
        }
        else {
          fn_82A1E810(param_1[0x19]);
          fn_82A1E7D8(param_1[0x1a]);
        }
        RtlLeaveCriticalSection(param_1 + 0x1b);
        if (iStack_50 != 0) {
          fn_82BA02A8(auStack_80);
          puVar8 = param_1 + 0xe;
          if (0xf < (unsigned int)param_1[0x13]) {
            puVar8 = (unsigned int *)*puVar8;
          }
          puVar10 = param_1 + 7;
          if (0xf < (unsigned int)param_1[0xc]) {
            puVar10 = (unsigned int *)*puVar10;
          }
          puVar7 = param_1;
          if (0xf < (unsigned int)param_1[5]) {
            puVar7 = (unsigned int *)*param_1;
          }
          ppppuVar5 = (unsigned int ****)apppuStack_60[0];
          if (uStack_4c < 0x10) {
            ppppuVar5 = apppuStack_60;
          }
          cVar6 = fn_82E22B50(auStack_80,ppppuVar5,puVar7,*(unsigned char *)((int)param_1 + 0x57),
                              param_1[0x16],puVar10,puVar8,*(unsigned short *)(param_1 + 0x15));
          if (*(char *)((int)param_1 + 0x56) != '\0') {
            bVar1 = uStack_4c < 0x10;
            if (cVar6 == '\0') {
              ppppuVar5 = (unsigned int ****)apppuStack_60[0];
              if (bVar1) {
                ppppuVar5 = apppuStack_60;
              }
              uVar3 = fn_82A29DE8(ppppuVar5,0xffffffff80000000,0,0,3,0,0);
              if ((int)uVar3 != -1) {
                iVar4 = fn_82A29D80(uVar3,0);
                fn_82A1E658(uVar3);
                if (iVar4 == 0) {
                  bVar1 = uStack_4c < 0x10;
                  goto LAB_82e223f8;
                }
              }
            }
            else {
LAB_82e223f8:
              ppppuVar5 = (unsigned int ****)apppuStack_60[0];
              if (bVar1) {
                ppppuVar5 = apppuStack_60;
              }
              fn_82A2A958(ppppuVar5);
            }
          }
          fn_82BA02A8(auStack_80);
        }
        fn_82A1E108(1000);
        fn_82230300(apppuStack_60,1,0);
      } while (iVar2 != 0);
    } while (*(char *)(param_1 + 0x17) == '\0');
  }
  fn_829E53B0(auStack_70);
  return 0;
}
