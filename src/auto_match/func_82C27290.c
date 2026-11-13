#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82C1E938();
extern int fn_82C1EAB8();
extern int fn_82C1EE20();
extern int fn_82C221D8();
extern int fn_82C23C10();
extern int fn_82C24020();
extern int fn_82C24BE8();
extern int fn_82C25288();
extern unsigned int lbl_820ED0B8;
extern unsigned int lbl_820ED0C8;
extern unsigned int lbl_820F8F08;
extern unsigned int lbl_820F8F18;
extern unsigned int lbl_820F8F28;
extern unsigned int lbl_820F8F38;
extern unsigned int lbl_820F8F48;
extern unsigned int lbl_82154BA8;
extern unsigned int lbl_82154BB8;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


unsigned __int64 fn_82C27290(int param_1,__int64 param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  short asStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned char abStack_60 [96];
  
  piVar3 = *(int **)(param_1 + 0x1c);
  uVar9 = param_2 - 0x18;
  uStack_74 = 0;
  uStack_78 = 0;
  stack_pair_70.first = 0;
  uVar5 = (**(int (***)())(*piVar3 + 0xc))(*piVar3,uVar9);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  if ((*(short *)(piVar3[1] + 0x42) < 1) && (uStack_7c = 0x12, 0x11 < (uVar9 & 0xffffffff))) {
    uVar5 = fn_82C1EE20(param_1,abStack_60,&uStack_74,&uStack_78,&uStack_7c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_82C1E938(param_1,&asStack_80,&uStack_74,&uStack_78,&uStack_7c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    pbVar8 = abStack_60;
    pbVar7 = (unsigned char *)&lbl_82154BA8;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar8;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar7 != (unsigned char *)&lbl_82154BB8);
    if ((((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) && (asStack_80 == 6)) &&
       (uStack_7c = 4, 0x15 < (uVar9 & 0xffffffff))) {
      uVar10 = 0x16;
      uVar5 = fn_82C1EAB8(param_1,&stack_pair_70.first,&uStack_74,&uStack_78,&uStack_7c);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      if ((0x17 < stack_pair_70.first) && (0x16 < (uVar9 & 0xffffffff))) {
        do {
          uVar5 = fn_82C24BE8(param_1,abStack_60,&stack_pair_70.first);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          pbVar7 = abStack_60;
          pbVar8 = &lbl_820ED0B8;
          do {
            bVar1 = *pbVar8;
            bVar2 = *pbVar7;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (pbVar8 != &lbl_820ED0C8);
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
            uVar10 = stack_pair_70.second + uVar10;
            if ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff)) {
              return 0xffffffff8050000c;
            }
            uVar5 = fn_82C221D8(param_1);
            iVar6 = (int)uVar5;
joined_r0x82c27584:
            if (iVar6 < 0) {
              return uVar5;
            }
          }
          else {
            pbVar7 = abStack_60;
            pbVar8 = &lbl_820F8F08;
            do {
              bVar1 = *pbVar8;
              bVar2 = *pbVar7;
              if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (pbVar8 != &lbl_820F8F18);
            if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
              uVar10 = stack_pair_70.second + uVar10;
              if ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff)) {
                return 0xffffffff8050000c;
              }
              uVar5 = fn_82C25288(param_1);
              iVar6 = (int)uVar5;
              goto joined_r0x82c27584;
            }
            pbVar7 = abStack_60;
            pbVar8 = &lbl_820F8F28;
            do {
              bVar1 = *pbVar8;
              bVar2 = *pbVar7;
              if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (pbVar8 != &lbl_820F8F38);
            if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
              uVar10 = stack_pair_70.second + uVar10;
              if ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff)) {
                return 0xffffffff8050000c;
              }
              uVar5 = fn_82C23C10(param_1);
              iVar6 = (int)uVar5;
              goto joined_r0x82c27584;
            }
            pbVar7 = abStack_60;
            pbVar8 = &lbl_820F8F38;
            do {
              bVar1 = *pbVar8;
              bVar2 = *pbVar7;
              if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (pbVar8 != &lbl_820F8F48);
            if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
              uVar10 = stack_pair_70.second + uVar10;
              if ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff)) {
                return 0xffffffff8050000c;
              }
              uVar5 = fn_82C24020(param_1);
              iVar6 = (int)uVar5;
              goto joined_r0x82c27584;
            }
            lVar4 = CONCAT44(stack_pair_70.first,stack_pair_70.second);
            uStack_7c = stack_pair_70.second;
            uVar10 = stack_pair_70.second + uVar10;
            uVar5 = (**(int (***)())(*piVar3 + 0x14))(*piVar3,(unsigned __int64)stack_pair_70.second - 0x18);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            *(__int64 *)(piVar3 + 2) = *(__int64 *)(piVar3 + 2) + lVar4 + -0x18;
          }
        } while ((uVar10 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
      *(short *)(piVar3[1] + 0x42) = *(short *)(piVar3[1] + 0x42) + 1;
      uVar10 = (uVar9 - uStack_78) - uVar10;
      if (uVar10 == 0) {
        return uVar5;
      }
      uVar5 = (**(int (***)())(*piVar3 + 0x14))(*piVar3,uVar10);
      if (-1 < (int)uVar5) {
        *(unsigned __int64 *)(piVar3 + 2) = (uVar10 & 0xffffffff) + *(__int64 *)(piVar3 + 2);
        return uVar5;
      }
      return uVar5;
    }
  }
  return 0xffffffff8050000c;
}

