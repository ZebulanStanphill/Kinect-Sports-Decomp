extern int fn_82FAE0B0();
extern int fn_82FB1410();


__int64 fn_82FACB48(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int uVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  
  lVar8 = 0;
  uVar1 = (**(int (***)())(**(int **)(param_1 + 0x60) + 0x158))();
  if ((uVar1 & 0xffff) != 0) {
    uVar7 = 0;
    do {
      iVar2 = fn_82FAE0B0(*(unsigned int *)(param_1 + 0x60),uVar7);
      puVar9 = *(unsigned int **)(iVar2 + 0x98);
      if (puVar9 != *(unsigned int **)(iVar2 + 0x9c)) {
        do {
          if ((*puVar9 == (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x6c) + uVar7 * 2)) &&
             (iVar3 = fn_82FB1410(iVar2,puVar9[1]), iVar3 != 0)) {
            uVar5 = 0;
            uVar4 = (unsigned __int64)puVar9[2] - param_2;
            if (((*(unsigned int *)(iVar3 + 0x14) & 0x3e000000) == 0x2000000) &&
               (((*(unsigned int *)(iVar3 + 0x14) >> 0x1e & 1) == 0 || ((int)uVar4 < 0)))) {
              uVar5 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x28);
            }
            if (*(short *)(iVar3 + 0x1c) == 3) {
              uVar5 = uVar5 + 0x180;
            }
            lVar6 = uVar5 - (((uVar4 & 0xffffffff) >> 0x1f) - 1 & uVar4);
            if ((int)lVar8 < (int)lVar6) {
              lVar8 = lVar6;
            }
          }
          puVar9 = puVar9 + 6;
        } while (puVar9 != *(unsigned int **)(iVar2 + 0x9c));
      }
      uVar7 = uVar7 + 1 & 0xffff;
    } while (uVar7 < (uVar1 & 0xffff));
  }
  return lVar8;
}

