extern unsigned int *auStack_20;
extern int fn_824CCD80();
extern int fn_824CD030();
extern int fn_82560100();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;


void fn_822BD460(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned int auStack_20 [2];
  
  iVar1 = fn_82560100((double)ltcg_pool_0_0f,param_1,param_2,&stack0x00000020,param_4,
                            &stack0x00000030,0,0,0);
  if (((param_3 & 0xffffffff) != 0) && (iVar2 = fn_824CD030(param_3), iVar2 != 0)) {
    auStack_20[0] = fn_824CCD80(param_3);
    (**(int (***)())(**(int **)(iVar1 + 0x1b0) + 8))(*(int **)(iVar1 + 0x1b0),0x19,auStack_20);
  }
  return;
}

