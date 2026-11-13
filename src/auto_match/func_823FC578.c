extern unsigned char fn_8223AAC0();
extern void *fn_82365BD8();
extern int fn_823FD508();
extern unsigned int lbl_821AD588;


unsigned int *
fn_823FC578(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int iVar1;
  unsigned int uVar2;
  unsigned char cVar7;
  struct { unsigned int first; int second; } stack_pair_70;

  unsigned char auStack_68 [8];
  unsigned char auStack_60 [8];
  unsigned char auStack_58 [8];
  unsigned char auStack_50 [8];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (unsigned int *)0x0) {
    iVar1 = param_2[1];
    uVar2 = *param_2;
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    if ((iVar1 != 0) && (cVar7 = fn_8223AAC0(iVar1), cVar7 != '\0')) {
      stack_pair_70.second = iVar1;
      stack_pair_70.first = uVar2;
    }
    fn_823FD508(param_1 + 3,&stack_pair_70.first,fn_82365BD8(auStack_50,param_3),
                fn_82365BD8(auStack_58,param_4),fn_82365BD8(auStack_60,param_5),
                fn_82365BD8(auStack_68,param_6));
  }
  return param_1;
}

