extern int fn_8265C9E0();
extern int fn_827F4730();
extern int fn_827F5AF8();
extern unsigned int lbl_821AD588;


unsigned int * fn_8234D5A0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0xf4);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821AD588;
    puVar2[2] = 1;
    uVar1 = fn_827F4730(0xe8,puVar2 + 3);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_827F5AF8(uVar1,param_2);
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 3;
  return param_1;
}

