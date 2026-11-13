typedef struct Sub_82573D30 {
  char pad[0x18];
  int count;
} Sub_82573D30;

typedef struct Obj_82573D30 {
  char pad0[0x4c];
  int arg;
  char pad50[0x8a8 - 0x50];
  int depth;
  char pad8ac[0xb10 - 0x8ac];
  Sub_82573D30 *sub;
} Obj_82573D30;

extern void fn_8252ACC0(Obj_82573D30 *o, int arg);
extern void fn_825A14E8(Sub_82573D30 *s);

int fn_82573D30(Obj_82573D30 *o)
{
  Sub_82573D30 *s;
  fn_8252ACC0(o, o->arg);
  s = o->sub;
  if (s != 0 && o->depth != 0) {
    if (--o->depth != 0)
      fn_825A14E8(s);
    else
      s->count--;
  }
  return 1;
}
