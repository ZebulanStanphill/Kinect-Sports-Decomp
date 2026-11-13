extern unsigned int *auStack_60;
extern int fn_823E2D30();
extern int fn_8265C9E0();
extern int fn_828223C8();
extern int fn_82824378();
extern int fn_82826498();
extern int fn_828294C8();
extern int fn_82832F30();
extern int fn_82833628();
extern unsigned int iStack_50;
extern unsigned int iStack_5c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82832C80(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  char cVar4;
  int *piVar3;
  int iVar5;
  unsigned int *puVar6;
  int *piVar7;
  __int64 lVar8;
  int iVar9;
  int iVar10;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned int *apuStack_58 [2];
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  
  iVar5 = param_1 + 0x2fc;
  while (fn_828223C8(iVar5,&iStack_5c), iStack_5c != 0) {
    puVar6 = (unsigned int *)(iStack_5c + 0x48);
    iVar9 = ((*(int **)(iStack_5c + 0x48))[1] - **(int **)(iStack_5c + 0x48)) / 0x14;
    lVar8 = (__int64)iVar9;
    iVar5 = iStack_5c;
    if ((iVar9 != 0) && (*(char *)(iStack_5c + 0x54) != '\0')) {
      piVar7 = (int *)(iStack_5c + 0x50);
      if (*(int *)(iStack_5c + 0x50) != 0) {
        fn_828294C8(*(int *)(iStack_5c + 0x50),1);
      }
      lVar2 = fn_8265C9E0(0x10);
      if (lVar2 == 0) {
        iVar5 = 0;
      }
      else {
        fn_82832F30(lVar2,auStack_60,auStack_60);
        iVar5 = (int)lVar2;
      }
      *piVar7 = iVar5;
      if (iVar9 != 0) {
        iVar5 = 0;
        do {
          iVar9 = *(int *)*puVar6 + iVar5;
          iVar10 = *(int *)(iVar9 + 4) * 0x20 + **(int **)(param_1 + 0x388);
          cVar4 = fn_82824378(iVar10);
          if (((cVar4 == '\0') || (uVar1 = *(unsigned int *)(iVar10 + 0x1c), uVar1 == 0)) ||
             (*(int *)(iVar10 + 0x18) != 0)) {
            fn_82826498(param_1,iVar10,*(unsigned int *)(iVar9 + 8),0xffffffff828328b0,iVar9);
          }
          else if (1 < uVar1) {
            stack_pair_50.first = (*(unsigned int *)(iVar10 + 0x10) / uVar1) * *(int *)(iVar9 + 0xc);
            stack_pair_50.second = uVar1;
            uStack_48 = uVar1;
            piVar3 = (int *)fn_82833628(*piVar7,&stack_pair_50.first);
            *piVar3 = *piVar3 + 1;
          }
          lVar8 = lVar8 + -1;
          iVar5 = iVar5 + 0x14;
        } while (lVar8 != 0);
      }
      *(int *)(param_1 + 0x3c) = *(int *)(*piVar7 + 8) + *(int *)(param_1 + 0x3c);
      puVar6 = *(unsigned int **)(*piVar7 + 4);
      apuStack_58[0] = (unsigned int *)*puVar6;
      while (iVar5 = iStack_5c, apuStack_58[0] != puVar6) {
        *(int *)(param_1 + 0x40) = apuStack_58[0][6] + *(int *)(param_1 + 0x40);
        fn_823E2D30(apuStack_58);
      }
    }
  }
  return;
}

