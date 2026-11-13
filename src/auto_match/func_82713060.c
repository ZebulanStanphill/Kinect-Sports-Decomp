extern unsigned int *auStack_50;
extern int fn_8268B8E8();
extern unsigned fn_826BCBA0(void*,char*,unsigned,unsigned,double);


int  fn_82713060(int param_1,unsigned param_2)

{
  unsigned int uVar1;
  unsigned char auStack_50 [64];
  
  uVar1 = fn_826BCBA0((void*)param_1,(char*)auStack_50,0x40,param_2,*(double *)(param_1+0x30));
  fn_8268B8E8(param_1 + 0x38,uVar1);
  return (*(unsigned int *)(param_1 + 0x38) & 0xfffffffc) + 8;
}

