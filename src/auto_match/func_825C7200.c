extern void fn_82545810(void *);
extern void fn_8262FEC8(void *);
extern void *lbl_83282270[];
extern char lbl_83282278[];
extern void *lbl_8328227C;
extern void *lbl_83282280;
extern char lbl_83282284[];
extern void *lbl_83282288;
extern void *lbl_8328228C;
extern void *lbl_83282290;
extern int lbl_83282294;

typedef struct Obj_825C7200 { char pad[0xc]; void *fc; } Obj_825C7200;

void fn_825C7200(Obj_825C7200 *o)
{
  int n;

  if (o->fc != 0) {
    fn_8262FEC8(o->fc);
    o->fc = 0;
  }
  n = lbl_83282294 - 1;
  lbl_83282294 = n;
  if (n == 0) {
    if (lbl_83282270[0] != 0) {
      fn_8262FEC8(lbl_83282270[0]);
      lbl_83282270[0] = 0;
    }
    if (lbl_83282270[1] != 0) {
      fn_8262FEC8(lbl_83282270[1]);
      lbl_83282270[1] = 0;
    }
    if (*(void **)lbl_83282278 != 0) {
      fn_82545810(lbl_83282278);
    }
    if (lbl_8328227C != 0) {
      fn_8262FEC8(lbl_8328227C);
      lbl_8328227C = 0;
    }
    if (lbl_83282280 != 0) {
      fn_8262FEC8(lbl_83282280);
      lbl_83282280 = 0;
    }
    if (*(void **)lbl_83282284 != 0) {
      fn_82545810(lbl_83282284);
    }
    if (lbl_83282288 != 0) {
      fn_8262FEC8(lbl_83282288);
      lbl_83282288 = 0;
    }
    if (lbl_8328228C != 0) {
      fn_8262FEC8(lbl_8328228C);
      lbl_8328228C = 0;
    }
    if (lbl_83282290 != 0) {
      fn_8262FEC8(lbl_83282290);
      lbl_83282290 = 0;
    }
  }
}
