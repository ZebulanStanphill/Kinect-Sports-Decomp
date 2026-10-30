typedef struct Ref_8288DF40 { unsigned a; unsigned b; } Ref_8288DF40;
typedef struct Vec_8288DF40 { unsigned *data; unsigned x1, x2, x3; unsigned size; } Vec_8288DF40;
extern Ref_8288DF40 *fn_8288BE40(Ref_8288DF40 *, Ref_8288DF40 *);
extern __declspec(noreturn) void fn_82F622E0(const char *);

Ref_8288DF40 *fn_8288DF40(Ref_8288DF40 *out, Vec_8288DF40 *v, unsigned pos)
{
  Ref_8288DF40 tmp, key;
  Ref_8288DF40 *r;
  unsigned a, b;
  if (v->size <= pos) {
    fn_82F622E0("invalid vector<bool> subscript");
  }
  key.a = (unsigned)v->data;
  key.b = 0;
  r = fn_8288BE40(&tmp, &key);
  a = r->a;
  b = r->b;
  out->b = b;
  out->a = a;
  return out;
}
