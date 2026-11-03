extern float lbl_8219274C[];
typedef struct Elem_8238A5C0 { char pad0[0x24]; int f24; char pad1[0xf0]; int f118; } Elem_8238A5C0;
typedef struct Item_8238A5C0 { char pad0[8]; unsigned count; } Item_8238A5C0;
typedef struct Q_8238A5C0 { Item_8238A5C0 **arr; char pad[0xc]; int idx; } Q_8238A5C0;
typedef struct S_8238A5C0 { char pad[8]; Q_8238A5C0 ***tab; } S_8238A5C0;
typedef struct P_8238A5C0 { char pad[8]; S_8238A5C0 *s; } P_8238A5C0;
extern int fn_82372F88(S_8238A5C0 *);
extern Elem_8238A5C0 *fn_822ABA88(Item_8238A5C0 *, unsigned);
extern void fn_8234B0C8(int, int, float);
void fn_8238A5C0(P_8238A5C0 *a, int x)
{
  S_8238A5C0 *s = a->s;
  Q_8238A5C0 *q;
  Item_8238A5C0 *it;
  Elem_8238A5C0 *e;
  unsigned i;
  q = (*s->tab)[fn_82372F88(s)];
  it = q->arr[q->idx];
  i = 0;
  if (it->count > 0) {
    float f = lbl_8219274C[2];
    do {
      e = fn_822ABA88(it, i);
      if (e->f24 != 0) fn_8234B0C8(e->f118 + 0x2c0, x, f);
      i++;
      it = q->arr[q->idx];
    } while (i < it->count);
  }
}
