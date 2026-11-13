extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82E43B78();
extern int fn_82E43BE8();
extern int fn_82E43DC0();
extern int fn_82E5E390();
extern int fn_82E5F3C0();


unsigned __int64 fn_82E447C8(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned short auStack_40;
  int *piStack_3c;
  unsigned int auStack_38 [1];
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    piStack_3c = (int *)0x0;
    piVar5 = (int *)0x0;
    iVar3 = fn_82E43B78(param_1);
    if (iVar3 == 0) {
      piVar5 = *(int **)(param_1 + 0x78);
      *(int **)(param_1 + 0x78) = param_2;
      (**(int (***)())(*param_2 + 4))(param_2);
      uVar1 = fn_82E5F3C0(*(unsigned int *)(param_1 + 0x78));
      piVar4 = piStack_3c;
      if ((((-1 < (__int64)uVar1) &&
           (uVar1 = fn_82E5E390(*(unsigned int *)(param_1 + 0x78)), piVar4 = piStack_3c,
           -1 < (__int64)uVar1)) &&
          (uVar1 = fn_82E43BE8(param_1), piVar4 = piStack_3c, -1 < (__int64)uVar1)) &&
         ((uVar1 = fn_82E43DC0(param_1), piVar4 = piStack_3c, -1 < (__int64)uVar1 &&
          (piVar5 != (int *)0x0)))) {
        auStack_38[0] = 0;
        uVar1 = (**(int (***)())(*piVar5 + 0x84))(piVar5,auStack_38);
        piVar4 = piStack_3c;
        if ((-1 < (__int64)uVar1) && (uVar6 = 0, auStack_38[0] != 0)) {
          do {
            auStack_40 = 0;
            uVar1 = (**(int (***)())(*piVar5 + 0x88))(piVar5,uVar6,&auStack_40,0);
            piVar4 = piStack_3c;
            if ((__int64)uVar1 < 0) break;
            uVar2 = (**(int (***)())(**(int **)(param_1 + 0x78) + 0x8c))
                              (*(int **)(param_1 + 0x78),auStack_40,&piStack_3c);
            uVar1 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & uVar1;
            if (piStack_3c != (int *)0x0) {
              (**(int (***)())(*piStack_3c + 8))(piStack_3c);
              piStack_3c = (int *)0x0;
            }
            uVar6 = uVar6 + 1;
            piVar4 = (int *)0x0;
          } while ((uVar6 & 0xffffffff) < (unsigned __int64)auStack_38[0]);
        }
      }
    }
    else {
      uVar1 = 0xffffffffc00d4650;
      piVar4 = piStack_3c;
    }
    if (piVar4 != (int *)0x0) {
      (**(int (***)())(*piVar4 + 8))(piVar4);
      piStack_3c = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      (**(int (***)())(*piVar5 + 8))(piVar5);
    }
  }
  return uVar1;
}

