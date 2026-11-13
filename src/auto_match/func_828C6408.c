extern unsigned int *auStack_1c;
extern int fn_8289F160();
extern int fn_828C6260();
extern unsigned int uStack_20;


void fn_828C6408(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int uStack_20;
  unsigned char auStack_1c [4];
  
  uStack_20 = *param_2;
  piVar1 = (int *)fn_8289F160(auStack_1c,param_1 + 0xc,&uStack_20);
  fn_828C6260(param_1,*(int *)(*piVar1 + 0x10),param_3,
                *(int *)(*piVar1 + 0x10) == *(int *)(param_1 + 4));
  return;
}

