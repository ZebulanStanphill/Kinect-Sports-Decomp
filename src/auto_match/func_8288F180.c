extern unsigned int *auStack_20;
extern int fn_8240D928();
extern int fn_8288DF40();
extern int fn_8289F350();


void fn_8288F180(int param_1)

{
  unsigned int iVar2;
  int uVar1;
  unsigned int *puVar3;
  unsigned char auStack_20 [16];
  
  iVar2 = fn_8289F350(*(unsigned int *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar1 = fn_8240D928();
    puVar3 = (unsigned int *)fn_8288DF40(auStack_20,param_1 + 0x3c,uVar1);
    *(unsigned int *)*puVar3 = 1 << puVar3[1] | *(unsigned int *)*puVar3;
  }
  return;
}

