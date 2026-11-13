extern int fn_82424AD0();
extern int fn_8250E250();
extern int fn_827F3EB0();
extern int fn_827F5AF8();
extern unsigned int lbl_821C2378;


unsigned int * fn_8250DA48(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  char cVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  
  fn_827F5AF8();
  *param_1 = &lbl_821C2378;
  uVar4 = fn_827F3EB0(*(unsigned int *)(param_2 + 4));
  param_1[0x3a] = 0;
  piVar7 = param_1 + 0x3a;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  cVar5 = fn_82424AD0(piVar7,uVar4);
  if (cVar5 != '\0') {
    iVar2 = *piVar7;
    if ((uVar4 & 0xffffffff) != 0) {
      puVar6 = (unsigned int *)(iVar2 + -4);
      uVar8 = uVar4;
      uVar3 = uVar4 & 0xffffffff;
      while (uVar3 != 0) {
        puVar6 = puVar6 + 1;
        *puVar6 = 0x3f800000;
        uVar8 = uVar8 - 1;
        uVar3 = uVar8;
      }
    }
    param_1[0x3b] = (int)((uVar4 & 0xffffffff) << 2) + iVar2;
  }
  fn_8250E250(param_1 + 0x3e,piVar7);
  param_1[0x42] = *(unsigned int *)(param_2 + 0x30);
  uVar1 = *(unsigned int *)(param_2 + 0x30);
  param_1[0x44] = 0;
  param_1[0x43] = uVar1;
  param_1[0x45] = 0;
  return param_1;
}

