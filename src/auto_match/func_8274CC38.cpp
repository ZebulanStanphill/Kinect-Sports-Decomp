class Obj_8274CC38 {
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
  virtual void f28(unsigned *, int **, char *, char *);
  virtual void v11();
  virtual void v12();
  virtual void f34(unsigned *, int);
};
extern "C" {
int fn_826B14D8(unsigned, int);
void fn_82681728(int **, unsigned, char *);
void fn_826944C8(int *);
void fn_82696330(char *);
extern char lbl_8200EAF0[];
extern char lbl_8200EAE8[];

void fn_8274CC38(int param_1, int param_2)
{
  unsigned *p = (unsigned *)(param_2 + 0x78);
  Obj_8274CC38 *o;
  char s1;
  char s2;
  int *r1;
  int *r2;
  char b1[16];
  char b2[16];
  int *r;
  int v = fn_826B14D8(*p, 0x1e);
  o = (Obj_8274CC38 *)(param_1 + 0x10);
  o->f34(p, v);
  s1 = 4;
  b1[0] = 10;
  fn_82681728(&r1, *p + 0x254, lbl_8200EAF0);
  o->f28(p, &r1, b1, &s1);
  r = r1;
  if (--r[2] == 0) fn_826944C8(r);
  fn_82696330(b1);
  s2 = 4;
  b2[0] = 10;
  fn_82681728(&r2, *p + 0x254, lbl_8200EAE8);
  o->f28(p, &r2, b2, &s2);
  r = r2;
  if (--r[2] == 0) fn_826944C8(r);
  fn_82696330(b2);
}
}
