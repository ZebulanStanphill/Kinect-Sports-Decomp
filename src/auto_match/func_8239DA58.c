extern unsigned int fStack_70;
extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_82365B38();
extern int fn_82365BD8();
extern int fn_824C5748();
extern int fn_824C5930();
extern int fn_82566018();
extern int fn_8265C9E0();
extern unsigned int iStack_4c;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B51BC;
extern unsigned int uStack_60;


/* WARNING: Type propagation algorithm not settling */

void fn_8239DA58(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  double dVar3;
  double dVar4;
  float fStack_70;
  float afStack_6c [2];
  int iStack_64;
  struct { unsigned int first; int second; } stack_pair_60;

  unsigned char **ppuStack_50;
  int iStack_4c;
  unsigned char ***pppuStack_40;
  
  afStack_6c[0] = *(float *)(param_1 + 0x8cc);
  dVar4 = (double)afStack_6c[0];
  fStack_70 = *(float *)(param_1 + 0x8d0);
  dVar3 = (double)fStack_70;
  afStack_6c[1] = 1.4013e-45;
  stack_pair_60.first = 0;
  fn_82365B38(&stack_pair_60.first,afStack_6c + 1,afStack_6c,&fStack_70);
  fn_82365BD8(afStack_6c + 1,&stack_pair_60.first);
  fn_82566018(param_1 + 0x8a8,afStack_6c + 1);
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  fn_82365BD8(afStack_6c + 1,&stack_pair_60.first);
  fn_824C5748(param_1 + 0x880,afStack_6c + 1);
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)fn_8265C9E0(0x40);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821A8D8C;
    if (puVar2 + 4 != (unsigned int *)0x0) {
      pppuStack_40 = &ppuStack_50;
      ppuStack_50 = &lbl_821B51BC;
      iStack_4c = param_1;
      fn_824C5930(dVar4,dVar3,puVar2 + 4,2,&ppuStack_50);
      fn_82359C18(&ppuStack_50);
    }
  }
  iVar1 = *(int *)(param_1 + 0x8c4);
  *(unsigned int **)(param_1 + 0x8c4) = puVar2;
  *(unsigned int **)(param_1 + 0x8c0) = puVar2 + 4;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (stack_pair_60.second != 0) {
    fn_822315A0();
  }
  return;
}

