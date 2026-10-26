typedef struct {
  union { char buf[16]; char *ptr; } bx;
  unsigned int size;
  unsigned int res;
} String;
typedef struct { int a; String s; } Obj;
extern void fn_8265CA20(void *p);

static void String_tidy(String *s)
{
  if (16 <= s->res) {
    fn_8265CA20(s->bx.ptr);
  }
  s->size = 0;
  s->res = 15;
  s->bx.buf[0] = 0;
}

void fn_8265C338(void *self, Obj *o)
{
  String_tidy(&o->s);
}
