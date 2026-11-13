#define true 1
extern unsigned int *auStack_60;
extern int fn_82AB15D0();
extern int fn_82B7BEB0();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BA1048();
extern int fn_82BBC8E8();
extern int fn_82BC0088();
extern int fn_82BC2E48();
extern int fn_82BC7368();
extern unsigned int iStack_5c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_82BBB7D8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char cVar5;
  int *piVar4;
  unsigned int uVar6;
  int iVar7;
  int iVar9;
  __int64 lVar8;
  __int64 lVar10;
  int iVar11;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  *(int *)(param_1 + 0x864) = *(int *)(param_1 + 0x864) + 1;
  *(int *)(param_1 + 0x868) = *(int *)(param_1 + 0x868) + 1;
  fn_82BA03B8(auStack_60,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0));
  for (iVar7 = *(int *)(param_1 + 0x88); *(int *)(iVar7 + 8) != 0; iVar7 = *(int *)(iVar7 + 8)) {
    for (piVar2 = *(int **)(iVar7 + 0x1c); piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      if (((piVar2[0x39] & 1U) != 0) &&
         ((cVar5 = (**(int (***)())(*piVar2 + 0x24))(piVar2), cVar5 != '\0' ||
          (cVar5 = (**(int (***)())(*piVar2 + 0x28))(piVar2), cVar5 != '\0')))) {
        piVar2[0xdf] = *(int *)(param_1 + 0x864);
        iVar3 = *(int *)(param_1 + 0x868);
        if (*(int *)(param_1 + 0x868) < piVar2[0xef]) {
          iVar3 = piVar2[0xef];
        }
        piVar2[0xef] = iVar3 + 1;
      }
    }
  }
  iVar7 = 0;
  uVar6 = 1;
  do {
    if (*(unsigned int *)(*(int *)(param_1 + 0x814) + 4) < uVar6) {
      lVar10 = 0;
      lVar8 = 0;
      for (iVar7 = *(int *)(param_1 + 0x88); *(int *)(iVar7 + 8) != 0; iVar7 = *(int *)(iVar7 + 8))
      {
        for (piVar2 = *(int **)(iVar7 + 0x1c); piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
          if (((piVar2[0x39] & 1U) != 0) && (piVar2[0xdf] != *(int *)(param_1 + 0x864))) {
            iVar3 = (**(int (***)())(*piVar2 + 0x30))(piVar2);
            if ((iVar3 != 0) && (*(char *)(param_1 + 0x844) == '\0')) {
              fn_82BBC8E8(param_1 + 0xb8,param_1,piVar2[0x14],piVar2[0xe]);
            }
            (**(int (***)())(*piVar2 + 0x60))(piVar2);
            if (piVar2[6] == 0x89) {
              lVar8 = lVar8 + 1;
            }
            else {
              lVar10 = lVar10 + 1;
            }
          }
        }
      }
      cVar5 = fn_82BA1048(param_1);
      if (cVar5 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0038,0xffffffff820e0950,0x9a);
      }
      if ((int)lVar10 != 0) {
        fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820e0a98,lVar10);
      }
      if ((int)lVar8 != 0) {
        fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820e0a58,lVar8);
      }
      fn_82B7BEB0(uStack_54,uStack_58);
      return;
    }
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x814) + 8) + iVar7);
    if ((*(unsigned int *)(iVar3 + 0xe4) & 1) != 0) {
      *(unsigned int *)(iVar3 + 0x37c) = *(unsigned int *)(param_1 + 0x864);
      iVar9 = *(int *)(param_1 + 0x868);
      if (*(int *)(param_1 + 0x868) < *(int *)(iVar3 + 0x3bc)) {
        iVar9 = *(int *)(iVar3 + 0x3bc);
      }
      *(int *)(iVar3 + 0x3bc) = iVar9 + 1;
      piVar2 = (int *)fn_82BC0088(auStack_60,iStack_5c);
      *piVar2 = iVar3;
      do {
        iVar3 = fn_82BC7368(auStack_60);
        iVar9 = 1;
        if (0 < *(int *)(iVar3 + 0x14)) {
          piVar2 = (int *)(iVar3 + 0xec);
          do {
            iVar11 = *piVar2;
            if (iVar11 != 0) {
              do {
                cVar5 = fn_82BC2E48(iVar11);
                if (cVar5 == '\0') break;
                iVar11 = *(int *)(iVar11 + 0xec);
              } while (iVar11 != 0);
              if (iVar11 != 0) {
                iVar1 = *(int *)(param_1 + 0x868);
                if (*(int *)(param_1 + 0x868) < *(int *)(iVar11 + 0x3bc)) {
                  iVar1 = *(int *)(iVar11 + 0x3bc);
                }
                *(int *)(iVar11 + 0x3bc) = iVar1 + 1;
                if (*(int *)(iVar11 + 0x37c) != *(int *)(param_1 + 0x864)) {
                  *(int *)(iVar11 + 0x37c) = *(int *)(param_1 + 0x864);
                  piVar4 = (int *)fn_82BC0088(auStack_60,iStack_5c);
                  *piVar4 = iVar11;
                }
              }
            }
            iVar9 = iVar9 + 1;
            piVar2 = piVar2 + 1;
          } while (iVar9 <= *(int *)(iVar3 + 0x14));
        }
      } while (iStack_5c != 0);
    }
    uVar6 = uVar6 + 1;
    iVar7 = iVar7 + 4;
  } while( true );
}

