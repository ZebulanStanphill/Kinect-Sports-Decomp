extern int fn_822315A0();
extern int fn_823AB478();
extern int fn_82517978();
extern int fn_82522ED8();
extern int fn_827D5070();
extern int fn_827D50B8();
extern int fn_82A1EFA0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_83276742;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8251FC38(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  iVar1 = fn_827D50B8(*param_1);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x13c) != 0) goto LAB_8251fce0;
    uStack_20 = 0;
    uStack_1c = 0;
    fn_82517978(&uStack_20,*param_1,param_1[1],0);
    lbl_83276742 = 1;
    if (lbl_832659CD != '\0') {
      fn_823AB478(lbl_83265988);
      fn_82A1EFA0();
    }
    fn_82A1EFA0(0);
  }
  sync(1);
  if (*(int *)(param_2 + 8) != 0) {
    uVar2 = fn_827D5070(*param_1);
    **(unsigned int **)(param_2 + 8) = uVar2;
  }
LAB_8251fce0:
  if (*(int *)(param_2 + 0x10) != 0) {
    uStack_20 = 0;
    uStack_1c = 0;
    fn_82517978(&uStack_20,*param_1,param_1[1],0);
    (**(int (***)())(param_2 + 0x10))(&uStack_20,*(unsigned int *)(param_2 + 0x14));
  }
  fn_82522ED8(param_2);
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

