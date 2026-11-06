extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void *fn_83014128(void *vec, unsigned int key);
extern void fn_82A1E968(void *p);

typedef struct Val_83013E80 { int v[4]; __int64 stamp; unsigned int tag; int pad; } Val_83013E80;
typedef struct Ent_83013E80 { unsigned int key; int pad; Val_83013E80 val; } Ent_83013E80;
typedef struct Vec_83013E80 { Ent_83013E80 *begin; Ent_83013E80 *end; } Vec_83013E80;
typedef struct Self_83013E80 {
  int pad0;
  Vec_83013E80 vec;
  int pad_c;
  char cs[0x20];
  __int64 stamp;
} Self_83013E80;

static __forceinline Val_83013E80 *findVal(Vec_83013E80 *v, unsigned int key)
{
  Ent_83013E80 *p;
  unsigned int found;
  for (p = v->begin; p != v->end && p->key != key; p++) {
  }
  found = (p != v->end);
  return found ? &p->val : 0;
}

int fn_83013E80(Self_83013E80 *param_1, unsigned int param_2, Val_83013E80 *param_3, unsigned int param_4)
{
  Val_83013E80 *val;
  Vec_83013E80 *vec;
  void *cs;

  vec = &param_1->vec;
  val = findVal(vec, param_2);
  cs = param_1->cs;
  RtlEnterCriticalSection(cs);
  if (val == 0) {
    val = (Val_83013E80 *)fn_83014128(vec, param_2);
    if (val == 0) {
      RtlLeaveCriticalSection(cs);
      return 2;
    }
    if (vec->end != vec->begin) {
      fn_82A1E968(&param_1->stamp);
    }
    val->tag = param_4;
  } else {
    if (param_4 != val->tag) {
      RtlLeaveCriticalSection(cs);
      return 2;
    }
  }
  val->v[0] = param_3->v[0];
  val->v[1] = param_3->v[1];
  val->v[2] = param_3->v[2];
  val->v[3] = param_3->v[3];
  val->stamp = param_1->stamp;
  RtlLeaveCriticalSection(cs);
  return 1;
}
