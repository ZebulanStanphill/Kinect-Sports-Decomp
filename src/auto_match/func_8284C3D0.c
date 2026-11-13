extern int fn_8265CA20();
extern int fn_8284C1F8();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;


int fn_8284C3D0(int param_1,unsigned int param_2)

{
  int iStack00000014;
  unsigned int uStack0000001c;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  fn_8284C1F8(param_1);
  fn_8265CA20(*(unsigned int *)(iStack00000014 + 4));
  if ((uStack0000001c & 1) != 0) {
    fn_8265CA20(iStack00000014);
  }
  return iStack00000014;
}

