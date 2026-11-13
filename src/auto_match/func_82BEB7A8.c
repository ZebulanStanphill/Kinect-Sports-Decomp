#define true 1
extern int fn_82BE5230();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE54C0();
extern int fn_82BE66A0();
extern unsigned int lbl_820EAF14;


void fn_82BEB7A8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = &lbl_820EAF14;
  puVar2 = param_1 + 5;
  fn_82BE5340(puVar2);
  while( true ) {
    puVar1 = (unsigned int *)fn_82BE5378(puVar2);
    if (puVar1 == (unsigned int *)0x0) break;
    fn_82BE66A0(puVar1);
    if (puVar1 != (unsigned int *)0x0) {
      (*(int (**)())*puVar1)(puVar1,1);
    }
    fn_82BE5350(puVar2);
  }
  fn_82BE5478(puVar2);
  fn_82BE54C0(puVar2);
  fn_82BE5230(param_1);
  return;
}

