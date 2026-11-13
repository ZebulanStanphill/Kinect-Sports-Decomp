extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82F691F0();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


unsigned __int64 fn_82C080A0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [18];
  
  iStack_50 = 0;
  iStack_4c = 0;
  aiStack_48[0] = 0;
  uVar1 = fn_82C10AD0(param_3,8,0x290,param_1);
  if (-1 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*param_1,0,0x290);
  }
  if (*param_1 != 0) {
    fn_82C10B28(param_3,8,param_1);
  }
  if (iStack_50 != 0) {
    fn_82C10B28(param_3,8,&iStack_50);
  }
  if (iStack_4c != 0) {
    fn_82C10B28(param_3,8,&iStack_4c);
  }
  if (aiStack_48[0] != 0) {
    fn_82C10B28(param_3,8,aiStack_48);
  }
  return uVar1;
}

