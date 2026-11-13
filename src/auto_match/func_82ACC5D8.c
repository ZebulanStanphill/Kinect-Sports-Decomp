typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE190();
extern int fn_82AC8750();
extern int fn_82AC88B8();
extern int fn_82AC8C90();
extern int fn_82ACA698();
extern int fn_82ACA7C0();
extern int fn_82ACA998();
extern int fn_82ACACA8();
extern int fn_82ACB0F8();
extern int fn_82ACB390();
extern int fn_82ACBBF8();
extern int fn_82ACBDA8();
extern int fn_82ACC490();
extern int fn_82ACC4F0();


void fn_82ACC5D8(int param_1,int *param_2,unsigned char param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  bool bVar5;
  char cVar9;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned __int64 uVar16;
  
  puVar1 = (unsigned int *)*param_2;
  param_3 = -(*(char *)(param_1 + 0x48) == '\0') & param_3;
  do {
    if (puVar1 == (unsigned int *)0x0) {
      for (puVar1 = (unsigned int *)param_2[1]; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
        if (puVar1[4] != 0) {
          if (((*puVar1 & 0x40000000) != 0) || (bVar5 = false, (*puVar1 & 0xe000000) != 0)) {
            bVar5 = true;
          }
          if (bVar5) {
            fn_82AC8C90(param_1 + 4,puVar1,puVar1[4],param_2);
          }
        }
      }
      fn_82ACA698(param_1 + 4,param_2,0);
      if (param_3 != 0) {
        if (((unsigned int)param_2[5] >> 0xd & 0xf) != 0) {
          uVar4 = *(unsigned int *)(param_1 + 0x38);
          uVar10 = (unsigned int)param_2[5] >> 0xd & 0xfff;
          fn_82ACBBF8(uVar4,uVar10);
          fn_82ACB390(uVar4,uVar10,param_2);
        }
        if (((unsigned int)param_2[2] >> 0x17 & 1) != 0) {
          puVar12 = (unsigned int *)0x0;
          uVar10 = 0;
          for (puVar1 = (unsigned int *)param_2[1]; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
            if (puVar1[4] != 0) {
              uVar11 = *puVar1 >> 0x19 & 7;
              if (uVar11 != 0) {
                uVar8 = 0;
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar7 = 0;
                  do {
                    uVar6 = uVar6 + 1;
                    uVar8 = 1 << ((*puVar1 >> 5 & 0xff) >> (uVar7 & 0x3f) & 3) | uVar8;
                    uVar7 = uVar7 + 2;
                  } while (uVar6 < uVar11);
                }
                uVar10 = uVar8 | uVar10;
                puVar12 = puVar1;
              }
            }
          }
          if (uVar10 != 0) {
            uVar4 = *(unsigned int *)(param_1 + 0x38);
            uVar10 = *puVar12 >> 0xd & 0xff0 | uVar10 & 0xf;
            fn_82ACC490(uVar4,uVar10);
            fn_82ACB390(uVar4,uVar10,param_2);
          }
        }
      }
      uVar10 = *(unsigned int *)(((unsigned int)param_2 & 0xfffffffe) + 0x28);
      if (((uVar10 & 1) == 0) && (uVar10 != 0)) {
        fn_82AC88B8(param_1 + 4);
      }
      else {
        *(unsigned int *)(param_1 + 0x2c) = 0;
        *(unsigned int *)(param_1 + 0x34) = 0;
      }
      return;
    }
    if (((*puVar1 & 0x40000000) != 0) || (bVar5 = false, (*puVar1 & 0xe000000) != 0)) {
      bVar5 = true;
    }
    if (bVar5) {
      uVar10 = puVar1[3];
      iVar2 = param_2[7];
      if (*(int *)(uVar10 + 0x1c) == iVar2) {
        uVar11 = 0;
        if (((*(unsigned int *)(uVar10 + 8) >> 0x17 & 1) != 0) &&
           (cVar9 = fn_82ABE190(puVar1), cVar9 != '\0')) {
          uVar6 = fn_82AC8750(puVar1);
          uVar7 = fn_82ACA998(*(unsigned int *)(param_1 + 0x30),iVar2,uVar10);
          uVar11 = (unsigned int)param_2[5] >> 0xd;
          uVar8 = 0;
          if ((uVar11 & 0xf) == 0) {
            uVar11 = param_2[2];
            if ((uVar11 >> 0x17 & 1) != 0) {
              for (puVar12 = (unsigned int *)param_2[1]; puVar12 != (unsigned int *)0x0;
                  puVar12 = (unsigned int *)puVar12[2]) {
                if ((puVar12[4] != 0) && (cVar9 = fn_82ABE190(puVar12), cVar9 != '\0')) {
                  if (((*puVar1 ^ *puVar12) & 0x1fe0000) == 0) {
                    uVar8 = uVar11 >> 1 & 0xf;
                  }
                  break;
                }
              }
            }
          }
          else if (((*puVar1 >> 0xd & 0xff0 ^ uVar11 & 0xfff) & 0xfffffff0) == 0) {
            uVar8 = uVar11 & 0xf;
          }
          uVar11 = uVar6 & 0xf & ~(uVar7 & ~uVar8);
        }
        puVar15 = (unsigned int *)0x0;
        puVar13 = (unsigned int *)0x0;
        for (puVar12 = *(unsigned int **)(uVar10 + 4); puVar12 != (unsigned int *)0x0; puVar12 = (unsigned int *)puVar12[2])
        {
          piVar3 = (int *)puVar12[4];
          puVar14 = puVar13;
          if (piVar3 != (int *)0x0) {
            if (((*puVar12 & 0x40000000) != 0) || (bVar5 = false, (*puVar12 & 0xe000000) != 0)) {
              bVar5 = true;
            }
            if ((((bVar5) && (piVar3 != param_2)) && (piVar3[7] == param_2[7])) &&
               ((piVar3[2] & 0x3f80U) != 0x3800)) {
              if (((unsigned int)piVar3[2] >> 0x1a & 1) == 0) {
                if ((((unsigned int)param_2[2] >> 0x1a & 1) == 0) &&
                   (cVar9 = fn_82ACB0F8(param_2), cVar9 != '\0')) {
LAB_82acc7b8:
                  if (((*puVar12 & 0x40000000) == 0) || (bVar5 = true, (*puVar12 & 0xe000000) != 0))
                  {
                    bVar5 = false;
                  }
                  puVar14 = puVar12;
                  if (((!bVar5) && (cVar9 = fn_82ABE190(puVar12), puVar14 = puVar13, cVar9 != '\0')
                      ) && (puVar15 = puVar12, (*(unsigned int *)(uVar10 + 8) >> 0x17 & 1) != 0)) {
                    uVar8 = fn_82AC8750(puVar12);
                    uVar11 = uVar11 & ~(uVar8 & 0xf);
                  }
                }
              }
              else if (((unsigned int)piVar3[4] >> 0x19 & 1) != 0) goto LAB_82acc7b8;
            }
          }
          puVar13 = puVar14;
        }
        cVar9 = fn_82ABE190(puVar1);
        if (cVar9 != '\0') {
          uVar8 = *(unsigned int *)(uVar10 + 0x14) >> 0xd;
          if (((uVar8 & 0xf) != 0) && (puVar15 == (unsigned int *)0x0)) {
            if (param_3 == 0) {
              uVar4 = *(unsigned int *)(param_1 + 0x38);
              fn_82ACC4F0(uVar4,uVar8 & 0xfff);
              fn_82ACB390(uVar4,uVar8 & 0xfff,0);
            }
            else {
              fn_82ACBDA8(*(unsigned int *)(param_1 + 0x38),uVar8 & 0xfff);
            }
            fn_82ACA7C0(*(unsigned int *)(param_1 + 0x30),uVar10);
          }
          if (((*(unsigned int *)(uVar10 + 8) >> 0x17 & 1) != 0) && (uVar11 != 0)) {
            uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
            uVar6 = *puVar1 >> 0x11 & 0xff;
            iVar2 = uVar6 * 4;
            uVar8 = fn_82ACACA8(uVar16 + 4,iVar2,iVar2 + 3);
            if ((uVar8 & uVar11) != 0) {
              if (param_3 == 0) {
                fn_82ACC4F0(uVar16);
                fn_82ACB390(uVar16,uVar6 << 4 | uVar8 & uVar11,0);
              }
              else {
                fn_82ACBDA8();
              }
            }
          }
        }
        if (puVar13 == (unsigned int *)0x0) {
          uVar11 = 0;
          puVar12 = (unsigned int *)(param_1 + 8);
          do {
            if (uVar10 == *puVar12) {
              *puVar12 = 0;
            }
            uVar11 = uVar11 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar11 < 9);
        }
      }
    }
    puVar1 = (unsigned int *)puVar1[1];
  } while( true );
}

