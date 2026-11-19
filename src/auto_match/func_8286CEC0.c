extern int fn_8286CE28();


unsigned __int64 fn_8286CEC0(int self)

{
  *(unsigned char *)(self + 4) = 1;
  *(unsigned int *)(self + 0xc) = *(unsigned int *)(self + 8);
  fn_8286CE28();
  return 1;
}

