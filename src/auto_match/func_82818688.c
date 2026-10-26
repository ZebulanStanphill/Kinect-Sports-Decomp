typedef struct S S;
typedef struct { char pad[0x2c]; void (*fn)(S *s); } Ops;
struct S { char pad[0x10]; Ops *ops; };

void fn_82818688(S *s)
{
  void (*f)(S *s) = s->ops->fn;
  if (f == 0) {
    return;
  }
  f(s);
}
