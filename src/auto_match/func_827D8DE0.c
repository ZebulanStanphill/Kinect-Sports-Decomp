extern int fn_82231540();
extern int fn_823F2E20();
extern unsigned int uStack_40;


unsigned int * fn_827D8DE0(unsigned int *param_1,int param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned char uStack_40;
  
  uVar1 = *(unsigned int *)(param_2 + 4);
  uVar4 = param_3 + 8;
  if ((uVar4 & 0xffffffff) != (unsigned __int64)uVar1) {
    lVar3 = param_3 - uVar4;
    do {
      fn_823F2E20(lVar3 + uVar4,uVar4);
      uVar4 = uVar4 + 8;
    } while ((uVar4 & 0xffffffff) != (unsigned __int64)uVar1);
  }
  fn_82231540((unsigned __int64)*(unsigned int *)(param_2 + 4) - 8,(unsigned __int64)*(unsigned int *)(param_2 + 4),
                    param_2 + 0xc,uStack_40);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = (int)param_3;
  *(int *)(param_2 + 4) = iVar2 + -8;
  return param_1;
}

