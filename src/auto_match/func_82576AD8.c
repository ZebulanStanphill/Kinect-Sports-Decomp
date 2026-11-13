extern int fn_82544528();
extern int fn_82544918();
extern void fn_8263CBB0(unsigned, unsigned, unsigned, unsigned);
extern void fn_825D8490(int,float,int,int);
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83282270[];


void fn_82576AD8(int *param_2,float delta,int param_4)

{
  int *piVar1;
  unsigned uVar2;
  
  fn_82544918(1,lbl_8320A898);
  if (lbl_83282270[*(int *)(*(int *)(*(int *)(*param_2 + 0x8ac) + 0xb9e4) + param_4 * 4)] != 0) {
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(lbl_8320A898,0x10,
                      lbl_83282270
                      [*(int *)(*(int *)(*(int *)(*param_2 + 0x8ac) + 0xb9e4) + param_4 * 4)],0x8000
                     );
  }
  for (piVar1 = (int *)param_2[5]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      ((void (*)(int,float,int))(*(int *)(*(int *)*piVar1 + 0x1c)))(*piVar1,delta,param_4);
    }
  }
  if ((unsigned)param_2[0x20] != 0) {
    piVar1 = *(int **)(param_2[0x20]+0xe0);
    uVar2 = fn_82544528();
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(lbl_8320A898,1,uVar2,0x40000000);
    while (piVar1) {
      if (*(unsigned char *)((char *)piVar1+12)) fn_825D8490(*piVar1,delta,param_4,1);
      piVar1=(int *)piVar1[4];
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,0x10,0,0x8000);
}

