extern int fn_82F64538();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_823F4A58(int *param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned __int64 uVar1;
  char cVar2;
  unsigned int *puVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar1 = 0xffffffff831d7088;
    }
    else {
      uVar1 = (**(int (***)())(*(int *)*param_3 + 4))();
    }
    cVar2 = fn_82F64538(uVar1,0xffffffff831df618);
    if (cVar2 != '\0') {
      puVar3 = (unsigned int *)(*param_3 + 4);
      goto LAB_823f4ac4;
    }
  }
  puVar3 = (unsigned int *)0x0;
LAB_823f4ac4:
  stack_pair_30.first = *puVar3;
  stack_pair_30.second = puVar3[1];
  uStack_28 = puVar3[2];
  (**(int (***)())(*param_1 + 0x10))(param_1,param_2,&stack_pair_30.first);
  return;
}

