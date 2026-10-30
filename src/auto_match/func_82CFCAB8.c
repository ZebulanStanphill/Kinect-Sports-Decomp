typedef struct Alloc_82CFCAB8 { struct AVt_82CFCAB8 *vt; } Alloc_82CFCAB8;
struct AVt_82CFCAB8 { void *s0; char *(*alloc)(Alloc_82CFCAB8 *, int); };
typedef struct { char *data; int size; int cap; } Str_82CFCAB8;
typedef struct { char pad[0x10]; Alloc_82CFCAB8 *alloc; } Ctx_82CFCAB8;
extern Ctx_82CFCAB8 *fn_82CE5410();
extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int strlen(const char *);
Str_82CFCAB8 *fn_82CFCAB8(Str_82CFCAB8 *param_1, Str_82CFCAB8 *param_2, const char *param_3)
{
  int old = param_2->size - 1;
  unsigned len = strlen(param_3);
  int n = len + old;
  Alloc_82CFCAB8 *al = fn_82CE5410()->alloc;
  char *buf = al->vt->alloc(al, n + 1);
  memcpy(buf, param_2->data, old);
  memcpy(buf + old, param_3, len + 1);
  param_1->data = buf;
  param_1->size = n + 1;
  param_1->cap = n + 1;
  return param_1;
}
