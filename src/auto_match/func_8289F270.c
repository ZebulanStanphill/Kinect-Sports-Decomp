typedef struct { int a; void *p; } Pair;
typedef struct { char pad[0x54]; Pair *data; int count; } Obj;
extern void fn_8289DF30(void *p);

void fn_8289F270(Obj *o, unsigned int n)
{
  Pair *it = o->data + o->count - 1;
  Pair *end = it - n;
  for (; it > end; it--) {
    if (it->p != 0) {
      fn_8289DF30(it->p);
    }
  }
}
