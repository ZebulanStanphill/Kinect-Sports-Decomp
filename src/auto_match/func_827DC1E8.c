extern int fn_827DC8B8();
extern int fn_827E0B50();


void fn_827DC1E8(int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piStack00000014;
  
  puVar2 = (unsigned int *)*param_1;
  piStack00000014 = param_1;
  if (puVar2 != (unsigned int *)0x0) {
    (**(int (***)())*puVar2)(puVar2,1);
  }
  puVar2 = (unsigned int *)param_1[0x2d8];
  for (puVar1 = (unsigned int *)*puVar2; puVar1 != puVar2; puVar1 = (unsigned int *)*puVar1) {
    puVar2 = (unsigned int *)puVar1[3];
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
    puVar2 = (unsigned int *)param_1[0x2d8];
  }
  fn_827DC8B8(param_1 + 0x2f5);
  fn_827E0B50(param_1 + 0x2d7);
  fn_827DC8B8(param_1 + 0xb);
  fn_827DC8B8(param_1 + 1);
  return;
}

