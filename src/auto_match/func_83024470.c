typedef struct VT_83024470 { void (*f0)(void *, int); void (*f4)(void *, void *); void (*f8)(void); void (*fc)(void); void (*f10)(void *, void *); } VT_83024470;
typedef struct Obj_83024470 { VT_83024470 *vt; } Obj_83024470;
extern void fn_83022528(void *);
extern void fn_82FA5190(unsigned, void *);
extern void fn_830252F0(void *, void *);
extern void fn_82FEC150(void);
extern void fn_82FEC160(void);
extern unsigned lbl_831BC770;
extern char lbl_831BC7FC[];
int fn_83024470(char *self)
{
  Obj_83024470 **p;
  Obj_83024470 *a;
  Obj_83024470 *h;
  int n;
  unsigned heap;
  fn_83022528(self + 0x80);
  p = (Obj_83024470 **)(self + 0x24);
  n = 4;
  do {
    a = p[0];
    if (a != 0) {
      a->vt->f4(a, lbl_831BC7FC);
      p[0] = 0;
    }
    h = p[1];
    if (h != 0) {
      heap = lbl_831BC770;
      h->vt->f0(h, 0);
      fn_82FA5190(heap, h);
      p[1] = 0;
    }
    if (p[-1] != 0) {
      fn_830252F0(self + 0x70, p[-1]);
      fn_82FEC150();
      p[-1]->vt->f10(p[-1], lbl_831BC7FC);
      p[-1] = 0;
      fn_82FEC160();
    }
    n--;
    p += 5;
  } while (n != 0);
  if (*(unsigned *)(self + 0x100) != 0) {
    fn_82FA5190(lbl_831BC770, *(void **)(self + 0x100));
    *(int *)(self + 0x100) = 0;
  }
  return 1;
}
