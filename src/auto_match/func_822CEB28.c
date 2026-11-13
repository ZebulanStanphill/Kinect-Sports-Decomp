extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822C72E0();
extern int fn_822CEA78();
extern int fn_822D5D20();
extern int fn_82365BD8();
extern int fn_8288B760();


unsigned __int64 fn_822CEB28(int param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  char cVar4;
  unsigned int *puVar5;
  unsigned char auStack_40 [16];
  
  puVar5 = param_3;
  if (0xf < (unsigned int)param_3[5]) {
    puVar5 = (unsigned int *)*param_3;
  }
  iVar3 = fn_822C72E0(*(unsigned int *)(*(int *)(param_1 + 0x114) + 0x20),puVar5);
  if (iVar3 == 0) {
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82365BD8(auStack_40,param_2);
    fn_822CEA78(param_1,uVar2,param_3,param_4);
    iVar3 = *(int *)(param_1 + 0x168);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c0) + 0x84);
    if (((iVar3 != 0) && (cVar4 = fn_8288B760(iVar3), cVar4 != '\0')) && (iVar1 != 0)) {
      fn_822D5D20(iVar3,*(unsigned int *)(*param_2 + 0x217c),param_3);
    }
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 1;
  }
  return uVar2;
}

