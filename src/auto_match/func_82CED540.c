extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CED330();
extern unsigned int lbl_8323B430;


unsigned int * fn_82CED540(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  uVar6 = lbl_8323B430;
  uVar5 = (unsigned __int64)lbl_8323B430;
  uVar2 = lbl_8323B430 & 0xfffffffe;
  *param_1 = lbl_8323B430;
  uVar1 = *param_2;
  uVar3 = uVar1 & 0xfffffffe;
  if (uVar2 != uVar3) {
    if ((uVar6 & 1) == 1) {
      iVar4 = fn_82CE5410();
      fn_82CE5338(*(unsigned int *)(iVar4 + 0x10),uVar5 - 1);
      uVar6 = lbl_8323B430;
    }
    if ((uVar1 & 0xfffffffe) != 0) {
      iVar4 = fn_82CED330(uVar3);
      uVar6 = iVar4 + 1;
    }
    *param_1 = uVar6;
  }
  return param_1;
}

