typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82B17248();
extern int fn_82B230F8();


void fn_82B28F78(int param_1,unsigned int param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  bool bVar5;
  unsigned int *puVar6;
  char cVar8;
  int iVar7;
  unsigned int *puVar9;
  unsigned int uVar10;
  
  puVar6 = (unsigned int *)fn_82ABE250(param_1,8,0x1c);
  puVar4 = puVar6 + 1;
  puVar6[1] = (unsigned int)puVar6 | 1;
  *puVar6 = (unsigned int)puVar4 | 1;
  do {
    fn_82B230F8(param_1,param_2,param_4,param_5);
    if (((*(unsigned int *)(param_2 + 8) & 0x380000) != 0) && (*(unsigned int **)(param_2 + 0x2c) == param_3)) {
      if (((*param_3 & 0xe000000) == 0x2000000) && ((*param_3 & 0x1f) == 0)) {
        uVar10 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
        if ((uVar10 != 0xb) && (uVar10 != 10)) {
          if (uVar10 == 0x67) {
            cVar8 = fn_82B17248(param_2,param_1);
            if (cVar8 != '\0') goto LAB_82b2905c;
          }
          if (((uVar10 != 1) && (uVar10 != 2)) ||
             ((*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x30) + 0xc) + 8) & 0x3f80) != 16000))
          goto LAB_82b29168;
        }
LAB_82b2905c:
        for (puVar2 = *(unsigned int **)(param_2 + 4); puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[2]) {
          uVar10 = puVar2[4];
          if (uVar10 != 0) {
            if ((*puVar2 & 0xe000000) != 0) {
              uVar1 = *(unsigned int *)(uVar10 + 8) >> 7 & 0x7f;
              if ((uVar1 == 0) || (bVar5 = true, 0x66 < uVar1)) {
                bVar5 = false;
              }
              if ((bVar5) || (uVar1 == 0x67)) {
                uVar1 = ((int)param_4 - *(int *)(param_1 + 0x268)) / 0x44;
                if ((*(unsigned int *)(((uVar1 >> 5) + 0x15) * 4 + *(int *)(uVar10 + 0x1c)) >>
                     (uVar1 & 0x1f) & 1) != 0) {
                  fn_82B230F8(param_1,uVar10,param_4,param_5);
                  if (((*puVar2 & 0x1f) == 0) && ((*puVar2 & 0xe000000) == 0x2000000)) {
                    if ((*puVar4 & 1) == 0) {
                      uVar10 = *puVar6 & 0xfffffffe;
                      iVar7 = uVar10 - 4;
                      if ((iVar7 == 0) || (*(unsigned int *)(uVar10 + 8) < *(int *)(uVar10 + 4) + 1U))
                      goto LAB_82b2913c;
                    }
                    else {
LAB_82b2913c:
                      iVar7 = fn_82AD6090(puVar6,1);
                    }
                    iVar3 = *(int *)(iVar7 + 8);
                    *(int *)(iVar7 + 8) = iVar3 + 1;
                    *(unsigned int **)((iVar3 + 4) * 4 + iVar7) = puVar2;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_82b29168:
    if ((*puVar4 & 1) != 0) {
LAB_82b291e4:
      *puVar6 = *(unsigned int *)(param_1 + 0x3d0);
      *(unsigned int **)(param_1 + 0x3d0) = puVar6;
      return;
    }
    if (*puVar4 == 0) goto LAB_82b291e4;
    puVar2 = (unsigned int *)(*puVar6 & 0xfffffffe);
    puVar9 = puVar2 + -1;
    uVar10 = puVar2[1] - 1;
    param_3 = (unsigned int *)puVar9[puVar2[1] + 3];
    puVar2[1] = uVar10;
    if (uVar10 == 0) {
      *(unsigned int *)(*puVar2 & 0xfffffffe) = *puVar9;
      *(unsigned int *)(*puVar9 & 0xfffffffe) = *puVar2;
      fn_82AA6648(puVar6,puVar9,((unsigned __int64)puVar2[2] + 4 & 0x3fffffff) << 2);
    }
    param_2 = param_3[4];
  } while( true );
}

