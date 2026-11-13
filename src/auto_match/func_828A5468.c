extern int fn_8265C9E0();
extern int fn_828A0960();
extern int fn_828A2AE8();
extern int fn_828A4ED0();
extern int fn_828BE968();


unsigned int  fn_828A5468(unsigned int param_1,unsigned int param_2)

{
  char cVar1;
  unsigned int iVar4;
  int *piVar5;
  unsigned int uVar2;
  unsigned int uVar3;
  
  iVar4 = fn_828BE968(param_2);
  if (iVar4 == 4) {
    iVar4 = fn_8265C9E0(200);
    piVar5 = iVar4 ? (int *)fn_828A2AE8(iVar4) : 0;
    (*(int (**)())(*piVar5 + 0x10))(piVar5,param_2);
    iVar4 = piVar5[0x29];
    cVar1 = *(char *)(piVar5 + 0x20);
    (*(int (**)())*piVar5)(piVar5,1);
    if ((cVar1 != '\0') && (uVar2 = fn_828A4ED0(iVar4), (uVar2 & 0xffffffff) != 0)) {
      uVar3 = fn_828A0960(uVar2,param_1);
      return uVar3;
    }
  }
  return 0;
}

