typedef struct { int a; int b; int c; } Elem_8266D270;
extern void fn_8256E1D8(Elem_8266D270 *, int, int);
extern void fn_8266CB08(Elem_8266D270 *, Elem_8266D270 *);


typedef struct { Elem_8266D270 *first; Elem_8266D270 *last; Elem_8266D270 *end; } Vec_8266D270;
typedef struct { char pad[0x10]; Vec_8266D270 *vec; } Obj_8266D270;

Obj_8266D270 *fn_8266D270(Obj_8266D270 *self, Elem_8266D270 *src)
{
  Elem_8266D270 *p;
  Elem_8266D270 *t;
  if (self->vec->last < self->vec->end) {
    p = self->vec->last;
    self->vec->last = p + 1;
    fn_8256E1D8(p, src->a, src->b);
    p->c = src->c;
  }
  else {
    if (self->vec->last != 0) {
      fn_8266CB08(self->vec->last, src);
    }
    t = self->vec->last + 1;
    self->vec->last = t;
    self->vec->end = t;
  }
  return self;
}
