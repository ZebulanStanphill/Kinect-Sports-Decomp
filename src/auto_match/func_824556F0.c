extern unsigned int *auStack_10;
extern int fn_82535298();
extern int fn_82536288();


extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
void fn_824556F0(int param_1,unsigned int *param_2)

{
  unsigned int auStack_10;
  
  auStack_10 = *param_2;
  auStack_10 =
       fn_82535298(&auStack_10,**(unsigned int **)(param_1 + 0x80),lbl_83296BC0,lbl_83296BD0);
  fn_82536288(&auStack_10);
  return;
}

