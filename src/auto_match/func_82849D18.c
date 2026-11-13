extern unsigned int *auStack_4c;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8265CA20();
extern int fn_8265CAA0();
extern int fn_8284A7C0();
extern int fn_8284ADC8();
extern int fn_82BA02A8();
extern unsigned int iStack00000014;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_80;
extern unsigned int lbl_832112EC;
extern unsigned int uStack_14;


void fn_82849D18(int param_1)

{
  int iStack00000014;
  int iStack_80;
  unsigned int *puStack_7c;
  unsigned char auStack_70 [28];
  struct { int first; int second; } stack_pair_54;

  unsigned char auStack_4c [4];
  unsigned int *puStack_48;
  unsigned int *puStack_44;
  int iStack_1c;
  int iStack_18;
  unsigned int uStack_14;
  
  iStack00000014 = param_1;
  fn_82230110(auStack_70,*(unsigned int *)(param_1 + 0x20));
  fn_8284A7C0(&iStack_80,lbl_832112EC,auStack_70);
  fn_82230300(auStack_70,1,0);
  iStack_18 = lbl_832112EC;
  stack_pair_54.first = *(int *)(lbl_832112EC + 4);
  iStack_1c = stack_pair_54.first;
  fn_82BA02A8(&stack_pair_54.first,lbl_832112EC);
  if (stack_pair_54.first != iStack_80) {
    puStack_7c = *(unsigned int **)(iStack_80 + 0x28);
    puStack_7c[1] = puStack_7c[1] + -1;
    if (puStack_7c[1] == 0) {
      stack_pair_54.second = iStack_80;
      fn_8284ADC8(auStack_4c,lbl_832112EC,iStack_80);
      puStack_44 = puStack_7c;
      puStack_48 = puStack_7c;
      if (puStack_7c != (unsigned int *)0x0) {
        uStack_14 = *puStack_7c;
        fn_8265CAA0(uStack_14);
        fn_8265CA20(puStack_48);
      }
    }
  }
  return;
}

