extern unsigned int *auStack_10;
extern int fn_82A31F28();


unsigned int fn_82A1F3F0(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int auStack_10;

  iVar1 = XexLoadImage(param_1,9,0,&auStack_10);
  if (iVar1 < 0) {
    fn_82A31F28();
    auStack_10 = 0;
  }
  return auStack_10;
}
