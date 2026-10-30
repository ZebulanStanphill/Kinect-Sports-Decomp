typedef struct Out_82E32108 {
  int pad[4];
  int f10;
  unsigned int f14;
  int f18;
} Out_82E32108;
typedef struct Buf_82E32108 {
  int pad0[0x2e];
  int *data;
  int pad1[6];
  int flag;
} Buf_82E32108;
typedef struct Ctx_82E32108 {
  int pad[0x2b];
  Buf_82E32108 *buf;
} Ctx_82E32108;
typedef struct Reader_82E32108 {
  Out_82E32108 *out;
  int pad[0x41cd];
  int pos;
} Reader_82E32108;

int fn_82E32108(Reader_82E32108 *r, Ctx_82E32108 *c)
{
  Buf_82E32108 *b = c->buf;
  Out_82E32108 *o = r->out;
  int *pos;
  int n;
  int end;
  if (b->flag == 0) {
    r->pos = b->data[-1];
  }
  pos = &r->pos;
  n = *pos;
  end = b->data[-1];
  if (n == end) {
    o->f10 = 0;
  } else if (n < end) {
    o->f10 = b->data[n];
    o->f14 = (unsigned int)b->data[*pos + 1] & 0x7fffffff;
    o->f18 = ((unsigned int)b->data[*pos + 1] >> 31) - 1;
    *pos = *pos + 2;
  }
  return 0;
}
