typedef struct { unsigned __int64 q[4]; } Q32_829309D8;
typedef struct {
  void *vt;
  int a, b, c;
  Q32_829309D8 data;
} Obj_829309D8;
typedef struct { char pad[0x10]; Q32_829309D8 data; } Src_829309D8;
extern int *fn_82934160();
extern Obj_829309D8 *fn_829301D0(int, int, int);
extern char lbl_8202F0EC[];

void fn_829309D8(Src_829309D8 *s)
{
  Obj_829309D8 *p;
  p = fn_829301D0(*fn_82934160(), 0x30, 0x10);
  if (p != 0) {
    p->a = 3;
    p->vt = lbl_8202F0EC;
    p->b = 0;
    p->c = 0;
  } else {
    p = 0;
  }
  if (p != 0) {
    Q32_829309D8 *d = &p->data;
    Q32_829309D8 *q = &s->data;
    *d = *q;
  }
}
