typedef struct Buf { unsigned int base; int a, b; int c3; unsigned int pos; int c5; unsigned int d; unsigned int c; int next; } Buf;
typedef struct VObj { void (**vt)(struct VObj *, int, int); } VObj;
typedef struct Ctx { char p0[0x84]; char sub[0xb8 - 0x84]; Buf *buf; unsigned int cur; int next; char p1[0x108 - 0xc4]; VObj *obj; } Ctx;
extern Buf *fn_82A776F0(void *p);

void fn_82A77D58(Ctx *c)
{
  Buf *b, *b2;
  b = fn_82A776F0(c->sub);
  c->buf = b;
  if (b != 0) {
    if (c->obj != 0)
      c->obj->vt[8](c->obj, b->a, b->b);
    b = c->buf;
    b2 = c->buf;
    c->cur = b2->base + b->pos;
    c->next = (b->base + b->pos < b->base + b->d + b->c) ? b->next : 0;
  }
}
