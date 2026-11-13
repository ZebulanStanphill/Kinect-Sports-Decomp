#define true 1
extern unsigned int *auStack_48;
extern int fn_82E5D7B8();


/* WARNING: Type propagation algorithm not settling */

__int64 fn_82E5FEE8(int *param_1,unsigned __int64 param_2,int *param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int *piStack_50;
  int *piStack_4c;
  unsigned int auStack_48 [2];
  
  if (((param_1 == (int *)0x0) || ((param_2 & 0xffffffff) == 0)) || (param_3 == (int *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    auStack_48[0] = 0;
    piVar3 = (int *)0x0;
    piStack_50 = (int *)0x0;
    piStack_4c = (int *)0x0;
    lVar1 = (**(int (***)())(*param_1 + 0x9c))(param_1,auStack_48);
    if (-1 < lVar1) {
      auStack_48[1] = 0;
      lVar1 = (**(int (***)())(*param_3 + 0xc))(param_3,0xffffffff82154a68,auStack_48 + 1);
      if ((-1 < lVar1) && (uVar2 = 0, auStack_48[0] != 0)) {
        while( true ) {
          if (piStack_50 != (int *)0x0) {
            (**(int (***)())(*piStack_50 + 8))();
            piStack_50 = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*param_1 + 0xa0))(param_1,uVar2,&piStack_50);
          if (lVar1 < 0) break;
          if (piVar3 != (int *)0x0) {
            (**(int (***)())(*piVar3 + 8))(piVar3);
            piStack_4c = (int *)0x0;
          }
          lVar1 = fn_82E5D7B8(piStack_50,param_2,&piStack_4c);
          piVar3 = piStack_4c;
          if (((lVar1 < 0) ||
              (lVar1 = (**(int (***)())(*param_3 + 0x14))(param_3,piStack_4c,0), lVar1 < 0)) ||
             (uVar2 = uVar2 + 1, (unsigned __int64)auStack_48[0] <= (uVar2 & 0xffffffff))) break;
        }
        if (piVar3 != (int *)0x0) {
          (**(int (***)())(*piVar3 + 8))(piVar3);
        }
      }
    }
    if (piStack_50 != (int *)0x0) {
      (**(int (***)())(*piStack_50 + 8))();
    }
  }
  return lVar1;
}

