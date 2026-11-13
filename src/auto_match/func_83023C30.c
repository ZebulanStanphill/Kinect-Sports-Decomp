typedef struct Obj_83023C30 Obj_83023C30;
typedef struct {
  void (*f0)(Obj_83023C30 *, int);
  void (*f4)(Obj_83023C30 *, char *);
  void (*f8)(void);
  void (*fc)(void);
  void (*f10)(Obj_83023C30 *, char *);
} Vt_83023C30;
struct Obj_83023C30 {
  Vt_83023C30 *vt;
};

extern void fn_82FA5190(void *, void *);
extern void fn_82FEC150(void);
extern void fn_82FEC160(void);
extern void fn_83022528(void *);
extern void fn_830252F0(char *, void *);
extern void *lbl_831BC770;
extern char lbl_831BC7FC[];
extern char lbl_832645B0[];

int fn_83023C30(int param_1)
{
  Obj_83023C30 **e;
  Obj_83023C30 *o;
  Obj_83023C30 *q;
  void *heap;
  int i;
  char *sb = lbl_832645B0;
  char *sa = lbl_831BC7FC;

  fn_83022528((void *)(param_1 + 0x80));
  if (*(void **)(param_1 + 0x100) != 0) {
    fn_82FA5190(lbl_831BC770, *(void **)(param_1 + 0x100));
    *(int *)(param_1 + 0x100) = 0;
  }
  e = (Obj_83023C30 **)(param_1 + 0x24);
  i = 4;
  do {
    o = e[0];
    if (o != 0) {
      o->vt->f4(o, sa);
      e[0] = 0;
    }
    q = e[1];
    if (q != 0) {
      heap = lbl_831BC770;
      q->vt->f0(q, 0);
      fn_82FA5190(heap, q);
      e[1] = 0;
    }
    if (e[-1] != 0) {
      fn_830252F0(sb, e[-1]);
      fn_82FEC150();
      e[-1]->vt->f10(e[-1], sa);
      e[-1] = 0;
      fn_82FEC160();
    }
    i--;
    e = e + 5;
  } while (i != 0);
  return 1;
}
