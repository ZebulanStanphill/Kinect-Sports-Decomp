typedef struct { int first; int second; int third; } Triple;
extern int fn_82BA02A8(Triple *p);
extern int fn_82CE5410(void);
extern int fn_82CEA4B8(Triple *p, int a);
extern int fn_82CEAB00(Triple *p, int a, int b);
extern int fn_82CFFFC8(void *p);
extern int fn_82D00020(void *p, int it);
extern int fn_82D00060(void *p, int it);
extern char *fn_82D002F0(char *out, void *p, int it);
extern int fn_82E19DA0(void *p);
extern int fn_82E1A470(void *p, int v, Triple *t, int n);

void fn_82E1ACB8(void *param_1)
{
  int it;
  int g;
  int v;
  char ok;
  unsigned char buf[4];
  Triple t;

  fn_82E19DA0(buf);
  t.first = 0;
  t.second = 0;
  t.third = -1;
  g = fn_82CE5410();
  fn_82CEAB00(&t, *(int *)(g + 0x10), 0);
  for (it = fn_82CFFFC8(param_1); fn_82D002F0(&ok, param_1, it), ok; it = fn_82D00060(param_1, it)) {
    v = fn_82D00020(param_1, it);
    fn_82E1A470(buf, v, &t, 1);
  }
  g = fn_82CE5410();
  fn_82CEA4B8(&t, *(int *)(g + 0x10));
  fn_82BA02A8(&t);
}
