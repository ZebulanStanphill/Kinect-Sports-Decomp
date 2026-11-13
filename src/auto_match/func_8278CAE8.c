#define true 1
extern unsigned int *auStack_60;
extern int fn_8267C498();
extern int fn_8278B6F0();
extern int fn_8278BDD0();


void fn_8278CAE8(unsigned int *param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  char cVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  unsigned char auStack_60 [96];
  
  piVar1 = (int *)*param_1;
  uVar2 = param_1[1];
  iVar3 = *piVar1;
  uVar4 = *(unsigned int *)(uVar2 * 0xc + iVar3 + 0x10);
  uVar7 = fn_8278BDD0(auStack_60,uVar4);
  uVar7 = uVar7 & *(unsigned int *)(iVar3 + 4);
  iVar9 = uVar7 * 0xc + iVar3;
  if ((*(int *)(iVar9 + 8) != -2) && (*(unsigned int *)(iVar9 + 0xc) == uVar7)) {
    uVar5 = uVar7;
    uVar10 = 0xffffffff;
    while( true ) {
      uVar11 = uVar5;
      puVar12 = (unsigned int *)(iVar9 + 8);
      if (*(unsigned int *)(iVar9 + 0xc) == uVar7) {
        cVar8 = fn_8278B6F0(*(unsigned int *)(iVar9 + 0x10),uVar4);
        if (cVar8 != '\0') {
          if (uVar11 != uVar2) {
            return;
          }
          if (uVar7 == uVar11) {
            if (*puVar12 != 0xffffffff) {
              iVar3 = *puVar12 * 0xc + iVar3;
              if (*(int *)(iVar9 + 0x10) != 0) {
                fn_8267C498();
              }
              *puVar12 = 0xfffffffe;
              *puVar12 = *(unsigned int *)(iVar3 + 8);
              *(unsigned int *)(iVar9 + 0xc) = *(unsigned int *)(iVar3 + 0xc);
              iVar6 = *(int *)(iVar3 + 0x10);
              if (iVar6 != 0) {
                *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
              }
              *(int *)(iVar9 + 0x10) = *(int *)(iVar3 + 0x10);
              param_1[1] = param_1[1] + -1;
              puVar12 = (unsigned int *)(iVar3 + 8);
            }
          }
          else {
            *(unsigned int *)(uVar10 * 0xc + iVar3 + 8) = *puVar12;
          }
          if (puVar12[2] != 0) {
            fn_8267C498();
          }
          *puVar12 = 0xfffffffe;
          piVar1 = (int *)*piVar1;
          *piVar1 = *piVar1 + -1;
          return;
        }
      }
      uVar5 = *puVar12;
      if (uVar5 == 0xffffffff) break;
      iVar9 = uVar5 * 0xc + iVar3;
      uVar10 = uVar11;
    }
    return;
  }
  return;
}

