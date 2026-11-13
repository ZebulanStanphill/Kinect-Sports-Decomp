typedef struct { int a, b, c; } S_82E0F0E0;
typedef struct { int pad[4]; int f10; } G_82E0F0E0;
extern void fn_83082D10(int *);
extern void fn_82E19DA0(void *);
extern G_82E0F0E0 *fn_82CE5410(void);
extern void fn_82CEAB00(S_82E0F0E0 *, int, int);
extern void fn_82E1A470(void *, unsigned int, S_82E0F0E0 *, int);
extern void fn_82CEA4B8(S_82E0F0E0 *, int);
extern void fn_82BA02A8(S_82E0F0E0 *);

void fn_82E0F0E0(unsigned int *param_1)
{
  char o[8];
  S_82E0F0E0 s;
  int i;
  G_82E0F0E0 *g;

  fn_83082D10((int *)param_1);
  fn_82E19DA0(o);
  i = 0;
  s.a = 0;
  s.b = 0;
  s.c = -1;
  g = fn_82CE5410();
  fn_82CEAB00(&s, g->f10, 0);
  while (param_1[i] != 0) {
    fn_82E1A470(o, param_1[i], &s, 1);
    i++;
  }
  g = fn_82CE5410();
  fn_82CEA4B8(&s, g->f10);
  fn_82BA02A8(&s);
}
