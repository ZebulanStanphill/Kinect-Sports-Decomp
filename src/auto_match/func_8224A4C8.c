extern unsigned int *auStack_450;
extern int fn_824C1BF8();
extern int fn_8265C9E0();
extern int fn_82F64538();
extern int memcpy();
extern unsigned int lbl_82197B50;


void fn_8224A4C8(int *param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  char cVar4;
  unsigned int *puVar3;
  int iVar5;
  unsigned char auStack_450 [1072];
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar2 = 0xffffffff831d7088;
    }
    else {
      uVar2 = (**(int (***)())(*(int *)*param_3 + 4))();
    }
    cVar4 = fn_82F64538(uVar2,0xffffffff831d7094);
    if (cVar4 != '\0') {
      iVar5 = *param_3 + 4;
      goto LAB_8224a534;
    }
  }
  iVar5 = 0;
LAB_8224a534:
  if (iVar5 == 0) {
    fn_824C1BF8(auStack_450);
    (**(int (***)())(*param_1 + 0x14))(param_1,param_2,auStack_450);
    puVar3 = (unsigned int *)fn_8265C9E0(0x42c);
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      *puVar3 = &lbl_82197B50;
      memcpy(puVar3 + 1,auStack_450,0x428);
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

