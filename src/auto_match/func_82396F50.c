typedef struct Tgt_82396F50 Tgt_82396F50;
typedef struct Vt_82396F50 { char pad[0x24]; void (*f24)(Tgt_82396F50 *, unsigned); } Vt_82396F50;
typedef struct Ctx_82396F50 { char pad[0x8c0]; char pad2[0x90 - 0]; } Ctx_82396F50;
typedef struct Win_82396F50 { char pad[0x8c0]; struct { char pad[0x90]; unsigned f90; } *f8c0; } Win_82396F50;
struct Tgt_82396F50 {
  Vt_82396F50 *vt;
  char pad[0x10];
  Win_82396F50 *f14;
  char pad2[0x24 - 0x18];
  unsigned f24;
};
typedef struct Obj_82396F50 { void **data; int pad[3]; int idx; } Obj_82396F50;
typedef struct Row_82396F50 { unsigned *begin; unsigned *end; } Row_82396F50;
typedef struct Self_82396F50 {
  char pad[8];
  Obj_82396F50 ***objs;
  char pad2[0x20 - 0xc];
  Row_82396F50 **rows;
  Row_82396F50 **rowsEnd;
} Self_82396F50;
extern Tgt_82396F50 *fn_822ABA88();

void fn_82396F50(Self_82396F50 *param_1)
{
  Row_82396F50 **r;
  unsigned *p;
  int off;
  int j;
  Obj_82396F50 *o;
  Tgt_82396F50 *t;
  unsigned v;

  r = param_1->rows;
  if (r != param_1->rowsEnd) {
    off = 0;
    do {
      j = 0;
      p = (*r)->begin;
      o = *(Obj_82396F50 **)((char *)*param_1->objs + off);
      if (p != (*r)->end) {
        do {
          v = *p;
          t = fn_822ABA88(o->data[o->idx], j);
          if (t->f24 != v) {
            t->f24 = v;
            if (v != 0) t->f14->f8c0->f90 = 1; else t->f14->f8c0->f90 = 0;
            t->vt->f24(t, v);
          }
          p++;
          j++;
        } while (p != (*r)->end);
      }
      r++;
      off += 4;
    } while (r != param_1->rowsEnd);
  }
}
