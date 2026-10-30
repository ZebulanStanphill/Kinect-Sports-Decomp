typedef struct Buf_8273BDD8 { char hdr[0xc]; int result; char rest[0x2f0]; } Buf_8273BDD8;
extern void fn_826F29B8(Buf_8273BDD8 *b, int x);
extern void fn_826F2AD8(Buf_8273BDD8 *b, int x);
extern void fn_826AA628(Buf_8273BDD8 *b, int x);
extern void fn_8269DA90(Buf_8273BDD8 *b, int x);
extern void fn_826F1A90(Buf_8273BDD8 *b);
extern void fn_826F2588(Buf_8273BDD8 *b);

int fn_8273BDD8(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11)
{
  Buf_8273BDD8 b;
  fn_826F29B8(&b, p1);
  fn_826F2AD8(&b, p2);
  fn_826AA628(&b, p3);
  fn_826AA628(&b, p4);
  fn_8269DA90(&b, p5);
  fn_8269DA90(&b, p6);
  fn_8269DA90(&b, p7);
  fn_8269DA90(&b, p8);
  fn_8269DA90(&b, p9);
  fn_8269DA90(&b, p10);
  fn_8269DA90(&b, p11);
  fn_826F1A90(&b);
  {
    int r = b.result;
    fn_826F2588(&b);
    return r;
  }
}
