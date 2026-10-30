typedef struct {
  char *data;
  int size;
  unsigned int cap;
  char buf[4];
} Sub_82D2DA28;

typedef struct {
  unsigned char flag;
  Sub_82D2DA28 s;
} Obj_82D2DA28;

void fn_82D2DA28(Obj_82D2DA28 *o)
{
  Sub_82D2DA28 *s = &o->s;

  o->flag = 0;
  s->data = s->buf;
  s->size = 0;
  s->cap = 0x80000004;
}
