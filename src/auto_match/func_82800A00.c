extern int fn_827F7210();
extern int fn_8280ACD8();


void fn_82800A00(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = fn_827F7210(param_1);
  if ((uVar1 & 0xffff) != 0) {
    uVar2 = 0;
    do {
      fn_8280ACD8(uVar2 * 0x40 + *(unsigned int *)(param_1 + 0x10));
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < (uVar1 & 0xffff));
  }
  return;
}

