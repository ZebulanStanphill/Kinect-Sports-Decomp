extern int fn_82FA5190();
extern unsigned int lbl_831BC770;


void fn_8304C640(int *param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  (**(int (***)())(*param_1 + 8))();
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 4))(piVar1,0xffffffff831bc7fc);
  }
  uVar3 = lbl_831BC770;
  puVar2 = (unsigned int *)param_1[0xf];
  if (puVar2 == (unsigned int *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(int (***)())*puVar2)(puVar2,0);
    fn_82FA5190(uVar3,puVar2);
    param_1[0xf] = 0;
    param_1[4] = 0;
  }
  return;
}

