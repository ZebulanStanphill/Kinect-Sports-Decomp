extern int fn_8269D300();
extern int fn_8272C1E0();
extern int fn_8272C480();
extern int fn_8272F9D8();
extern int fn_827A4360();
extern int fn_82F6B030();
extern unsigned int lbl_82011630;


void fn_8272FC48(int *param_1,char param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  char cVar5;
  unsigned short uVar6;
  double dVar7;
  
  uVar2 = (**(int (***)())(*param_1 + 0xa8))();
  if (((uVar2 & 3) != 0) && (iVar1 = param_1[0x28], iVar1 != 0)) {
    *(unsigned char *)(iVar1 + 0x13f) = *(unsigned char *)(iVar1 + 0x13f) | 2;
    fn_8272C480(param_1 + 0x36);
    (**(int (***)())(*param_1 + 0x1ac))
              (param_1,((unsigned __int64)(unsigned int)param_1[0x33] & 0xfffffffc) + 8,
               *(unsigned short *)(param_1 + 0x32) >> 0xc & 1,1);
  }
  param_1[0x23] = param_1[0x23] & 0xfffcffff;
  if ((*(unsigned short *)(param_1 + 0x32) >> 0xe & 1) != 0) {
    *(unsigned short *)(param_1 + 0x32) = *(unsigned short *)(param_1 + 0x32) & 0xbfff;
    uVar3 = (**(int (***)())(*param_1 + 0x40))(param_1);
    fn_8272F9D8(param_1,uVar3);
  }
  if (param_2 == '\0') {
    uVar6 = *(unsigned short *)(param_1 + 0x32) & 0xffbf;
  }
  else {
    fn_8272C1E0(param_1);
    uVar6 = *(unsigned short *)(param_1 + 0x32) | 0x40;
  }
  *(unsigned short *)(param_1 + 0x32) = uVar6;
  if (*(int *)(param_1[0x28] + 0x114) != 0) {
    iVar4 = (**(int (***)())(*param_1 + 0x40))(param_1);
    iVar1 = *(int *)(param_1[0x28] + 0x114);
    cVar5 = fn_8269D300(iVar4,param_1);
    if ((cVar5 != '\0') || ((*(unsigned short *)(iVar1 + 0x68) >> 5 & 1) != 0)) {
      dVar7 = (double)fn_82F6B030(*(unsigned __int64 *)(iVar4 + 0x130));
      fn_827A4360(dVar7 * lbl_82011630,iVar1);
      if ((*(unsigned short *)(iVar1 + 0x68) & 1) == 0) {
        *(unsigned int *)(iVar4 + 0xb00) = *(unsigned int *)(iVar4 + 0xb00) | 0x400;
      }
    }
  }
  return;
}

