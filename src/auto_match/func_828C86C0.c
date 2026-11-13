extern void fn_8223C478(unsigned int, unsigned int, unsigned int);
extern void fn_828E9DB8(unsigned int, unsigned int, unsigned int);


static void write_bits(unsigned int w, unsigned int value, unsigned int bits) {
fn_8223C478(w,bits,0);
fn_828E9DB8(w,value,bits);
}
void fn_828C86C0(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  write_bits(param_2,*(unsigned int *)(param_1 + 0x84),2);
  write_bits(param_2,*(unsigned int *)(param_1 + 0x80),6);
  write_bits(param_2,*(unsigned int *)(param_1 + 0x88),0x10);
  return;
}

