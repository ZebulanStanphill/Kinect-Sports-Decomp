typedef struct Lock_82A50740 { struct { int pad[2]; void (*lock)(struct Lock_82A50740 *); int pad2[2]; void (*unlock)(struct Lock_82A50740 *); } *vt; } Lock_82A50740;
typedef struct { char pad[0x2c]; Lock_82A50740 lk; } Inner_82A50740;
typedef struct { char pad[0x30]; Inner_82A50740 *in; } Obj_82A50740;
typedef struct { int pad[1]; int a; int b; int pad2[2]; void *data; } Buf_82A50740;
typedef struct { int pad[2]; Buf_82A50740 *buf; } Res_82A50740;
extern Res_82A50740 *fn_82A50350(Obj_82A50740 *, int);
extern void *memcpy(void *, const void *, unsigned);

void fn_82A50740(Obj_82A50740 *o, int a, int b, int c, void *dst)
{
  Res_82A50740 *r;
  o->in->lk.vt->lock(&o->in->lk);
  r = fn_82A50350(o, a);
  memcpy(dst, r->buf->data, r->buf->b * r->buf->a * 4);
  o->in->lk.vt->unlock(&o->in->lk);
}
