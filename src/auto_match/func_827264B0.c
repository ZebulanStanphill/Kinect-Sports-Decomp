#define true 1
extern int fn_8268AF70();
extern int fn_827246F8();
extern int fn_82724770();


void fn_827264B0(int *param_1,unsigned int *param_2)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int *puVar11;
  
  if (*param_1 != 0) {
    uVar4 = fn_8268AF70(((unsigned __int64)*param_2 & 0xfffffffc) + 8,
                         *(unsigned int *)(*param_2 & 0xfffffffc) & 0x7fffffff,0x1505);
    iVar10 = *param_1;
    uVar4 = *(unsigned int *)(iVar10 + 4) & uVar4;
    iVar7 = uVar4 * 0x10 + iVar10;
    if ((*(int *)(iVar7 + 8) != -2) && (*(unsigned int *)(iVar7 + 0xc) == uVar4)) {
      uVar5 = 0xffffffff;
      uVar9 = uVar4;
      do {
        puVar11 = (unsigned int *)(iVar7 + 8);
        if (*(unsigned int *)(iVar7 + 0xc) == uVar4) {
          pcVar6 = (char *)((*param_2 & 0xfffffffc) + 8);
          pcVar8 = (char *)((*(unsigned int *)(iVar7 + 0x10) & 0xfffffffc) + 8);
          do {
            cVar1 = *pcVar8;
            cVar2 = *pcVar6;
            if (cVar1 == '\0') break;
            pcVar8 = pcVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            if (uVar4 == uVar9) {
              if (*puVar11 != 0xffffffff) {
                iVar10 = *puVar11 * 0x10 + iVar10;
                fn_827246F8(iVar7 + 0x10);
                *puVar11 = 0xfffffffe;
                *puVar11 = *(unsigned int *)(iVar10 + 8);
                *(unsigned int *)(iVar7 + 0xc) = *(unsigned int *)(iVar10 + 0xc);
                fn_82724770(iVar7 + 0x10,iVar10 + 0x10);
                puVar11 = (unsigned int *)(iVar10 + 8);
              }
            }
            else {
              *(unsigned int *)(uVar5 * 0x10 + iVar10 + 8) = *puVar11;
            }
            fn_827246F8(puVar11 + 2);
            *puVar11 = 0xfffffffe;
            *(int *)*param_1 = *(int *)*param_1 + -1;
            return;
          }
        }
        uVar3 = *puVar11;
        if (uVar3 == 0xffffffff) {
          return;
        }
        iVar7 = uVar3 * 0x10 + iVar10;
        uVar5 = uVar9;
        uVar9 = uVar3;
      } while( true );
    }
  }
  return;
}

