typedef struct Ar_82D48890 { void **vt; } Ar_82D48890;
typedef struct Obj_82D48890 { char pad[0x44]; int *items; int count; int flags; } Obj_82D48890;
extern void fn_82CE3DC8(Obj_82D48890 *, Ar_82D48890 *, char *);
extern unsigned fn_82CFF8D0(int *, unsigned);
extern char lbl_8323C494[];

void fn_82D48890(Obj_82D48890 *o, Ar_82D48890 *ar)
{
  unsigned h;
  int i;
  int off;
  Obj_82D48890 *self = o;

  if ((self->flags & (int)0x80000000) == 0) {
    h = fn_82CFF8D0(self->items, self->flags << 2);
    ((void (*)(Ar_82D48890 *, int, const char *, int *, int, unsigned))ar->vt[5])(ar, 3, "ChildPtrs", self->items, self->count << 2, h);
  }
  i = 0;
  if (0 < self->count) {
    do {
      ((void (*)(Ar_82D48890 *, int, int, int))ar->vt[3])(ar, 0, self->items[i], 0);
      i++;
    } while (i < self->count);
  }
  fn_82CE3DC8(self, ar, lbl_8323C494);
}
