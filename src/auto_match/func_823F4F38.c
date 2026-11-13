extern unsigned int *auStack_60;
extern int fn_82F64538();
extern unsigned int uStack_68;


void fn_823F4F38(int *param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned __int64 uVar1;
  char cVar2;
  int iVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  __int64 lVar6;
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [48];
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar1 = 0xffffffff831d7088;
    }
    else {
      uVar1 = (**(int (***)())(*(int *)*param_3 + 4))();
    }
    cVar2 = fn_82F64538(uVar1,0xffffffff831df684);
    if (cVar2 != '\0') {
      iVar3 = *param_3 + 0x10;
      goto LAB_823f4fa4;
    }
  }
  iVar3 = 0;
LAB_823f4fa4:
  puVar5 = &uStack_68;
  puVar4 = (unsigned __int64 *)(iVar3 + -8);
  lVar6 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  (**(int (***)())(*param_1 + 0x10))(param_1,param_2,auStack_60);
  return;
}

