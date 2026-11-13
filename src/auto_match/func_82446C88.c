extern unsigned int *auStack_30;
extern int fn_823BE2A8();
extern int fn_82F64538();
extern unsigned int lbl_821B9B9C;


void fn_82446C88(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int (**pcVar1)();
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  char cVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char ** appuStack_1d0;
  unsigned char auStack_30 [48];
  
  if (param_3 != (unsigned int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar4 = 0xffffffff831d7088;
    }
    else {
      uVar4 = (**(int (***)())(*(int *)*param_3 + 4))();
    }
    cVar5 = fn_82F64538(uVar4,0xffffffff831e4e90);
    if (cVar5 != '\0') {
      lVar6 = (unsigned __int64)*param_3 + 0x10;
      goto LAB_82446cf4;
    }
  }
  lVar6 = 0;
LAB_82446cf4:
  fn_823BE2A8(&appuStack_1d0,lVar6);
  appuStack_1d0 = &lbl_821B9B9C;
  puVar2 = (unsigned int *)((int)lVar6 + 0x1a0U & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  pcVar1 = *(int (***)())(*param_1 + 0x10);
  puVar3 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  (*pcVar1)(param_1,param_2,&appuStack_1d0);
  return;
}

