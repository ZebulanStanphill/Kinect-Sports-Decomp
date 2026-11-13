extern int fn_82E2D718();
extern int fn_82E2D8C0();
extern int fn_82E2FCE0();
extern int fn_82E30080();
extern int fn_82E309D0();
extern int fn_82E625B0();
extern int fn_82E62630();


__int64 fn_82E31708(int param_1,unsigned int *param_2)

{
  int *piVar1;
  __int64 lVar2;
  int *piVar3;
  unsigned __int64 *puVar4;
  int *piStack_50;
  int *piStack_4c;
  int aiStack_48 [2];
  __int64 alStack_40;
  
  piStack_4c = (int *)0x0;
  piStack_50 = (int *)0x0;
  aiStack_48[0] = 0;
  lVar2 = fn_82E2D8C0(param_1,param_2,aiStack_48);
  piVar3 = piStack_50;
  if (-1 < lVar2) {
    if (aiStack_48[0] == 0) {
      lVar2 = 1;
    }
    else {
      lVar2 = fn_82E309D0(param_1,param_2);
      piVar3 = piStack_50;
      if ((((-1 < lVar2) &&
           (lVar2 = fn_82E2FCE0(param_1,param_2), piVar3 = piStack_50, -1 < lVar2)) &&
          (lVar2 = fn_82E30080(param_1,param_2), piVar3 = piStack_50, -1 < lVar2)) &&
         (((lVar2 = fn_82E2D718(param_1,param_2), piVar3 = piStack_50, -1 < lVar2 &&
           (lVar2 = (**(int (***)())*param_2)(param_2,0xffffffff82154c18,&piStack_4c),
           piVar3 = piStack_50, -1 < lVar2)) &&
          (lVar2 = (**(int (***)())(*piStack_4c + 0x10))(piStack_4c,0xffffffff82154aa8,0,&piStack_50),
          piVar1 = piStack_50, piVar3 = piStack_50, -1 < lVar2)))) {
        if (piStack_50 == (int *)0x0) {
          lVar2 = -0x3ff2c945;
          piVar3 = (int *)0x0;
        }
        else {
          puVar4 = (unsigned __int64 *)(param_1 + 0x1e0);
          lVar2 = fn_82E625B0(piStack_50,puVar4);
          piVar3 = piStack_50;
          if (-1 < lVar2) {
            alStack_40 = 0;
            lVar2 = fn_82E62630(piVar1,&alStack_40);
            piVar3 = piStack_50;
            if (-1 < lVar2) {
              if (*puVar4 < (unsigned __int64)(alStack_40 * 10000)) {
                *puVar4 = 0;
              }
              else {
                *puVar4 = *puVar4 + alStack_40 * -10000;
              }
            }
          }
        }
      }
    }
  }
  if (piStack_4c != (int *)0x0) {
    (**(int (***)())(*piStack_4c + 8))(piStack_4c);
    piStack_4c = (int *)0x0;
    piVar3 = piStack_50;
  }
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 8))();
  }
  return lVar2;
}

