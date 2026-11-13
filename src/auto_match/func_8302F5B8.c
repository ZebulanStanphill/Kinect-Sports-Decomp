typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_110;
extern unsigned int *auStack_d4;
extern int memcpy();
extern int fn_82FAB9C0();
extern int fn_82FF5140();
extern int fn_83004208();
extern int fn_8300CAF0();
extern int fn_8301AE78();
extern int fn_8301AEF8();
extern int fn_83031170();
extern int fn_83032B40();
extern int fn_83032D88();
extern int fn_83033910();
extern int fn_830339D8();
extern int fn_83033B60();
extern int fn_83033C00();
extern int fn_83033C70();
extern int fn_83033D28();
extern int fn_83033DC8();
extern unsigned int iStack_124;
extern unsigned int iStack_74;
extern unsigned int iStack_8c;
extern unsigned int iStack_d8;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642EC;
extern unsigned int lbl_83264304;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;


unsigned __int64 fn_8302F5B8(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int *puVar3;
  bool bVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  unsigned __int64 uVar11;
  int *piVar12;
  unsigned int *puVar13;
  unsigned char bVar14;
  int *piVar15;
  int aiStack_130;
  struct { unsigned int first; int second; } stack_pair_128;

  unsigned int uStack_120;
  unsigned int uStack_11c;
  unsigned int uStack_118;
  unsigned char auStack_110 [16];
  int aiStack_100 [4];
  unsigned __int64 uStack_f0;
  unsigned __int64 uStack_e8;
  unsigned __int64 uStack_e0;
  int iStack_d8;
  unsigned char auStack_d4 [72];
  int iStack_8c;
  unsigned char *puStack_78;
  int iStack_74;
  
  iVar2 = *param_2;
  uVar11 = 2;
  uVar7 = fn_8300CAF0(param_1 + 0x2a,param_2[2],param_1[0x2f],param_1[0x2e]);
  if ((*(unsigned char *)((int)param_1 + 0x3e) & 0x40) != 0) {
    iStack_8c = param_2[0x1c];
    iStack_d8 = param_2[2];
    uStack_f0 = *(unsigned __int64 *)(param_2 + 4);
    uStack_e8 = *(unsigned __int64 *)(param_2 + 6);
    uStack_e0 = *(unsigned __int64 *)(param_2 + 8);
    memcpy(auStack_d4,param_2 + 10,0x48);
    iVar8 = fn_83031170(param_1 + 0x41,&uStack_f0);
    if (iVar8 == 0) {
      return 2;
    }
    fn_82FF5140(lbl_83264304,param_2[8]);
    (**(int (***)())(*param_1 + 0x94))(param_1,3);
  }
  fn_83033C00(&aiStack_130,param_2,param_1);
  iVar8 = 0;
  puVar13 = (unsigned int *)param_1[0x31];
  for (puVar3 = puVar13; puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)*puVar3) {
    if (puVar3[1] == uVar7) {
      piVar12 = puVar3 + 2;
      if (piVar12 != (int *)0x0) goto LAB_8302f714;
      break;
    }
  }
  uVar7 = param_1[0x30];
  for (; puVar13 != (unsigned int *)0x0; puVar13 = (unsigned int *)*puVar13) {
    if (puVar13[1] == uVar7) {
      piVar12 = puVar13 + 2;
      if (piVar12 != (int *)0x0) goto LAB_8302f714;
      break;
    }
  }
  goto LAB_8302f9d8;
LAB_8302f714:
  fn_8301AE78(&stack_pair_128.first,lbl_832642EC,param_2[2],param_1[3]);
  for (puVar13 = (unsigned int *)param_1[0x31]; puVar13 != (unsigned int *)0x0;
      puVar13 = (unsigned int *)*puVar13) {
    if (puVar13[1] == stack_pair_128.first) {
      puVar13 = puVar13 + 2;
      goto LAB_8302f758;
    }
  }
  puVar13 = (unsigned int *)0x0;
