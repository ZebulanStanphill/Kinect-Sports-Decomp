typedef struct Ref_82469C10 { int a; void *ref; } Ref_82469C10;
typedef struct Pair_82469C10 { int first; int second; void *buf; } Pair_82469C10;
extern int fn_822315A0(void *);
extern int fn_82273C88();
extern int fn_82273CD8();
extern int *fn_82279C58();
extern int fn_8266F600();
extern int fn_82672C20();

void fn_82469C10(int param_1, unsigned param_2)
{
  int *p;
  Ref_82469C10 r1;
  Ref_82469C10 r2;
  Pair_82469C10 pr;
  char buf[40];

  if (param_2 != 0) {
    p = fn_82279C58(&r1, param_1);
    fn_8266F600(*p, param_2, buf, 0x20);
    if (r1.ref != 0) {
      fn_822315A0(r1.ref);
    }
    pr.first = 0;
    pr.second = 0;
    fn_82273CD8(&pr, 4);
    pr.buf = buf;
    p = fn_82279C58(&r2, param_1);
    fn_82672C20(*p, "_root.SetRedIcon", &pr, 1);
    if (r2.ref != 0) {
      fn_822315A0(r2.ref);
    }
    fn_82273C88(&pr);
  }
}
