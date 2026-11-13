extern int fn_82FA4EB8();
extern int fn_82FA5190();
extern int fn_82FA57F0();
extern int fn_8304F800();
extern unsigned int lbl_831BC978;


void fn_8304F8B8(int param_1)

{
  int iVar1;
  char cVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)(param_1 + -4);
  fn_8304F800(puVar3);
  cVar2 = fn_82FA4EB8();
  iVar1 = lbl_831BC978;
  if (((cVar2 != '\0') && (lbl_831BC978 != -1)) && (puVar3 != (unsigned int *)0x0)) {
    (**(int (***)())*puVar3)(puVar3,0);
    fn_82FA5190(iVar1,puVar3);
  }
  fn_82FA57F0(lbl_831BC978);
  lbl_831BC978 = 0xffffffff;
  return;
}

