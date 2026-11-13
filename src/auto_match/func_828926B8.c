extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_8240D928();
extern int fn_8288E0C8();
extern int fn_82891180();
extern int fn_8289D8D0();
extern int fn_828A12E8();
extern int fn_828B55F0();
extern int fn_828B55F8();
extern int fn_828B5600();
extern int fn_828B5630();
extern unsigned int uStack_3c;


void fn_828926B8(int param_1,unsigned __int64 param_2)

{
  unsigned int iVar2;
  int iVar3;
  unsigned short uVar4;
  int lVar1;
  unsigned int *puVar5;
  int iVar6;
  unsigned short auStack_40;
  unsigned int uStack_3c;
  unsigned char auStack_38 [8];
  
  iVar6 = param_1 + 0x14;
  iVar2 = fn_828B55F0(iVar6);
  lVar1 = *(unsigned int *)(param_1 + 0x10);
  iVar3 = fn_8240D928(fn_8289D8D0(lVar1));
  if ((iVar2 == iVar3) && (*(char *)(param_1 + 0x1c) == '\0')) {
    auStack_40 = fn_828B5600(iVar6);
    uVar4 = fn_828B55F8(iVar6);
    lVar1 = fn_828A12E8(param_2);
    uStack_3c = uVar4 & 0xffff;
    puVar5 = (unsigned int *)fn_8288E0C8(auStack_38,lVar1 + 0x7c,&uStack_3c);
    fn_82891180((unsigned __int64)*puVar5 + 0x10,&auStack_40);
  }
  fn_828B5630(iVar6);
  return;
}

