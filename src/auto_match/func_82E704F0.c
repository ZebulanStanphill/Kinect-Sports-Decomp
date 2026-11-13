extern unsigned int *auStack_80;
extern int fn_82E6F498();
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;


__int64 fn_82E704F0(int param_1,unsigned __int64 param_2,int *param_3,__int64 *param_4)

{
  __int64 lVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar6;
  unsigned short auStack_80;
  int *piStack_7c;
  unsigned int uStack_78;
  int iStack_74;
  unsigned int uStack_70;
  int iStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  __int64 alStack_60 [2];
  
  *param_3 = 0;
  piStack_7c = (int *)0x0;
  lVar1 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x3c))(*(int **)(param_1 + 0x58),&uStack_70);
  piVar2 = piStack_7c;
  if (-1 < lVar1) {
    uVar4 = 0xffffffffffffffff;
    uVar3 = 0;
    if (uStack_70 != 0) {
      do {
        if (piVar2 != (int *)0x0) {
          (**(int (***)())(*piVar2 + 8))();
          piStack_7c = (int *)0x0;
        }
        lVar1 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x40))
                          (*(int **)(param_1 + 0x58),uVar3,&piStack_7c);
        piVar2 = piStack_7c;
        if (lVar1 < 0) goto LAB_82e70758;
        piVar2 = (int *)0x0;
        if (piStack_7c != (int *)0x0) {
          lVar1 = (**(int (***)())(*piStack_7c + 0x44))(piStack_7c,&auStack_80);
          piVar2 = piStack_7c;
          if (lVar1 < 0) goto LAB_82e70758;
          if ((unsigned __int64)auStack_80 == (param_2 >> 0x20 & 0xffff)) {
            lVar1 = (**(int (***)())(*piStack_7c + 0x24))(piStack_7c,&iStack_74);
            piVar2 = piStack_7c;
            if (lVar1 < 0) goto LAB_82e70758;
            if (iStack_74 != 0) {
              alStack_60[0] = 0;
              lVar1 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x4c))
                                (*(int **)(param_1 + 0x58),piStack_7c,alStack_60);
              piVar2 = piStack_7c;
              if (lVar1 < 0) goto LAB_82e70758;
              uStack_78 = 0;
              lVar1 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x44))
                                (*(int **)(param_1 + 0x58),&uStack_78);
              piVar2 = piStack_7c;
              if (lVar1 < 0) goto LAB_82e70758;
              lVar5 = *(__int64 *)(param_1 + 0x30) + (unsigned __int64)uStack_78 + alStack_60[0];
              lVar1 = fn_82E6F498(param_1,lVar5,&uStack_68);
              piVar2 = piStack_7c;
              if (((lVar1 < 0) ||
                  (lVar1 = (**(int (***)())(*piStack_7c + 0x1c))(piStack_7c,&iStack_6c),
                  piVar2 = piStack_7c, lVar1 < 0)) ||
                 (lVar1 = fn_82E6F498(param_1,((__int64)(iStack_74 + -1) * (__int64)iStack_6c &
                                                0xffffffffU) + lVar5,&uStack_64),
                 piVar2 = piStack_7c, lVar1 < 0)) goto LAB_82e70758;
              *param_4 = lVar5;
              iVar6 = (int)uVar3;
              if ((int *)*param_3 != (int *)0x0) {
                (**(int (***)())(*(int *)*param_3 + 8))();
                *param_3 = 0;
              }
              *param_3 = (int)piStack_7c;
              piVar2 = (int *)0x0;
              if (piStack_7c != (int *)0x0) {
                (**(int (***)())(*piStack_7c + 4))();
                piVar2 = piStack_7c;
              }
              uVar4 = uVar3;
              if (((unsigned __int64)uStack_68 <= (param_2 & 0xffffffff)) &&
                 ((param_2 & 0xffffffff) <= (unsigned __int64)uStack_64)) break;
            }
          }
        }
        iVar6 = (int)uVar4;
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (unsigned __int64)uStack_70);
      if (iVar6 != -1) goto LAB_82e70758;
    }
    lVar1 = -0x3ff2c563;
  }
LAB_82e70758:
  if (piVar2 != (int *)0x0) {
    (**(int (***)())(*piVar2 + 8))();
  }
  return lVar1;
}

