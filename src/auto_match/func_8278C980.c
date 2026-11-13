#define true 1
extern unsigned int *auStack_50;
extern int fn_8267C4F0();
extern int fn_826DAA10();
extern int fn_8278B4F8();
extern int fn_8278BA98();


void fn_8278C980(unsigned int *param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned char auStack_50 [80];
  
  piVar1 = (int *)*param_1;
  iVar7 = param_1[1] * 0xc + *piVar1;
  uVar3 = fn_8278BA98(auStack_50,*(unsigned int *)(iVar7 + 0x10));
  uVar3 = *(unsigned int *)(*piVar1 + 4) & uVar3;
  iVar5 = uVar3 * 0xc + *piVar1;
  if ((*(int *)(iVar5 + 8) != -2) && (*(unsigned int *)(iVar5 + 0xc) == uVar3)) {
    uVar2 = uVar3;
    uVar6 = 0xffffffff;
    while( true ) {
      uVar8 = uVar2;
      puVar9 = (unsigned int *)(iVar5 + 8);
      if (*(unsigned int *)(iVar5 + 0xc) == uVar3) {
        cVar4 = fn_8278B4F8(*(unsigned int *)(iVar5 + 0x10),*(unsigned int *)(iVar7 + 0x10));
        if (cVar4 != '\0') {
          if (uVar8 != param_1[1]) {
            return;
          }
          if (uVar3 == uVar8) {
            if (*puVar9 != 0xffffffff) {
              iVar7 = *puVar9 * 0xc + *piVar1;
              if (*(int *)(iVar5 + 0x10) != 0) {
                fn_8267C4F0();
              }
              *puVar9 = 0xfffffffe;
              *puVar9 = *(unsigned int *)(iVar7 + 8);
              *(unsigned int *)(iVar5 + 0xc) = *(unsigned int *)(iVar7 + 0xc);
              fn_826DAA10((int *)(iVar5 + 0x10),iVar7 + 0x10);
              param_1[1] = param_1[1] + -1;
              puVar9 = (unsigned int *)(iVar7 + 8);
            }
          }
          else {
            *(unsigned int *)(uVar6 * 0xc + *piVar1 + 8) = *puVar9;
          }
          if (puVar9[2] != 0) {
            fn_8267C4F0();
          }
          *puVar9 = 0xfffffffe;
          *(int *)*piVar1 = *(int *)*piVar1 + -1;
          return;
        }
      }
      uVar2 = *puVar9;
      if (uVar2 == 0xffffffff) break;
      iVar5 = uVar2 * 0xc + *piVar1;
      uVar6 = uVar8;
    }
    return;
  }
  return;
}

