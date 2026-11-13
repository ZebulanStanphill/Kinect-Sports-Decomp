typedef unsigned char bool;
#define true 1
#define false 0
extern int d3dx_jround_up();
extern int fn_829BE9D0();
extern int fn_829BE9E8();
extern int fn_829BEB20();
extern int fn_829BEB28();
extern int fn_829BEB38();
extern int fn_829BEC10();
extern int fn_829BEC78();
extern int fn_829BEF68();
extern int fn_829BEF70();


void fn_829BEF78(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  unsigned int *puVar9;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  int iVar16;
  int *piVar17;
  unsigned int *puVar18;
  
  puVar9 = (unsigned int *)(**(int (***)())param_1[1])(param_1,1,0xa0);
  param_1[0x72] = (int)puVar9;
  iVar16 = 0;
  puVar9[2] = 0;
  *puVar9 = fn_829BE9D0;
  puVar9[1] = fn_829BE9E8;
  if (param_1[0x4c] != 0) {
    *(unsigned int *)(*param_1 + 0x14) = 0x19;
    (**(int (***)())*param_1)(param_1);
  }
  if ((param_1[0x13] == 0) || (bVar7 = true, param_1[0x50] < 2)) {
    bVar7 = false;
  }
  if (0 < param_1[9]) {
    piVar17 = (int *)(param_1[0x37] + 0x24);
    puVar18 = puVar9 + 0xd;
    do {
      uVar13 = piVar17[-7] * *piVar17;
      uVar2 = param_1[0x50];
      uVar12 = (unsigned __int64)uVar2;
      uVar3 = param_1[0x4e];
      uVar4 = param_1[0x4f];
      uVar11 = piVar17[-6] * *piVar17;
      uVar1 = (int)uVar11 / (int)uVar2;
      uVar15 = (unsigned __int64)(int)uVar1;
      puVar18[0xc] = uVar1;
      trapWord(6,uVar12,0);
      uVar2 = (int)uVar13 / (int)uVar2;
      uVar14 = (unsigned __int64)(int)uVar2;
      trapWord(6,uVar12,0);
      trapWord(5,uVar12 & ~((((unsigned __int64)uVar13 & 0x7fffffff) << 1 | (unsigned __int64)(uVar13 >> 0x1f)) -
                           1),0xffff);
      trapWord(5,uVar12 & ~((((unsigned __int64)uVar11 & 0x7fffffff) << 1 | (unsigned __int64)(uVar11 >> 0x1f)) -
                           1),0xffff);
      if (piVar17[3] == 0) {
        *puVar18 = fn_829BEB28;
      }
      else if ((uVar2 == uVar3) && (uVar1 == uVar4)) {
        *puVar18 = fn_829BEB20;
      }
      else {
        if (uVar2 << 1 == uVar3) {
          if (uVar1 == uVar4) {
            if ((bVar7) && (2 < (unsigned int)piVar17[1])) {
              *puVar18 = fn_829BEF68;
            }
            else {
              *puVar18 = fn_829BEC10;
            }
          }
          else {
            if ((uVar2 << 1 != uVar3) || (uVar1 << 1 != uVar4)) goto LAB_829bf158;
            if ((bVar7) && (2 < (unsigned int)piVar17[1])) {
              *puVar18 = fn_829BEF70;
              puVar9[2] = 1;
            }
            else {
              *puVar18 = fn_829BEC78;
            }
          }
        }
        else {
LAB_829bf158:
          trapWord(6,uVar14,0);
          trapWord(5,uVar14 & ~((((unsigned __int64)uVar3 & 0x7fffffff) << 1 | (unsigned __int64)(uVar3 >> 0x1f))
                               - 1),0xffff);
          if ((unsigned __int64)uVar3 == (__int64)((int)uVar3 / (int)uVar2) * (__int64)(int)uVar2) {
            trapWord(6,uVar15,0);
            trapWord(5,uVar15 & ~((((unsigned __int64)uVar4 & 0x7fffffff) << 1 | (unsigned __int64)(uVar4 >> 0x1f)
                                  ) - 1),0xffff);
            if ((unsigned __int64)uVar4 == (__int64)((int)uVar4 / (int)uVar1) * (__int64)(int)uVar1) {
              *puVar18 = fn_829BEB38;
              *(char *)((int)puVar9 + iVar16 + 0x8c) = (char)((int)uVar3 / (int)uVar2);
              trapWord(6,uVar14,0);
              *(char *)((int)puVar9 + iVar16 + 0x96) = (char)((int)uVar4 / (int)uVar1);
              trapWord(6,uVar15,0);
              trapWord(5,uVar14 & ~((((unsigned __int64)uVar3 & 0x7fffffff) << 1 |
                                    (unsigned __int64)(uVar3 >> 0x1f)) - 1),0xffff);
              trapWord(5,uVar15 & ~((((unsigned __int64)uVar4 & 0x7fffffff) << 1 |
                                    (unsigned __int64)(uVar4 >> 0x1f)) - 1),0xffff);
              goto LAB_829bf20c;
            }
          }
          *(unsigned int *)(*param_1 + 0x14) = 0x26;
          (**(int (***)())*param_1)(param_1);
        }
LAB_829bf20c:
        iVar5 = param_1[1];
        iVar6 = param_1[0x4f];
        uVar8 = d3dx_jround_up(param_1[0x1c],param_1[0x4e]);
        uVar10 = (**(int (***)())(iVar5 + 8))(param_1,1,uVar8,iVar6);
        puVar18[-10] = uVar10;
      }
      iVar16 = iVar16 + 1;
      puVar18 = puVar18 + 1;
      piVar17 = piVar17 + 0x15;
    } while (iVar16 < param_1[9]);
  }
  return;
}

