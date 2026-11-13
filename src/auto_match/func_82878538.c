extern int fn_8286A1E0();
extern int fn_82878410();
extern unsigned int uStack_40;


unsigned int * fn_82878538(unsigned int *param_1,int param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned char uStack_40;
  
  uVar1 = *(unsigned int *)(param_2 + 4);
  uVar4 = param_3 + 0x30;
  if ((uVar4 & 0xffffffff) != (unsigned __int64)uVar1) {
    lVar3 = param_3 - uVar4;
    do {
      fn_82878410(lVar3 + uVar4,uVar4);
      uVar4 = uVar4 + 0x30;
    } while ((uVar4 & 0xffffffff) != (unsigned __int64)uVar1);
  }
  fn_8286A1E0((unsigned __int64)*(unsigned int *)(param_2 + 4) - 0x30,(unsigned __int64)*(unsigned int *)(param_2 + 4),
                    param_2 + 0xc,uStack_40);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = (int)param_3;
  *(int *)(param_2 + 4) = iVar2 + -0x30;
  return param_1;
}

