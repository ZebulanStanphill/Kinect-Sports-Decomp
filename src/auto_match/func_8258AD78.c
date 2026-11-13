extern unsigned int *auStack_30;
extern int fn_825200F0();
extern int fn_8256BF18();
extern int fn_8256BF70();
extern int fn_8256DE08();
extern unsigned int lbl_83265A24;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned int * fn_8258AD78(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned char auStack_30 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_825200F0(auStack_30);
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  fn_8256DE08(&stack_pair_40.first,0);
  uVar1 = lbl_83265A24;
  uVar2 = fn_8256BF18();
  fn_8256BF70(uVar2,auStack_30,uVar1,0,0,param_1,&stack_pair_40.first,1);
  return param_1;
}

