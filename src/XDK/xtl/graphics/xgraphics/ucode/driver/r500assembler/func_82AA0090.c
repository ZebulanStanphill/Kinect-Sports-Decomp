extern int fn_82A9FBB0();
extern int fn_82A9FC18();
extern int fn_82A9FC88();


unsigned char fn_82AA0090(unsigned char *param_1,int param_2)

{
  char cVar2;
  __int64 lVar1;
  
  cVar2 = fn_82A9FC18(param_1 + 8);
  if (cVar2 == '\0') {
    lVar1 = fn_82A9FC88(param_1 + 0x28,*(unsigned int *)(param_1 + 0x1248));
    if (lVar1 < 0) {
      *param_1 = 1;
      return 0;
    }
    *(int *)(param_1 + 0x1248) = (int)lVar1 + -1;
    fn_82A9FBB0(param_1 + 8,param_2);
    param_1[*(int *)(param_1 + 4) + 0x148] = (char)param_2;
    fn_82A9FBB0(param_1 + 0x28,lVar1);
    param_1[param_2 + 0x48] = (char)lVar1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return param_1[param_2 + 0x48];
}

