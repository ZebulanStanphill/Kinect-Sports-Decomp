extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8255BB98();
extern int fn_8255BFC0();
extern int fn_825BBCA0();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;


unsigned __int64 fn_8255C2E8(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  char cVar5;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  uVar1 = *(unsigned int *)(param_2 + 0xd48);
  piVar4 = (int *)fn_8255BB98(auStack_40,uVar1);
  iVar2 = *piVar4;
  if (iStack_3c != 0) {
    fn_822315A0(iStack_3c);
  }
  if ((iVar2 == 0) || ((param_3 != 0 && ((*(unsigned int *)(param_3 + 0x94) & 0x2000000) == 0)))) {
    uVar3 = 1;
  }
  else if (*(short *)(param_1 + 10) == 0) {
    piVar4 = (int *)fn_8255BB98(auStack_38,uVar1);
    uVar1 = *(unsigned int *)(*piVar4 + 8);
    if (iStack_34 != 0) {
      fn_822315A0(iStack_34);
    }
    cVar5 = fn_828ACCE8(uVar1);
    if ((cVar5 != '\0') && (cVar5 = fn_828AD740(uVar1), cVar5 != '\0')) {
      return 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8255BFC0(*(unsigned int *)(param_2 + 0x2fc));
    uVar3 = fn_825BBCA0(param_2,uVar3);
  }
  return uVar3;
}

