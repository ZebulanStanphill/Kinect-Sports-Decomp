typedef struct { void **cur; int pad; void **end; } Tls_82DBF8F8;
typedef struct { int *vt; } Item_82DBF8F8;
typedef struct { int pad[8]; Item_82DBF8F8 **arr; unsigned short count; } Obj_82DBF8F8;
extern unsigned __int64 __mftb();
extern void *KeTlsGetValue(unsigned int);
extern void fn_82DBF878(void *);
extern unsigned int lbl_8323B4A0;

void fn_82DBF8F8(Obj_82DBF8F8 *o)
{
  int i;
  Item_82DBF8F8 ***pa = &o->arr;
  for (i = o->count - 1; i >= 0; i--) {
    if (o->arr[i] != 0) {
      int *t = (int *)KeTlsGetValue(lbl_8323B4A0);
      int *c = (int *)t[1];
      if ((unsigned)c < (unsigned)t[3]) {
        c[0] = (int)"TtconAddCb";
        c[1] = (int)__mftb();
        t[1] = (int)(c + 3);
      }
      ((void (*)(Item_82DBF8F8 *, Obj_82DBF8F8 *))o->arr[i]->vt[1])(o->arr[i], o);
      t = (int *)KeTlsGetValue(lbl_8323B4A0);
      c = (int *)t[1];
      if ((unsigned)c < (unsigned)t[3]) {
        c[0] = (int)"Et";
        c[1] = (int)__mftb();
        t[1] = (int)(c + 3);
      }
    }
  }
  fn_82DBF878(pa);
}
