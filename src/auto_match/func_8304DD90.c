extern int fn_8304D6F0();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;


__int64 fn_8304DD90(int *param_1,unsigned int *param_2)

{
  int iVar1;
  int iStack_20;
  unsigned int uStack_1c;
  
  fn_8304D6F0(param_1,((unsigned __int64)*(unsigned int *)(*(int *)(param_1[2] + 0x6c) + 0x20) *
                       (unsigned __int64)*(unsigned int *)(param_1[2] + 0xd0)) / 48000 & 0xffffffff,&iStack_20,
               param_1 + 7);
  *(unsigned char *)(param_1 + 0x16) = 0;
  param_1[0x12] = iStack_20;
  iVar1 = (**(int (***)())(*param_1 + 0x40))(param_1,iStack_20,&uStack_1c);
  *param_2 = iVar1 + param_1[0xc];
  iVar1 = param_1[2];
  *(unsigned int *)(iVar1 + 0xd0) = uStack_1c;
  *(unsigned char *)(iVar1 + 0xdb) = *(unsigned char *)(iVar1 + 0xdb) & 0x7f;
  return 2 - (unsigned __int64)
             ((unsigned __int64)*param_2 < (unsigned __int64)(unsigned int)param_1[0xb] + (unsigned __int64)(unsigned int)param_1[0xc]);
}

