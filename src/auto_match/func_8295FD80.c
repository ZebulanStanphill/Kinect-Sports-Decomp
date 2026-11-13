typedef struct Obj_8295FD80 Obj_8295FD80;
typedef struct {
  void *pad[0x134 / 4];
  int (*f134)(Obj_8295FD80 *);
  void *pad138;
  int (*f13c)(Obj_8295FD80 *, unsigned int, unsigned int, unsigned int);
  void *pad140[2];
  int (*f148)(Obj_8295FD80 *, unsigned int, unsigned int *, unsigned int *);
} Vt_8295FD80;
typedef struct { int pad[2]; unsigned int *index; } Sel_8295FD80;
struct Obj_8295FD80 {
  Vt_8295FD80 *vt;
  int pad4[4];
  unsigned int *table;      /* 0x14 */
  char pad18[0x104 - 0x18];
  Sel_8295FD80 *sel;        /* 0x104 */
};
extern int fn_8295D0A8(Obj_8295FD80 *, int);
extern int fn_829548C8(Obj_8295FD80 *);

int fn_8295FD80(Obj_8295FD80 *o)
{
  unsigned int a, b;
  int hr = fn_8295D0A8(o, 0x26);
  if (hr >= 0) {
    hr = o->vt->f148(o, o->table[*o->sel->index], &a, &b);
    if (hr >= 0) {
      hr = o->vt->f13c(o, a, 0xe40000, b);
      if (hr >= 0) {
        hr = o->vt->f134(o);
        if (hr >= 0) {
          hr = fn_829548C8(o);
          if (hr >= 0) return 0;
        }
      }
    }
  }
  return hr;
}
