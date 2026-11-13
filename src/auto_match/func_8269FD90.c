extern unsigned int *auStack_30;
extern int fn_826944C8();
extern int fn_8269AEB8();
extern int fn_8269FB58();


unsigned char fn_8269FD90(int *param_1,unsigned __int64 param_2)

{
  unsigned char uVar1;
  int iVar3;
  char cVar4;
  __int64 lVar2;
  unsigned char auStack_30 [4];
  int aiStack_2c [11];
  
  auStack_30[0] = 0xff;
  iVar3 = (**(int (***)())(*param_1 + 0xb0))();
  aiStack_2c[0] = *(int *)(iVar3 + 8);
  *(int *)(aiStack_2c[0] + 8) = *(int *)(aiStack_2c[0] + 8) + 1;
  cVar4 = fn_8269AEB8(param_2,aiStack_2c);
  iVar3 = aiStack_2c[0];
  if (cVar4 != '\0') {
    lVar2 = (**(int (***)())(*param_1 + 0xb0))(param_1);
    fn_8269FB58(lVar2 + 0x2a8,param_2,auStack_30,*(int *)(iVar3 + 0x10) == 0);
  }
  uVar1 = auStack_30[0];
  lVar2 = (unsigned __int64)*(unsigned int *)(iVar3 + 8) - 1;
  *(int *)(iVar3 + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iVar3);
  }
  return uVar1;
}

