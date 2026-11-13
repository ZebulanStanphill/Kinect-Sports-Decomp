extern unsigned int *auStack_10;
extern unsigned int *auStack_c;
extern int fn_82BF74D0();


unsigned __int64 fn_82BF7540(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char auStack_10 [4];
  unsigned char auStack_c [12];
  
  if (((param_1 & 0xffffffff) == 0) ||
     (iVar2 = fn_82BF74D0(param_1,param_2,auStack_c,auStack_10), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *param_3 = *(unsigned int *)(iVar2 + 0xc);
  }
  return uVar1;
}

