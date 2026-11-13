#define true 1
extern int fn_8251F720();
extern int fn_8251FA58();
extern char lbl_821CAB38[];


void fn_825BC908(unsigned int param_1)

{
  unsigned short sVar1;
  unsigned int iVar2;
  
  do {
    if ((param_1 == 0) || (sVar1 = *(short *)(param_1 + 0xc), sVar1 == 0)) {
      return;
    }
    if ((sVar1 == 4) || (sVar1 == 0x10)) {
      iVar2 = param_1 + 0x10;
LAB_825bc978:
      iVar2 = fn_8251F720(iVar2,0);
      if (iVar2 != 0) {
        fn_8251FA58();
      }
    }
    else if ((((sVar1 == 0x11) || (sVar1 == 0x12)) || (sVar1 == 0x13)) || (sVar1 == 0x14)) {
      iVar2 = param_1 + 0x14;
      goto LAB_825bc978;
    }
    param_1 = *(int *)(lbl_821CAB38 + (unsigned int)*(unsigned short *)(param_1 + 0xc) * 4) + param_1;
  } while( true );
}

