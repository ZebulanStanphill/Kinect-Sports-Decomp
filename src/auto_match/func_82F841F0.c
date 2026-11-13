extern void fn_82A1E228(void *p);
extern unsigned int fn_82A1BB18(void);
extern unsigned int fn_82A1F2F8(void);
extern void fn_82A1E968(void *p);
extern unsigned int lbl_831BB8F0;
extern unsigned int lbl_831BB8F4;

typedef union {
  unsigned __int64 q;
  unsigned int w[2];
} Split64_82F841F0;

void fn_82F841F0(void)
{
  Split64_82F841F0 t;
  Split64_82F841F0 pc;
  unsigned int c;

  t.q = 0;
  if (lbl_831BB8F0 != 0xbb40e64e) {
    lbl_831BB8F4 = ~lbl_831BB8F0;
    return;
  }
  fn_82A1E228(&t);
  c = t.w[1] ^ t.w[0];
  c ^= fn_82A1BB18();
  c ^= fn_82A1F2F8();
  fn_82A1E968(&pc);
  c ^= pc.w[1] ^ pc.w[0];
  if (c == 0xbb40e64e) {
    c = 0xbb40e64f;
  }
  lbl_831BB8F0 = c;
  lbl_831BB8F4 = ~c;
}
