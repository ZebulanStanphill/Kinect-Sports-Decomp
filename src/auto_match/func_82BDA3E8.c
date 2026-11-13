typedef struct S_82BDA3E8 S_82BDA3E8;
typedef struct { int pad[9]; int (*f24)(void *); } VT_82BDA3E8;
typedef struct { VT_82BDA3E8 *vt; } Obj_82BDA3E8;
struct S_82BDA3E8 {
  int m0; int m4; int m8;
  Obj_82BDA3E8 *objs[2];
  unsigned count;
  int m18[7];
  int flag;
  int m38;
  unsigned m3c;
};
extern int fn_82A1F2F8(void);

int fn_82BDA3E8(S_82BDA3E8 *s)
{
  unsigned i;
  s->flag = 0;
  for (i = 0; i < s->count; i++) {
    if (s->objs[i]->vt->f24(s->objs[i]) == 1) {
      s->flag = 1;
    }
  }
  if (s->flag != 0) {
    s->m38 = 200;
  } else if (s->m38 > 0) {
    if (s->m3c != 0) {
      { int c = fn_82A1F2F8(); s->m38 = (s->m3c - c) + s->m38; }
    }
    s->flag = 1;
  }
  s->m3c = fn_82A1F2F8();
  return s->flag;
}
