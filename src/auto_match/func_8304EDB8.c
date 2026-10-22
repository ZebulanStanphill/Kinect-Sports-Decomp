typedef unsigned int uint;
typedef struct { int a; uint b; int c; } Entry;
typedef struct { int pad0; uint count; Entry *entries; } List;
typedef struct { int pad0; int pad4; uint flags; } Obj;
extern void fn_82FF4C68(int, Obj *, Entry *);
extern int lbl_83264304;

void fn_8304EDB8(List *param_1, Obj *param_2, uint param_3, uint param_4)
{
  uint i;
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
