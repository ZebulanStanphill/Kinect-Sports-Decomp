typedef struct { int a; unsigned int b; int c; } Entry;
typedef struct { int pad0; unsigned int count; Entry *entries; } List;
typedef struct { int pad0; int pad4; unsigned int flags; } Obj;
extern void fn_82FF4C68(int, Obj *, Entry *);
extern int lbl_83264304;

void fn_8304EDB8(List *param_1, Obj *param_2, unsigned int param_3, unsigned int param_4)
{
  unsigned int i;
  Entry *e;

  if (param_1->entries != 0 && (param_2->flags & 4) != 0) {
    for (i = 0; i < param_1->count; i++) {
      e = &param_1->entries[i];
      if (e->b >= param_3 && e->b < param_4) {
        fn_82FF4C68(lbl_83264304, param_2, e);
      }
    }
  }
}
