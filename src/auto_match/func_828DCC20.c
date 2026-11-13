extern int fn_8223C478();
extern int fn_8236D498();
extern int fn_828EA2D8();


void fn_828DCC20(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88);
  if (uVar2 != *(unsigned int *)(param_1 + 0x8c)) {
    do {
      uVar1 = fn_8236D498(uVar2);
      fn_8223C478(param_2,0x150,0);
      fn_828EA2D8(param_2,uVar1,0x2a);
      uVar2 = uVar2 + 0x34;
    } while ((uVar2 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x8c));
  }
  return;
}

