extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B4840;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


unsigned int *
fn_82393000(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
             unsigned int *param_5)

{
  unsigned int uVar1;
  char cVar4;
  int iVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  struct { unsigned int first; int second; } stack_pair_70;

  unsigned int uStack_68;
  int iStack_64;
  unsigned char auStack_60 [8];
  unsigned char auStack_58 [8];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (unsigned int *)0x0) {
    iVar2 = param_5[1];
    uVar1 = *param_5;
    uStack_68 = 0;
    iStack_64 = 0;
    iVar5 = 0;
    if (iVar2 != 0) {
      cVar4 = fn_8223AAC0(iVar2);
      if (cVar4 != '\0') {
        iVar5 = iVar2;
        uStack_68 = uVar1;
        iStack_64 = iVar2;
      }
    }
    iVar2 = param_3[1];
    uVar1 = *param_3;
    stack_pair_70.second = 0;
    stack_pair_70.first = 0;
    iVar6 = 0;
    if ((iVar2 != 0) && (cVar4 = fn_8223AAC0(iVar2), cVar4 != '\0')) {
      iVar6 = iVar2;
      stack_pair_70.first = uVar1;
      stack_pair_70.second = iVar2;
    }
    iVar2 = fn_82365BD8(auStack_60,param_4);
    iVar3 = fn_82365BD8(auStack_58,param_2);
    param_1[4] = 0;
    param_1[3] = &lbl_821B4840;
    fn_82365BD8(param_1 + 9,iVar3);
    fn_82365BD8(param_1 + 0xb,&stack_pair_70.first);
    fn_82365BD8(param_1 + 0xd,iVar2);
    fn_82365BD8(param_1 + 0xf,&uStack_68);
    if (*(int *)(iVar3 + 4) != 0) {
      fn_822315A0();
    }
    if (iVar6 != 0) {
      fn_822315A0(iVar6);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
    if (iVar5 != 0) {
      fn_822315A0(iVar5);
    }
  }
  return param_1;
}

