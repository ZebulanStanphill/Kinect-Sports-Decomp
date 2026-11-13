extern int fn_822315A0();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_82514AD8();
extern unsigned int iStack_2c;
extern unsigned int lbl_83297810;


void fn_82514938(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar1;
  unsigned __int64 uVar2;
  int *piStack_30;
  int iStack_2c;
  
  if (((int)param_3 == 2) && (cVar1 = (**(int (***)())(*param_1 + 0x74))(), cVar1 != '\0')) {
    fn_82514AD8(param_1,1);
  }
  uVar2 = (unsigned __int64)lbl_83297810;
  if (uVar2 == 0) {
    uVar2 = fn_82511928();
  }
  fn_82513A80(&piStack_30,uVar2,param_1);
  if (piStack_30 != (int *)0x0) {
    (**(int (***)())(*piStack_30 + 4))(piStack_30,param_2,param_3);
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

