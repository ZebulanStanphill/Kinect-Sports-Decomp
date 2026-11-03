struct Sub_826BF7B0 { void *p; void *q; unsigned char flag; };
struct Buf_826BF7B0 { unsigned char b0; char pad[15]; };

class Iface_826BF7B0 {
public:
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual void v4();
  virtual void v5();
  virtual void v6();
  virtual void v7();
  virtual void v8();
  virtual void v9();
  virtual void Run(unsigned int *a, unsigned int b, Buf_826BF7B0 *c, unsigned char *d);
};

extern "C" {
Sub_826BF7B0 *fn_82696B20(Sub_826BF7B0 *, int, int);
int fn_826C3768(int, Sub_826BF7B0 *);
int fn_826824B0(void *);
int fn_82696330(Buf_826BF7B0 *);

int fn_826BF7B0(int param_1, int param_2, unsigned int *param_3, int param_4)
{
  unsigned char a;
  Sub_826BF7B0 s;
  Buf_826BF7B0 buf;

  fn_826C3768(param_1 + 4, fn_82696B20(&s, param_4, 0));
  if ((s.flag & 2) == 0 && s.p != 0) {
    fn_826824B0(s.p);
  }
  s.p = 0;
  if ((s.flag & 1) == 0 && s.q != 0) {
    fn_826824B0(s.q);
  }
  s.q = 0;
  a = 3;
  buf.b0 = 10;
  ((Iface_826BF7B0 *)(param_2 + 0x10))->Run(param_3, *param_3 + 0x138, &buf, &a);
  fn_82696330(&buf);
  return 1;
}
}
