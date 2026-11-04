typedef struct Value_82294070 {
  int ctx;
  int type;
  union { double d; int i; unsigned char b; } v;
} Value_82294070;

extern void fn_82273CD8(Value_82294070 *, int);
extern void fn_82273C88(Value_82294070 *);
extern void fn_82672C20(int, const char *, Value_82294070 *, int);


void fn_82294070(char *o, int idx, int flag)
{
  char *e = o + idx * 0x1c;
  if (*(int *)(e + 0x3c) != flag) {
    int *ctx = *(int **)(o + 0xc);
    Value_82294070 v[2];
    Value_82294070 *p;
    int i;
    double d;
    for (i = 0; i < 2; i++) {
      v[i].ctx = 0;
      v[i].type = 0;
    }
    fn_82273CD8(&v[0], 3);
    d = (double)(idx + 1);
    v[0].v.d = d;
    fn_82273CD8(&v[1], 2);
    v[1].v.b = flag != 0;
    fn_82672C20(*ctx, "_root.mainCtrl.setIsKO", v, 2);
    p = v + 2;
    i = 1;
    do {
      p--;
      fn_82273C88(p);
    } while (--i >= 0);
    *(int *)(e + 0x3c) = flag;
  }
}
