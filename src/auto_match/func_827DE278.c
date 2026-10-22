typedef unsigned int U32;
typedef unsigned char U8;
typedef unsigned __int64 U64;
extern int fn_827DE1B0();
extern int fn_82811400();
extern int memcpy();

typedef struct { U32 id; U8 data[0x18]; } Blob;

U64 fn_827DE278(U64 param_1, U32 *param_2)
{
  Blob b;

  fn_82811400(b.data, 0x10);
  b.id = *param_2;
  memcpy(b.data, (U8 *)(param_2 + 1), 0x18);
  fn_827DE1B0(param_1, &b);
  return param_1;
}
