extern unsigned int *auStack_28;
extern int fn_82E25C48();
extern int fn_82E2D068();
extern int fn_82E4FE40();
extern unsigned int iStack_2c;


__int64 fn_82E2D118(int *param_1,unsigned int *param_2)

{
  int *piVar1;
  __int64 lVar2;
  int *piStack_30;
  int iStack_2c;
  unsigned int auStack_28;
  
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  lVar2 = (**(int (***)())(*param_1 + 0x40))(param_1,0xffffffff821534c8,&iStack_2c,&auStack_28);
  if (((-1 < lVar2) && (lVar2 = fn_82E2D068(&piStack_30), -1 < lVar2)) &&
     (lVar2 = fn_82E25C48(piStack_30,iStack_2c,auStack_28), piVar1 = piStack_30, -1 < lVar2
     )) {
    piStack_30 = (int *)0x0;
    *param_2 = piVar1;
  }
  if (iStack_2c != 0) {
    fn_82E4FE40();
  }
  if (piStack_30 != (int *)0x0) {
    (**(int (***)())(*piStack_30 + 8))(piStack_30);
  }
  return lVar2;
}

