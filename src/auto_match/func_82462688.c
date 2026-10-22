extern void fn_82230300(void *, int, int);
extern void fn_822315A0(void *);
extern void fn_82298138(void *);
extern void fn_825604A0(void *);
extern void fn_8265CA20(void *);
extern void *fn_82F4EC30(int);
extern void fn_82F52C20(void *, void *, int);
extern void *lbl_821BBDC4[];
extern void *lbl_821C2CCC[];

typedef struct { int key; void *p; } Elem;
typedef struct {
  void **vt;          /* 0x00 */
  int pad0[2];
  int base3;          /* 0x0c */
  int pad1[6];
  Elem *first;        /* 0x28 */
  Elem *last;         /* 0x2c */
  Elem *end;          /* 0x30 */
  int pad2[3];
  int sub40;          /* 0x40 */
  int pad3[0x81];
  void *obj248;       /* 0x248 */
  int pad4;
  void *obj250;       /* 0x250 */
} Self;

void fn_82462688(Self *self)
{
  void *p;
  Elem *it, *last;

  self->vt = lbl_821BBDC4;
  fn_825604A0(&self->sub40);
  p = self->obj248;
  if (p != 0) {
    fn_82298138(p);
    fn_8265CA20(p);
    self->obj248 = 0;
  }
  p = self->obj250;
  if (p != 0) {
    fn_82F52C20(fn_82F4EC30(0), p, 1);
    self->obj250 = 0;
  }
  if (self->first != 0) {
    last = self->last;
    it = self->first;
    if (it != last) {
      do {
        if (it->p != 0) fn_822315A0(it->p);
        it++;
      } while (it != last);
    }
    fn_8265CA20(self->first);
  }
  self->first = 0;
  self->last = 0;
  self->end = 0;
  self->vt = lbl_821C2CCC;
  fn_82230300(&self->base3, 1, 0);
}
