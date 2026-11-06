extern char lbl_8326434C[];
extern void *lbl_832642EC;
extern void *lbl_831BC768;

struct Obj_82FEB558;
typedef struct VT_82FEB558 {
  void (*dtor)(struct Obj_82FEB558 *self, int flags);
} VT_82FEB558;
typedef struct Obj_82FEB558 {
  VT_82FEB558 *vt;
  char pad4[0x50 - 4];
  float value;
  char pad54[0x5c - 0x54];
  int refs;
} Obj_82FEB558;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Obj_82FEB558 *fn_8301A7B8(void *tbl, int key);
extern void fn_82FA5190(void *heap, void *p);

int fn_82FEB558(int key, float *out)
{
  Obj_82FEB558 *o;
  void *heap;

  RtlEnterCriticalSection(lbl_8326434C);
  o = fn_8301A7B8(lbl_832642EC, key);
  if (o == 0) {
    RtlLeaveCriticalSection(lbl_8326434C);
    return 0xf;
  }
  *out = o->value;
  o->refs--;
  if (o->refs <= 0) {
    heap = lbl_831BC768;
    o->vt->dtor(o, 0);
    fn_82FA5190(heap, o);
  }
  RtlLeaveCriticalSection(lbl_8326434C);
  return 1;
}
