extern int fn_8265C9E0();
extern int fn_82F64538();
extern unsigned int lbl_82197B2C;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82249D90(int *param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  char cVar4;
  unsigned int *puVar3;
  int iVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar2 = 0xffffffff831d7088;
    }
    else {
      uVar2 = (**(int (***)())(*(int *)*param_3 + 4))();
    }
    cVar4 = fn_82F64538(uVar2,0xffffffff831d7284);
    if (cVar4 != '\0') {
      iVar5 = *param_3 + 4;
      goto LAB_82249dfc;
    }
  }
  iVar5 = 0;
LAB_82249dfc:
  if (iVar5 == 0) {
    (**(int (***)())(*param_1 + 0x14))(param_1,param_2,&stack_pair_30.first);
    puVar3 = (unsigned int *)fn_8265C9E0(0x10);
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      *puVar3 = &lbl_82197B2C;
      puVar3[1] = stack_pair_30.first;
      puVar3[2] = stack_pair_30.second;
      puVar3[3] = uStack_28;
    }
    puVar1 = (unsigned int *)*param_3;
    *param_3 = (int)puVar3;
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
  }
  else {
    (**(int (***)())(*param_1 + 0x14))(param_1,param_2);
  }
  return;
}

