typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_90;
extern int fn_82569E38();
extern int fn_8256A858();
extern int fn_8256AB40();
extern int fn_82F68CC0();


void fn_825EA190(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  unsigned int uVar4;
  unsigned __int64 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  unsigned char uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  unsigned char auStack_90 [144];
  
  uVar11 = *(unsigned int *)((*(int *)(param_1 + 0xc) + 1) * 4 + *(int *)(param_1 + 8));
  uVar12 = *(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 5;
  uVar10 = uVar12 * (uVar11 >> 2);
  if ((uVar12 == 3) || (uVar11 = uVar10 + (uVar11 >> 2), uVar12 != 4)) {
    if (uVar10 < uVar11) {
      iVar14 = uVar10 * 0x18;
      iVar13 = uVar11 - uVar10;
      do {
        piVar15 = (int *)(*(int *)((*(int *)(param_1 + 0xc) + 3) * 4 + *(int *)(param_1 + 8)) +
                         iVar14);
        if ((piVar15[4] != 0) && ((piVar15[2] != 0 || (piVar15[3] != 0)))) {
          piVar1 = *(int **)*piVar15;
          iVar7 = (**(int (***)())(*piVar1 + 0x1c))(piVar1);
          iVar8 = (**(int (***)())(*piVar1 + 0x3c))(piVar1);
          if (iVar7 != 0) {
            iVar2 = *(int *)(*(int *)(iVar7 + 0x10) + 0x50);
            puVar3 = *(unsigned __int64 **)(*piVar15 + 4);
            uVar4 = *(unsigned int *)(**(int **)(*(int *)(iVar7 + 0x10) + 0x48) + 0x1c);
            if (iVar2 != 0) {
              if (*(char *)(*(int *)(iVar7 + 0x10) + 0x5c) == '\0') {
                uVar9 = fn_8256AB40(*(unsigned int *)(*(int *)(iVar7 + 0x10) + 0x48),iVar2);
                *(unsigned char *)(*(int *)(iVar7 + 0x10) + 0x5c) = uVar9;
              }
              if ((*(unsigned int *)(*piVar15 + 0xc) & 1) == 0) {
                fn_82F68CC0(auStack_90,puVar3 + 6,0x10);
                fn_82569E38(iVar2,uVar4,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],
                                  puVar3[5]);
              }
              else {
                puVar5 = *(unsigned __int64 **)(*piVar15 + 8);
                fn_82F68CC0(auStack_90,puVar5 + 6,0x10);
                fn_82569E38(iVar2,uVar4,*puVar5,puVar5[1],puVar5[2],puVar5[3],puVar5[4],
                                  puVar5[5]);
              }
            }
            iVar7 = *(int *)(iVar8 + 0x18);
            iVar8 = *(int *)(iVar8 + 0x1c);
            if ((iVar7 == 0) || (bVar6 = true, iVar8 == 0)) {
              bVar6 = false;
            }
            if (bVar6) {
              if ((*(unsigned int *)(*piVar15 + 0xc) & 1) == 0) {
                fn_82F68CC0(auStack_90,puVar3 + 6,0x10);
                fn_82569E38(iVar7,iVar8,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],
                                  puVar3[5]);
              }
              else {
                puVar3 = *(unsigned __int64 **)(*piVar15 + 8);
                fn_82F68CC0(auStack_90,puVar3 + 6,0x10);
                fn_82569E38(iVar7,iVar8,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],
                                  puVar3[5]);
              }
            }
          }
        }
        iVar13 = iVar13 + -1;
        iVar14 = iVar14 + 0x18;
      } while (iVar13 != 0);
    }
  }
  else {
    fn_8256A858();
  }
  return;
}

