typedef struct Heap Heap;
typedef struct { void *f0; void *(*alloc)(Heap *, unsigned int, void *, int); } HeapVt;
struct Heap { HeapVt *vt; };
extern void *memset(void *, int, unsigned int);
extern int fn_82811438();
extern unsigned int fn_8281C4D0();
extern int fn_8281C4D8();
extern Heap *lbl_83156AA0;

void *fn_827DCDC8(int param_1, int param_2)
{
  int stk;
  char buf[32];
  void *p;
  stk = 0;
  fn_82811438(buf, &stk, 0x10);
  p = lbl_83156AA0->vt->alloc(lbl_83156AA0, fn_8281C4D0(), buf, param_2);
  memset(p, 0, fn_8281C4D0());
  fn_8281C4D8(p, 0, param_2);
  return p;
}
