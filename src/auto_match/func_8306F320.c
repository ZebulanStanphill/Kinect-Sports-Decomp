typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
extern unsigned char fn_8306F250(__vector4, float);
extern double lbl_82021544;
extern unsigned char lbl_831BCB98;


unsigned int fn_8306F320(unsigned __int64 param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned char cVar2;
  
  iVar1 = (param_3 + 0x58) * 4;
  if (((*(int *)(iVar1 + param_2) == 2) && (*(int *)(&lbl_831BCB98 + param_3 * 0xc) != 0)) &&
     (cVar2 = fn_8306F250(*(__vector4 *)(param_2+(param_3+2)*16),0.01f), cVar2 != '\0')) {
    return 1;
  }
  return *(unsigned int *)(iVar1 + param_2);
}

