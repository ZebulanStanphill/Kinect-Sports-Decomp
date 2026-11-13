extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int iStack_2c;
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int lbl_821BC088;
extern unsigned int lbl_821BC08C;
extern unsigned int lbl_821BC094;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82469038(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  unsigned char auStack_30 [4];
  int iStack_2c;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned char *puStack_18;
  
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  if (param_2 != *(unsigned int *)(param_1 + 0x130)) {
    *(unsigned int *)(param_1 + 0x130) = param_2;
    if (param_2 == 0) {
      puVar1 = (unsigned int *)fn_82279C58(auStack_30,param_1);
      fn_82672C20(*puVar1,0xffffffff821bc040,0,0);
      iStack_4c = iStack_2c;
    }
    else if (param_2 == 1) {
      puVar1 = (unsigned int *)fn_82279C58(auStack_38,param_1);
      fn_82672C20(*puVar1,0xffffffff821bc04c,0,0);
      iStack_4c = iStack_34;
    }
    else if (param_2 < 3) {
      puVar1 = (unsigned int *)fn_82279C58(auStack_40,param_1);
      fn_82672C20(*puVar1,0xffffffff821bc060,0,0);
      iStack_4c = iStack_3c;
    }
    else if (param_2 == 3) {
      puVar1 = (unsigned int *)fn_82279C58(auStack_48,param_1);
      fn_82672C20(*puVar1,0xffffffff821bc074,0,0);
      iStack_4c = iStack_44;
    }
    else {
      if (4 < param_2) goto LAB_824691b8;
      if (*(int *)(param_1 + 0x134) == 0) {
        fn_82273CD8(&stack_pair_20.first,4);
        puStack_18 = &lbl_821BC088;
      }
      else if (*(int *)(param_1 + 0x134) == 1) {
        fn_82273CD8(&stack_pair_20.first,4);
        puStack_18 = &lbl_821BC08C;
      }
      else {
        fn_82273CD8(&stack_pair_20.first,4);
        puStack_18 = &lbl_821BC094;
      }
      puVar1 = (unsigned int *)fn_82279C58(auStack_50,param_1);
      fn_82672C20(*puVar1,0xffffffff821bc09c,&stack_pair_20.first,1);
    }
    if (iStack_4c != 0) {
      fn_822315A0();
    }
  }
LAB_824691b8:
  fn_82273C88(&stack_pair_20.first);
  return;
}

