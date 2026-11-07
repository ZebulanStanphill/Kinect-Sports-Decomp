typedef struct { int *data; int count; int cap; } Arr_82D9D1A8;
typedef struct { char pad[0x28]; Arr_82D9D1A8 pos; Arr_82D9D1A8 neg; } Deq_82D9D1A8;
typedef struct VObj_82D9D1A8 VObj_82D9D1A8;
typedef struct {
  void *s[9];
  unsigned char (*f24)(VObj_82D9D1A8 *, int);
} VT_82D9D1A8;
struct VObj_82D9D1A8 { VT_82D9D1A8 *vt; };
typedef struct { char pad[0x10]; VObj_82D9D1A8 *obj; } Mgr_82D9D1A8;
typedef struct { char pad[8]; int ctx; } Obj_82D9D1A8;

extern void fn_82D9D100(int elem, int level, int ctx, int *out);
extern Mgr_82D9D1A8 *fn_82CE5410(void);

void fn_82D9D1A8(Obj_82D9D1A8 *o, Deq_82D9D1A8 *d)
{
  int ctx = o->ctx;
  Arr_82D9D1A8 *pos = &d->pos;
  Arr_82D9D1A8 *neg = &d->neg;
  int level = 0x7f;
  do {
    int i;
    int out;
    out = 0;
    for (i = pos->count - 1; i >= -neg->count; i--) {
      int elem;
      VObj_82D9D1A8 *obj;
      if (i >= pos->count) {
        i = pos->count - 1;
        if (i < -neg->count)
          return;
      }
      if (i >= 0)
        elem = pos->data[i];
      else
        elem = *(neg->data - (i + 1));
      fn_82D9D100(elem, level, ctx, &out);
      obj = fn_82CE5410()->obj;
      if (obj->vt->f24(obj, ctx) != 0)
        return;
    }
    level = out;
  } while (level > 0);
}
