typedef struct { unsigned v[8]; } Blk_829F9230;
typedef struct {
  unsigned w0, w1, w2, w3, w4, w5, w6, w7;
  Blk_829F9230 arr;
} Cmd_829F9230;
typedef struct { char pad[0x6c]; unsigned size; Cmd_829F9230 *cmd; } Obj_829F9230;
extern void *memcpy(void *, const void *, unsigned);
extern void fn_8264D6C0(void *, void *, int);

void fn_829F9230(Obj_829F9230 *o, unsigned a, unsigned b, Blk_829F9230 *src, unsigned c, unsigned r8, unsigned r9, unsigned r10, unsigned g, unsigned h)
{
  Cmd_829F9230 *p = o->cmd;
  p->w4 = a;
  p->w6 = b;
  memcpy(&p->arr, src, 0x20);
  p->w5 = c;
  p->w0 = r8;
  p->w1 = r9;
  p->w2 = g;
  p->w3 = h;
  p->w7 = r10;
  fn_8264D6C0(o->cmd, (char *)o->cmd + (o->size & 0x3fffffc), 1);
}
