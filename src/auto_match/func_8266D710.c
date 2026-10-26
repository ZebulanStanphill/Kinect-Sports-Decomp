extern void fn_8266D270(void *c, void *e);
extern void fn_8266D440(void *c);

typedef struct { int a, b, c; } E;
typedef struct { int a, b, c, d, e; } R;

R *fn_8266D710(R *out, E *first, E *last, char *c)
{
  int v;
  for (; first != last; first++)
    fn_8266D270(c, first);
  v = *(int *)(c + 0x10);
  out->a = 0;
  out->b = 0;
  out->c = 0;
  out->d = 0;
  out->e = v;
  fn_8266D440(c);
  return out;
}
