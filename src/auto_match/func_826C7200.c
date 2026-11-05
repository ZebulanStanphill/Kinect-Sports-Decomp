typedef struct { unsigned char b[32]; } Bytes_826C7200;
typedef struct Rc_826C7200 { int pad; int count; } Rc_826C7200;
typedef struct {
  Rc_826C7200 *rc;
  Bytes_826C7200 bytes;
  float f[7];
  int i40;
  int i44;
  unsigned short s48;
  unsigned char c4a;
  unsigned char c4b;
} Obj_826C7200;

Obj_826C7200 *fn_826C7200(Obj_826C7200 *d, Obj_826C7200 *s)
{
  Rc_826C7200 *rc = s->rc;
  if (rc != 0)
    rc->count = rc->count + 1;
  d->rc = s->rc;
  d->bytes = s->bytes;
  d->f[0] = s->f[0];
  d->f[1] = s->f[1];
  d->f[2] = s->f[2];
  d->f[3] = s->f[3];
  d->f[4] = s->f[4];
  d->f[5] = s->f[5];
  d->f[6] = s->f[6];
  d->i40 = s->i40;
  d->i44 = s->i44;
  d->s48 = s->s48;
  d->c4a = s->c4a;
  d->c4b = s->c4b;
  return d;
}
