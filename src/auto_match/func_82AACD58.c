extern void fn_82A29A38(void);
extern int fn_82AACC20(void *, int);
extern int fn_82AACC70(void *, int);
extern void *fn_82AACBB8(void *, int);
extern void *memset(void *, int, unsigned);
typedef struct O_82AACD58 { int a; unsigned size; } O_82AACD58;
void *fn_82AACD58(O_82AACD58 *o, int x) {
  void *r;
  if (o == 0) fn_82A29A38();
  if (fn_82AACC20(o, x) == 0) {
    return fn_82AACC70(o, x) ? fn_82AACBB8(o, x) : 0;
  }
  r = fn_82AACBB8(o, x); memset(r, 0, o->size); return r;
}
