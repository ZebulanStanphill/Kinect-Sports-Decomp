typedef struct Vt_8301D0D8 { void (*dtor)(void *, int); } Vt_8301D0D8;
typedef struct Del_8301D0D8 { Vt_8301D0D8 *vt; } Del_8301D0D8;
typedef struct Sub_8301D0D8 { void *vt; char pad[8]; char m[0x30]; } Sub_8301D0D8;
typedef struct Item_8301D0D8 {
  void *vt;
  char pad4[0xc];
  char sub10[0xb0];
  Sub_8301D0D8 s0;
  Del_8301D0D8 *fc;
  Del_8301D0D8 *arr[4];
} Item_8301D0D8;
typedef struct Self_8301D0D8 {
  char pad[0xc];
  Item_8301D0D8 *items[2];
  char pad2[0x198 - 0x14];
  char tail[1];
} Self_8301D0D8;
extern void fn_82FA5190(void *, void *);
extern void fn_83021E70(void *);
extern void fn_830223E0(void *);
extern void fn_830265E0(Del_8301D0D8 *);
extern void fn_83026AA8(void *);
extern void fn_83039920(void *);
extern void fn_8303A5E8(Del_8301D0D8 *, int);
extern char lbl_8217D040[];
extern void *lbl_831BC770;

static void del(Del_8301D0D8 *p)
{
  void *a = lbl_831BC770;
  if (p != 0) {
    p->vt->dtor(p, 0);
    fn_82FA5190(a, p);
  }
}

void fn_8301D0D8(Self_8301D0D8 *self)
{
  unsigned int *pp = (unsigned int *)self + 2;
  unsigned int n = 0;
  do {
    Item_8301D0D8 *it = (Item_8301D0D8 *)pp[1];
    int i;
    Sub_8301D0D8 *s0;
    if (it == 0) break;
    fn_8303A5E8(it->fc, 0);
    del(it->fc);
    for (i = 0; i < 4; i++) {
      if (it->arr[i] != 0) {
        fn_830265E0(it->arr[i]);
        del(it->arr[i]);
      }
    }
    fn_83026AA8(it);
    s0 = &it->s0;
    fn_830223E0(s0);
    fn_83021E70((char *)s0 + 0xc);
    s0->vt = lbl_8217D040;
    fn_83039920(it->sub10);
    it->vt = lbl_8217D040;
    fn_82FA5190(lbl_831BC770, it);
    n++;
    pp[1] = 0;
    pp++;
  } while (n < 2);
  fn_830223E0(self->tail);
}
