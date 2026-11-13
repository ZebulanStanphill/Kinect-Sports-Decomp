extern unsigned int *auStack_30;
extern int fn_82E62AD8();
extern int fn_82E7C230();
extern int fn_82E7C288();
extern int fn_82E7E1D8();


__int64 fn_82E43F60(int param_1,unsigned int *param_2)

{
  int *piVar1;
  __int64 lVar2;
  int *piStack_40;
  int *piStack_3c;
  int *apiStack_38 [2];
  unsigned char auStack_30 [48];
  
  piStack_3c = (int *)0x0;
  apiStack_38[0] = (int *)0x0;
  piStack_40 = (int *)0x0;
  fn_82E7C230(auStack_30,*(unsigned int *)(param_1 + 0x18));
  piVar1 = piStack_40;
  if (*(int *)(param_1 + 0x78) == 0) {
    lVar2 = -0x7fff0001;
  }
  else if (param_2 == (unsigned int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    *param_2 = 0;
    lVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x78))
                      (*(unsigned int **)(param_1 + 0x78),0xffffffff821545bc,&piStack_3c);
    piVar1 = piStack_40;
    if ((((-1 < lVar2) &&
         (lVar2 = (**(int (***)())(*piStack_3c + 0x10))(piStack_3c,apiStack_38), piVar1 = piStack_40,
         -1 < lVar2)) &&
        (lVar2 = (**(int (***)())*apiStack_38[0])(apiStack_38[0],0xffffffff82153dcc,&piStack_40),
        piVar1 = piStack_40, -1 < lVar2)) &&
       ((lVar2 = fn_82E7E1D8(auStack_30,piStack_40,param_1 + 4), piVar1 = piStack_40, -1 < lVar2
        && (lVar2 = fn_82E62AD8(piStack_40), piVar1 = piStack_40, -1 < lVar2)))) {
      *param_2 = piStack_40;
      piVar1 = (int *)0x0;
      if (piStack_40 != (int *)0x0) {
        (**(int (***)())(*piStack_40 + 4))(piStack_40);
        piVar1 = piStack_40;
      }
    }
  }
  if (piStack_3c != (int *)0x0) {
    (**(int (***)())(*piStack_3c + 8))();
    piStack_3c = (int *)0x0;
    piVar1 = piStack_40;
  }
  if (apiStack_38[0] != (int *)0x0) {
    (**(int (***)())(*apiStack_38[0] + 8))();
    apiStack_38[0] = (int *)0x0;
    piVar1 = piStack_40;
  }
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 8))(piVar1);
    piStack_40 = (int *)0x0;
  }
  fn_82E7C288(auStack_30);
  return lVar2;
}

