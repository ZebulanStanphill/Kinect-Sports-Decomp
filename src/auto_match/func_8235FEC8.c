extern unsigned int *auStack_20;
extern int fn_82293448();
extern int fn_82520158();
extern int fn_8265C9E0();


unsigned int * fn_8235FEC8(unsigned int *param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned char auStack_20 [8];
  
  fn_82520158(0xffffffff821b2700,auStack_20,0);
  uVar1 = fn_8265C9E0(0x1858);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82293448(uVar1,param_2,auStack_20,param_2 + 0xd30);
  }
  *param_1 = uVar2;
  return param_1;
}

