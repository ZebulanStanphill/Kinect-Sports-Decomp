typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82F63CA0();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_822C1A38(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  char cVar6;
  unsigned int *puVar5;
  __int64 lVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  char in_RESERVE;
  unsigned char bVar10;
  
  iVar1 = param_1[1];
  iVar2 = *param_1;
  if (iVar1 != 0) {
    cVar6 = fn_8223AAC0(iVar1);
    bVar10 = (cVar6 == '\0') << 1;
    if (cVar6 != '\0') {
      if (iVar2 != 0) {
        for (puVar5 = *(unsigned int **)(iVar2 + 8);
            (puVar5 != *(unsigned int **)(iVar2 + 0xc) && ((int *)*puVar5 != param_1));
            puVar5 = puVar5 + 1) {
        }
        if (puVar5 != *(unsigned int **)(iVar2 + 0xc)) {
          fn_82F63CA0(puVar5,puVar5 + 1,(*(int *)(iVar2 + 0xc) - (int)(puVar5 + 1) >> 2) << 2);
          *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -4;
        }
        piVar3 = (int *)param_1[1];
        if (ZEXT48(piVar3) != 0) {
          lVar7 = ZEXT48(piVar3) + 8;
          do {
            puVar8 = (unsigned int *)lVar7;
            lVar9 = (unsigned __int64)*puVar8 - 1;
            if (in_RESERVE != '\0') {
              uVar4 = storeWordConditionalIndexed(lVar9,0,lVar7);
              *puVar8 = uVar4;
              bVar10 = 2;
            }
          } while (!(bool)(bVar10 >> 1 & 1));
          if ((int)lVar9 == 0) {
            (**(int (***)())(*piVar3 + 4))();
          }
        }
        param_1[1] = 0;
        *param_1 = 0;
      }
      fn_822315A0(iVar1);
    }
  }
  return;
}

