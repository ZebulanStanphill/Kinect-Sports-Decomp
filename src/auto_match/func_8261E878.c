extern int fn_82535298();
extern int fn_82536288();


void fn_8261E878(int param_1,int *param_2)

{
  int aiStack_10;
  
  if (((*(int *)(param_1 + 0x1b4) != 0) && (param_2 != (int *)0x0)) &&
     (aiStack_10 = *param_2, aiStack_10 != 0)) {
    aiStack_10 =
         fn_82535298(&aiStack_10,*(unsigned int *)(*(int *)(param_1 + 0x1b4) + 0x84c),
                           0xffffffff83296bc0,0xffffffff83296bd0);
    fn_82536288(&aiStack_10);
  }
  return;
}

