extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern int fn_82230040();
extern int fn_82272D90();
extern int fn_82273600();
extern int fn_822B4300();
extern int fn_823E1618();
extern int fn_8255C820();
extern int fn_8259BDA8();
extern int fn_8265C9E0();
extern unsigned int iStack_7c;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_64;


void fn_822B39D0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  char cVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int **ppuVar9;
  unsigned int *puVar10;
  int iVar11;
  unsigned int *puVar12;
  unsigned int *puStack_80;
  int iStack_7c;
  unsigned int *puStack_78;
  unsigned int *puStack_74;
  unsigned char auStack_70 [4];
  unsigned char auStack_6c [4];
  unsigned char **ppuStack_68;
  unsigned int uStack_64;
  unsigned char auStack_60 [96];
  
  iStack_7c = **(int **)(param_1 + 4);
  if ((int *)iStack_7c != *(int **)(param_1 + 4)) {
    do {
      iVar3 = iStack_7c;
      puVar12 = *(unsigned int **)(param_1 + 0x10);
      if (puVar12 != *(unsigned int **)(param_1 + 0x14)) {
        iVar11 = iStack_7c + 0x40;
        do {
          uVar1 = *puVar12;
          uVar7 = *(unsigned int *)(*(int *)(param_1 + 0x20) + 4);
          uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x20) + 8);
          if (uVar7 < uVar2) {
            do {
              if ((unsigned int)*(unsigned short *)(uVar7 + 8) == (*(unsigned int *)(uVar1 + 0x24) & 0xffff))
              goto LAB_822b3a4c;
              uVar7 = uVar7 + 0x50;
            } while (uVar7 < uVar2);
          }
          uVar7 = 0;
LAB_822b3a4c:
          iVar4 = fn_8255C820(iVar11,uVar7);
          puVar5 = *(unsigned int **)(iVar3 + 0x34);
          puVar8 = (unsigned int *)puVar5[1];
          cVar6 = *(char *)((int)puVar8 + 0x11);
          puStack_80 = puVar5;
          if (iVar4 == 0) {
            while (cVar6 == '\0') {
              if ((unsigned int)puVar8[3] < uVar1) {
                puVar10 = (unsigned int *)puVar8[2];
              }
              else {
                puVar10 = (unsigned int *)*puVar8;
                puStack_80 = puVar8;
              }
              puVar8 = puVar10;
              cVar6 = *(char *)((int)puVar10 + 0x11);
            }
            if ((puStack_80 == *(unsigned int **)(iVar3 + 0x34)) || (uVar1 < (unsigned int)puStack_80[3])) {
              ppuVar9 = &puStack_74;
              puStack_74 = *(unsigned int **)(iVar3 + 0x34);
            }
            else {
              ppuVar9 = &puStack_80;
            }
            if (*ppuVar9 != puVar5) {
              puVar5 = *(unsigned int **)(iVar3 + 0x24);
              puStack_80 = (unsigned int *)*puVar5;
              while (puStack_80 != puVar5) {
                (*(int (**)())**(unsigned int **)puStack_80[3])
                          ((unsigned int *)puStack_80[3],*(unsigned int *)(iVar3 + 0x10),uVar1);
                fn_822B4300(auStack_70,&puStack_80);
                puVar5 = *(unsigned int **)(iVar3 + 0x24);
              }
              puVar5 = *(unsigned int **)(iVar3 + 0x34);
              puVar8 = puVar5;
              puVar10 = (unsigned int *)puVar5[1];
              while (*(char *)((int)puVar10 + 0x11) == '\0') {
                if ((unsigned int)puVar10[3] < uVar1) {
                  puVar10 = (unsigned int *)puVar10[2];
                }
                else {
                  if ((*(char *)((int)puVar5 + 0x11) != '\0') && (uVar1 < (unsigned int)puVar10[3])) {
                    puVar5 = puVar10;
                  }
                  puVar8 = puVar10;
                  puVar10 = (unsigned int *)*puVar10;
                }
              }
              if (*(char *)((int)puVar5 + 0x11) == '\0') {
                puVar10 = (unsigned int *)*puVar5;
              }
              else {
                puVar10 = *(unsigned int **)(*(int *)(iVar3 + 0x34) + 4);
              }
              while (puStack_80 = puVar8, *(char *)((int)puVar10 + 0x11) == '\0') {
                if (uVar1 < (unsigned int)puVar10[3]) {
                  puVar5 = puVar10;
                  puVar10 = (unsigned int *)*puVar10;
                }
                else {
                  puVar10 = (unsigned int *)puVar10[2];
                }
              }
              while (puStack_80 != puVar5) {
                fn_8259BDA8(&puStack_80);
              }
              fn_82272D90(auStack_6c,iVar3 + 0x30,puVar8,puVar5);
            }
          }
          else {
            while (cVar6 == '\0') {
              if ((unsigned int)puVar8[3] < uVar1) {
                puVar10 = (unsigned int *)puVar8[2];
              }
              else {
                puVar10 = (unsigned int *)*puVar8;
                puStack_80 = puVar8;
              }
              puVar8 = puVar10;
              cVar6 = *(char *)((int)puVar10 + 0x11);
            }
            if ((puStack_80 == *(unsigned int **)(iVar3 + 0x34)) || (uVar1 < (unsigned int)puStack_80[3])) {
              ppuVar9 = &puStack_78;
              puStack_78 = *(unsigned int **)(iVar3 + 0x34);
            }
            else {
              ppuVar9 = &puStack_80;
            }
            if (*ppuVar9 == puVar5) {
              puVar5 = *(unsigned int **)(iVar3 + 0x24);
              puStack_80 = (unsigned int *)*puVar5;
              while (puStack_80 != puVar5) {
                (**(int (***)())(*(int *)puStack_80[3] + 4))
                          ((int *)puStack_80[3],*(unsigned int *)(iVar3 + 0x10),uVar1);
                fn_822B4300(auStack_70,&puStack_80);
                puVar5 = *(unsigned int **)(iVar3 + 0x24);
              }
              puVar5 = (unsigned int *)fn_8265C9E0(0x14);
              if (puVar5 == (unsigned int *)0x0) {
                uStack_64 = 0;
                ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
                fn_82230040(&ppuStack_68);
              }
              *puVar5 = *(unsigned int *)(iVar3 + 0x34);
              puVar5[1] = *(unsigned int *)(iVar3 + 0x34);
              puVar5[2] = *(unsigned int *)(iVar3 + 0x34);
              *(unsigned char *)(puVar5 + 4) = 0;
              *(unsigned char *)((int)puVar5 + 0x11) = 0;
              if (puVar5 + 3 != (unsigned int *)0x0) {
                puVar5[3] = uVar1;
              }
              fn_82273600(auStack_60,iVar3 + 0x30);
            }
          }
          puVar12 = puVar12 + 1;
        } while (puVar12 != *(unsigned int **)(param_1 + 0x14));
      }
      fn_823E1618(&iStack_7c);
    } while (iStack_7c != *(int *)(param_1 + 4));
  }
  return;
}

