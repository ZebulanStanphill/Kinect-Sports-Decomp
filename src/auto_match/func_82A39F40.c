extern unsigned int *auStack_30;
extern int fn_82A3B5D8();
extern int fn_82A3B768();
extern int fn_82A3CED8();
extern int fn_82A3D230();
extern int memset();


unsigned __int64 fn_82A39F40(int *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int auStack_30 [8];
  
  uVar1 = param_1[1];
  *(unsigned char *)((int)param_1 + 0x972) = 0;
  uVar2 = param_1[0x219] - uVar1;
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  if ((*param_1 - param_1[0x10c8]) + *param_2 < (int)(uVar1 + (*param_2 - param_1[0x219]))) {
    return 0;
  }
  fn_82A3D230(param_1,0,param_1[7],param_1[8],auStack_30,0);
  fn_82A3CED8(param_1,0,0,auStack_30[0]);
  fn_82A3B5D8(param_1,0);
  fn_82A3B768(param_1);
                    /* WARNING: Subroutine does not return */
  memset(param_1[2],0,0x40000);
}