LAB_8302f758:
  if (stack_pair_128.first == uVar7) {
    stack_pair_128.second = stack_pair_128.second + 1;
  }
  else {
    stack_pair_128.second = 1;
    stack_pair_128.first = uVar7;
  }
  bVar4 = stack_pair_128.second == 1;
  fn_8301AEF8(lbl_832642EC,param_2[2],param_1[3],&stack_pair_128.first);
  piVar15 = (int *)*piVar12;
  if (piVar15 != (int *)piVar12[1]) {
    do {
      memcpy(&uStack_f0,param_2,0x88);
      for (puVar3 = (unsigned int *)param_1[0x39]; puVar3 != (unsigned int *)0x0;
          puVar3 = (unsigned int *)*puVar3) {
        if (puVar3[1] == *piVar15) {
          if (puVar3 + 2 != (unsigned int *)0x0) {
            uStack_120 = puVar3[2];
            uStack_11c = puVar3[3];
            uStack_118 = ((((unsigned __int64)(uStack_118)) & (~(((unsigned __int64)0xFF) << 0))) | ((((unsigned __int64)((unsigned char)((unsigned int)puVar3[4] >> 0x18))) & ((unsigned __int64)0xFF)) << 0));
            uVar6 = puVar3[4];
            bVar14 = (((unsigned __int64)(uStack_118) >> 0) & 0xFF);
            goto code_r0x8302f7f4;
          }
          break;
        }
      }
      uVar6 = uStack_118;
      bVar14 = 0;
code_r0x8302f7f4:
      uStack_118 = uVar6;
      if (((*(unsigned char *)((int)param_1 + 0x3e) & 0x40) == 0) || ((bVar14 & 8) == 0)) {
code_r0x8302f884:
        if ((((bVar4) || ((bVar14 & 0x10) == 0)) && ((iStack_74 == 0 || (iVar8 == 0)))) &&
           (piVar9 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4), piVar9 != (int *)0x0)) {
          if (iVar2 == 1) {
            fn_830339D8(auStack_110,puStack_78);
            if ((piVar12[1] - *piVar12 & 0xfffffffcU) == 4) {
              uVar11 = fn_83033C70(param_1,*(unsigned int *)(puStack_78 + 0x10));
              fn_83004208(aiStack_100,uVar11);
code_r0x8302f97c:
              puStack_78 = auStack_110;
              uVar11 = (**(int (***)())(*piVar9 + 0x18))(piVar9,&uStack_f0);
            }
            else {
              iVar10 = fn_83032B40();
              iVar5 = aiStack_100[0];
              bVar1 = aiStack_100[0] != 0;
              aiStack_100[0] = iVar10;
              if (bVar1) {
                fn_83032D88(iVar5);
              }
              if (aiStack_100[0] == 0) {
                uVar11 = 0x34;
              }
              else {
                uVar11 = fn_83033B60(param_1,auStack_110,&uStack_f0,&aiStack_130);
                if ((int)uVar11 == 1) goto code_r0x8302f97c;
              }
            }
            fn_83033910(auStack_110);
          }
          else {
            uVar11 = (**(int (***)())(*piVar9 + 0x18))(piVar9,&uStack_f0);
          }
          if ((int)uVar11 == 1) {
            iVar8 = iVar8 + 1;
          }
          (**(int (***)())(*piVar9 + 8))(piVar9);
        }
      }
      else {
        bVar1 = false;
        if (puVar13 != (unsigned int *)0x0) {
          for (piVar9 = (int *)*puVar13; piVar9 != (int *)puVar13[1]; piVar9 = piVar9 + 1) {
            if (*piVar9 == *piVar15) {
              bVar1 = true;
              break;
            }
          }
        }
        if (!bVar1) goto code_r0x8302f884;
      }
      piVar15 = piVar15 + 1;
    } while (piVar15 != (int *)piVar12[1]);
  }
LAB_8302f9d8:
  if (iVar2 == 1) {
    if ((iVar8 == 0) && ((*(unsigned char *)((int)param_1 + 0x3e) & 0x40) == 0)) {
      uVar11 = fn_83033DC8(param_1,param_2);
    }
    else {
      if (aiStack_130 == 0) {
        return uVar11;
      }
      uVar11 = fn_83033D28(param_1);
    }
  }
  if (aiStack_130 != 0) {
    fn_83032D88();
  }
  return uVar11;
}

