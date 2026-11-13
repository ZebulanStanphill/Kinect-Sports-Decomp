extern unsigned int *auStack_30;
extern int fn_82FA5190();
extern int fn_82FB36E8();
extern int fn_82FED500();
extern int fn_82FEF800();
extern int fn_830224E8();
extern int fn_83024470();
extern int fn_830245A0();
extern int fn_830245B0();
extern int fn_83024AD8();
extern int fn_83024E30();
extern unsigned int lbl_831BC770;
extern unsigned int lbl_831BC774;


int fn_82FEDA18(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  unsigned int auStack_30;
  
  for (puVar1 = lbl_831BC774; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)*puVar1) {
    if ((unsigned __int64)(unsigned int)puVar1[1] == (param_1 & 0xffffffff)) {
      if (puVar1 + 2 != (int *)0x0) {
        return puVar1[2];
      }
      break;
    }
  }
  fn_82FEF800(&auStack_30);
  iVar4 = fn_82FED500(param_1,auStack_30);
  if (iVar4 != 0) {
    iVar5 = fn_830245B0(iVar4,param_1);
    if (iVar5 == 1) {
      fn_83024E30(iVar4);
      fn_830245A0(iVar4);
    }
    else {
      fn_83024AD8();
      puVar3 = lbl_831BC774;
      puVar1 = (unsigned int *)0x0;
      while (puVar2 = puVar3, puVar2 != (unsigned int *)0x0) {
        if (puVar2[1] == *(int *)(iVar4 + 0x16c)) {
          fn_82FB36E8(0xffffffff831bc774,puVar2,puVar1);
          break;
        }
        puVar1 = puVar2;
        puVar3 = (unsigned int *)*puVar2;
      }
      fn_83024470(iVar4);
      fn_830224E8(iVar4 + 0x80);
      fn_82FA5190(lbl_831BC770,iVar4);
      iVar4 = 0;
    }
  }
  return iVar4;
}

