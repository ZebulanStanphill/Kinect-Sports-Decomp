extern void *fn_82930318(int);
extern void *fn_829304E0(void *, void *, int, int);
extern void *fn_82987E48(void *, void *, void *);

typedef struct { int pad[6]; int f18; } S_82988088;

void *fn_82988088(void *param_1, void *param_2, S_82988088 *param_3)
{
  void *mem;
  int *obj;

  mem = fn_82930318(0x14);
  if (mem != 0) {
    obj = (int *)fn_829304E0(mem, param_3, 0, param_3->f18);
  } else {
    obj = 0;
  }
  if (obj == 0) {
    return 0;
  }
  {
    void *r = fn_82987E48(param_1, param_2, obj);
    obj[2] = 0;
    return r;
  }
}
