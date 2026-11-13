typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_82E58B58();
extern int fn_82E65B08();
extern unsigned int uStack_64;
extern unsigned int uStack_68;


__int64 fn_82E73D00(int param_1,int *param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned __int64 uVar1;
  bool bVar2;
  __int64 lVar3;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int *piVar9;
  unsigned __int64 uVar8;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int *piStack_70;
  int *piStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int auStack_60 [24];
  
  if ((param_2 == (int *)0x0) || (param_4 == (int *)0x0)) {
    lVar3 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    if (*(unsigned int *)(param_1 + 0x2c) < *(unsigned int *)(param_1 + 0x38)) {
      piStack_70 = (int *)0x0;
      piStack_6c = (int *)0x0;
      uStack_64 = 0;
      lVar3 = (**(int (***)())(*param_2 + 0xb4))(param_2,&uStack_64);
      piVar4 = piStack_6c;
      piVar9 = piStack_70;
      if (-1 < lVar3) {
        if ((unsigned __int64)uStack_64 < (param_3 & 0xffffffff)) {
          lVar3 = -0x7ff8ffa9;
        }
        else {
          uStack_68 = 0;
          lVar3 = (**(int (***)())(*param_2 + 0x9c))(param_2,&uStack_68);
          piVar4 = piStack_6c;
          piVar9 = piStack_70;
          if ((-1 < lVar3) && (uVar10 = 0, uStack_68 != 0)) {
            do {
              if ((*(unsigned int *)(param_1 + 0x38) <= *(unsigned int *)(param_1 + 0x2c)) ||
                 (lVar3 = (**(int (***)())(*param_2 + 0xa0))(param_2,uVar10,&piStack_70),
                 piVar4 = piStack_6c, piVar9 = piStack_70, lVar3 < 0)) break;
              auStack_60[0] = 0;
              lVar3 = (**(int (***)())(*piStack_70 + 0x14))(piStack_70,auStack_60);
              piVar4 = piStack_6c;
              piVar9 = piStack_70;
              if (lVar3 < 0) break;
              uVar7 = (unsigned __int64)auStack_60[0];
              if ((param_3 & 0xffffffff) < uVar7) {
                uVar6 = 0;
                if ((param_3 & 0xffffffff) != 0) {
                  uVar6 = param_3;
                }
                uVar11 = uVar7 - uVar6;
                uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
                bVar2 = false;
                uVar1 = *(unsigned int *)(param_1 + 0x2c) + uVar11 & 0xffffffff;
                if ((uVar8 <= uVar1) && (bVar2 = true, uVar8 < uVar1)) {
                  uVar11 = uVar8 - *(unsigned int *)(param_1 + 0x2c);
                }
                if (((uVar6 & 0xffffffff) == 0) && (uVar7 <= (uVar11 & 0xffffffff))) {
                  piStack_6c = piStack_70;
                  (**(int (***)())(*piStack_70 + 4))();
                }
                else {
                  lVar3 = fn_82E65B08(piStack_70,uVar6,&piStack_6c);
                  piVar4 = piStack_6c;
                  piVar9 = piStack_70;
                  if ((lVar3 < 0) ||
                     (lVar3 = (**(int (***)())(*piStack_6c + 0x18))(piStack_6c,uVar11),
                     piVar4 = piStack_6c, piVar9 = piStack_70, lVar3 < 0)) break;
                }
                lVar3 = (**(int (***)())(**(int **)(param_1 + 0x40) + 0xa8))
                                  (*(int **)(param_1 + 0x40),piStack_6c);
                piVar4 = piStack_6c;
                piVar9 = piStack_70;
                if (lVar3 < 0) break;
                *(int *)(param_1 + 0x2c) = (int)uVar11 + *(int *)(param_1 + 0x2c);
                *param_4 = *param_4 + (int)uVar11;
                if (piStack_70 != (int *)0x0) {
                  (**(int (***)())(*piStack_70 + 8))(piStack_70);
                  piStack_70 = (int *)0x0;
                }
                piVar9 = (int *)0x0;
                if (piStack_6c != (int *)0x0) {
                  (**(int (***)())(*piStack_6c + 8))();
                  piStack_6c = (int *)0x0;
                  piVar9 = piStack_70;
                }
                piVar4 = (int *)0x0;
                if ((bVar2) &&
                   (iVar5 = fn_82E58B58(param_1 + 0x44,param_2), piVar4 = piStack_6c,
                   piVar9 = piStack_70, iVar5 != 0)) {
                  (**(int (***)())(*param_2 + 4))(param_2);
                  piVar4 = piStack_6c;
                  piVar9 = piStack_70;
                }
              }
              uVar10 = uVar10 + 1;
            } while ((uVar10 & 0xffffffff) < (unsigned __int64)uStack_68);
          }
        }
      }
      if (piVar9 != (int *)0x0) {
        (**(int (***)())(*piVar9 + 8))(piVar9);
        piStack_70 = (int *)0x0;
        piVar4 = piStack_6c;
      }
      if (piVar4 != (int *)0x0) {
        (**(int (***)())(*piVar4 + 8))();
      }
    }
    else {
      lVar3 = -0x3ff2c94b;
    }
  }
  return lVar3;
}

