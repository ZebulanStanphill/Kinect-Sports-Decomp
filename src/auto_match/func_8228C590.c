typedef struct { int pad[2]; unsigned char *bits; } Bits_8228C590;
typedef struct { char pad[0xf0]; Bits_8228C590 *bs; } Ctx_8228C590;
typedef struct { unsigned first; int count; unsigned *arr; } Set_8228C590;
typedef struct { int pad[4]; unsigned key; } Key_8228C590;
typedef struct Node_8228C590 { struct Node_8228C590 *next; int pad; Key_8228C590 *data; } Node_8228C590;
typedef struct { char pad[0x10]; Node_8228C590 *list; char pad2[0x88]; int f9c; char pad3[0xcc]; int f16c; } Self_8228C590;

extern Ctx_8228C590 *lbl_83265988;
extern Set_8228C590 *lbl_831CEDE8[];
extern void fn_82274130(Self_8228C590 *, unsigned, int);
extern void fn_82279D28(Self_8228C590 *, unsigned, int);

static __forceinline int Has(Ctx_8228C590 *c, unsigned id)
{
  if (id != 0 && ((1 << (id & 7)) & c->bs->bits[id >> 3]) != 0) {
    return 1;
  }
  return 0;
}

static __forceinline Key_8228C590 *Find(Self_8228C590 *s, unsigned key)
{
  Node_8228C590 *n;
  for (n = s->list->next; n != s->list; n = n->next) {
    if (n->data->key == key) {
      return n->data;
    }
  }
  return 0;
}

void fn_8228C590(Self_8228C590 *self)
{
  Ctx_8228C590 *c;
  Set_8228C590 *pl;
  unsigned i;
  int k;
  int hit;
  unsigned char cx;

  if (self->f16c == 0) {
    return;
  }
  self->f16c = 0;
  c = lbl_83265988;
  if (lbl_83265988 == 0) {
    return;
  }
  for (i = 0; i < 6; i++) {
    pl = lbl_831CEDE8[i];
    hit = 0;
    for (k = 0; k < pl->count; k++) {
      if (Has(c, pl->arr[k])) {
        hit = 1;
        break;
      }
    }
    if (hit != 0) {
      if (self->f9c == 0 || Find(self, i) == 0) {
        self->f16c = 1;
      } else {
        cx = (Has(c, pl->first) == 0) ^ 1;
        fn_82274130(self, i, cx + 2);
        fn_82279D28(self, i, 0);
      }
    } else {
      if (self->f9c == 0 || Find(self, i) == 0) {
        self->f16c = 1;
      } else {
        fn_82274130(self, i, 4);
        fn_82279D28(self, i, 1);
      }
    }
  }
}
