typedef struct Cur_83007940 { char pad[0x30]; unsigned id; } Cur_83007940;
typedef struct Obj_83007940 { char *vt; char pad[0x1c]; Cur_83007940 *cur; } Obj_83007940;
extern int fn_82FF6520(int, unsigned);
extern int fn_82FF69D0(int, unsigned, Obj_83007940 *);
extern void fn_82FF6A78(int, unsigned, Obj_83007940 *);
extern unsigned char fn_830069B8(Obj_83007940 *);
extern void fn_83006F88(Obj_83007940 *, int);
extern int lbl_832642E8;

int fn_83007940(Obj_83007940 *self, unsigned id)
{
  Cur_83007940 *c = self->cur;
  unsigned cur;
  if (c != 0) {
    cur = c->id;
  } else {
    cur = 0;
  }
  if (cur != id) {
    if (c != 0 && c->id != 0) {
      fn_82FF6A78(lbl_832642E8, c->id, self);
      (*(void (**)(Obj_83007940 *))(*(int *)self + 0xd4))(self);
      self->cur->id = 0;
    }
    if (id != 0) {
      if (fn_830069B8(self) != 0) {
        if (fn_82FF69D0(lbl_832642E8, id, self) == 1) {
          self->cur->id = id;
          fn_83006F88(self, fn_82FF6520(lbl_832642E8, id));
        }
      } else {
        return 2;
      }
    }
    (*(void (**)(Obj_83007940 *))(*(int *)self + 0xdc))(self);
  }
  return 1;
}
