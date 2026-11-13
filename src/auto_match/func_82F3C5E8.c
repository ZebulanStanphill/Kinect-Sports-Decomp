extern unsigned int *auStack_44;
extern unsigned int *auStack_4c;
extern int fn_82EE55F8();
extern int fn_82EE5BE8();
extern unsigned int uStack_4e;
extern unsigned int uStack_50;


__int64 fn_82F3C5E8(int param_1,int param_2)

{
  int *piVar1;
  __int64 lVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned short uVar5;
  unsigned short uStack_50;
  unsigned short uStack_4e;
  unsigned char auStack_4c [4];
  int *piStack_48;
  unsigned int auStack_44;
  
  piStack_48 = (int *)0x0;
  lVar2 = (**(int (***)())(**(int **)(param_1 + 0x54) + 0xc))
                    (*(int **)(param_1 + 0x54),0xffffffff82154a98,&auStack_44);
  piVar3 = piStack_48;
  if ((-1 < lVar2) && (uVar4 = 0, auStack_44 != 0)) {
    while ((lVar2 = (**(int (***)())(**(int **)(param_1 + 0x54) + 0x10))
                              (*(int **)(param_1 + 0x54),0xffffffff82154a98,uVar4,&piStack_48),
           piVar1 = piStack_48, piVar3 = piStack_48, -1 < lVar2 &&
           (lVar2 = fn_82EE55F8(piStack_48,&uStack_50), piVar3 = piStack_48, -1 < lVar2))) {
      uVar5 = 0;
      if (uStack_50 != 0) {
        do {
          lVar2 = fn_82EE5BE8(piVar1,uVar5,&uStack_4e,auStack_4c);
          piVar3 = piStack_48;
          if (lVar2 < 0) goto LAB_82f3c740;
          if ((0x7f < uStack_4e) || (*(int *)((unsigned int)uStack_4e * 4 + param_2) == 0)) {
            lVar2 = (**(int (***)())(**(int **)(param_1 + 0x54) + 0x1c))
                              (*(int **)(param_1 + 0x54),piStack_48);
            piVar3 = piStack_48;
            if (lVar2 < 0) goto LAB_82f3c740;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uStack_50);
      }
      if (piStack_48 != (int *)0x0) {
        (**(int (***)())(*piStack_48 + 8))();
        piStack_48 = (int *)0x0;
      }
      piVar3 = (int *)0x0;
      uVar4 = uVar4 + 1;
      if ((unsigned __int64)auStack_44 <= (uVar4 & 0xffffffff)) break;
    }
  }
LAB_82f3c740:
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 8))();
  }
  return lVar2;
}

