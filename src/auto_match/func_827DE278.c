extern int fn_827DE1B0();
extern int fn_82811400();
extern int memcpy();

typedef struct { unsigned int id; unsigned char data[0x18]; } Blob;

unsigned __int64 fn_827DE278(unsigned __int64 param_1, unsigned int *param_2)
{
  Blob b;

  fn_82811400(b.data, 0x10);
  b.id = *param_2;
  memcpy(b.data, (unsigned char *)(param_2 + 1), 0x18);
  fn_827DE1B0(param_1, &b);
  return param_1;
}
