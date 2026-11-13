extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE7988();
extern int fn_82BE8F88();
extern int fn_82BE54C0();
extern int fn_82BE56C0();


void fn_82BEE708(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  
  fn_82BE5340(param_1);
  while (*(int *)(param_1 + 8) != 0) {
    iVar1 = fn_82BE5378(param_1);
    fn_82BE7988(*(unsigned char *)(iVar1 + 0x14),*(unsigned short *)(iVar1 + 0x16));
    fn_82BE5350(param_1);
  }
  iVar1 = fn_82BE8F88();
  if (iVar1 != 0) {
    fn_82BE7988(4,0x50);
  }
  fn_82BE5340(param_1);
  while (*(int *)(param_1 + 8) != 0) {
    puVar2 = (unsigned int *)fn_82BE5378(param_1);
    if (puVar2 != (unsigned int *)0x0) {
      (*(int (**)())*puVar2)(puVar2,1);
    }
    fn_82BE5350(param_1);
  }
  fn_82BE5478(param_1);
  fn_82BE54C0(param_1);
  fn_82BE56C0(param_1);
  return;
}

