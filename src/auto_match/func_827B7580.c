extern int fn_827B56E0();
extern int fn_827B5FA8();


void fn_827B7580(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar4;
  __int64 lVar5;
  __int64 lVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  int *piVar13;
  
  uVar11 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    puVar12 = (unsigned int *)(param_1 + 0x38);
    do {
      if (puVar12[4] != 0) {
        cVar4 = fn_827B56E0(param_1,param_2,uVar11);
        if (cVar4 != '\0') {
          uVar1 = puVar12[4];
          piVar13 = (int *)(param_1 + 0x2c);
          fn_827B5FA8(piVar13,uVar1,0x20);
          *(unsigned int *)(param_1 + 0x30) = uVar1;
          lVar5 = 0;
          uVar8 = 0;
          if (*(int *)(param_1 + 0x1c) != 0) {
            iVar7 = 0;
            do {
              puVar9 = (unsigned int *)
                       (*(int *)((uVar8 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x28)) +
                       (uVar8 & 0x3f) * 0x1c);
              if ((unsigned __int64)(unsigned int)puVar9[6] == (uVar11 & 0xffffffff)) {
                lVar5 = lVar5 + 1;
                uVar1 = *puVar9;
                puVar10 = (unsigned int *)(iVar7 + *piVar13);
                iVar7 = iVar7 + 0x18;
                puVar10[1] = puVar9[1];
                *puVar10 = uVar1;
                uVar1 = puVar9[4];
                uVar2 = puVar9[3];
                uVar3 = puVar9[5];
                puVar10[2] = puVar9[2];
                puVar10[3] = uVar2;
                puVar10[4] = uVar1;
                puVar10[5] = uVar3;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(unsigned int *)(param_1 + 0x1c));
          }
          lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2b8) + 8;
          if ((unsigned __int64)*(unsigned int *)(param_1 + 0x2b8) == 0) {
            lVar6 = 0;
          }
          (**(int (***)())(*(int *)*puVar12 + 0xc))((int *)*puVar12,0,lVar5,*piVar13,lVar6);
        }
        puVar12[4] = 0;
      }
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 5;
    } while ((uVar11 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 8));
  }
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x2c4) = 0;
  *(unsigned int *)(param_1 + 0x2c8) = 0;
  *(unsigned int *)(param_1 + 0x2cc) = 0;
  return;
}

