extern int fn_823AA370();
extern int fn_823AA378();
extern int fn_828D45F8();
extern int fn_82C00470();


unsigned __int64 fn_82BFEC78(int *param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  double dVar3;
  int *piStack_30;
  int *piStack_2c;
  int aiStack_28;
  
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  aiStack_28 = 0;
  uVar1 = (**(int (***)())(*param_1 + 0x74))(param_1,&piStack_2c);
  if (-1 < (int)uVar1) {
    if (piStack_2c != (int *)0x0) {
      uVar1 = (**(int (***)())(*piStack_2c + 0x3c))(piStack_2c,0,&piStack_30,0);
    }
    if (-1 < (int)uVar1) {
      if (piStack_30 != (int *)0x0) {
        uVar1 = (**(int (***)())(*piStack_30 + 0x5c))(piStack_30,&aiStack_28);
      }
      if ((-1 < (int)uVar1) && (aiStack_28 != 0)) {
        uVar2 = fn_828D45F8();
        *param_2 = uVar2;
        uVar2 = fn_823AA370(aiStack_28);
        param_2[1] = uVar2;
        dVar3 = (double)fn_82C00470(aiStack_28);
        param_2[2] = (float)dVar3;
        uVar2 = fn_823AA378(aiStack_28);
        param_2[3] = uVar2;
      }
    }
  }
  if (piStack_2c != (int *)0x0) {
    (**(int (***)())(*piStack_2c + 8))(piStack_2c);
    piStack_2c = (int *)0x0;
  }
  if (piStack_30 != (int *)0x0) {
    (**(int (***)())(*piStack_30 + 8))(piStack_30);
  }
  return uVar1;
}

