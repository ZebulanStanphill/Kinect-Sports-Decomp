typedef struct Obj Obj;
typedef struct Vt {
  void *pad0;
  int (*f4)(Obj *);
  void *pad1[4];
  unsigned char (*f18)(Obj *);
  void *pad2[0xc];
  unsigned char (*f4c)(Obj *);
} Vt;
typedef struct Pl { char pad[0x50]; int idx; } Pl;
struct Obj {
  Vt *vt;
  char pad[0x14];
  int x18;
  char pad2[0x82];
  unsigned char fl[4];
  char pad3[0x46];
  Pl *pl[4];
};
typedef struct Row { char p[6]; unsigned char b; char q[5]; } Row;
typedef struct Mode { unsigned hi : 30; unsigned f : 1; unsigned lo : 1; unsigned w[12]; } Mode;
extern Row lbl_820E7F98[];
extern int lbl_820E83A8[];
extern Mode lbl_8316FF50[];

int fn_82BD2C30(Obj *o, unsigned char *out)
{
  int res = 0;
  int c25 = 0;
  int c26 = 0;
  int n = o->vt->f4(o);
  unsigned char t;
  if (n > 0) {
    t = lbl_820E7F98[o->pl[1]->idx].b;
    if (t != 0) {
      c26 = 1;
      if (o->fl[1] != 0) c25 = 1;
    }
    res = lbl_820E83A8[t];
    if (res == -1) goto done;
  }
  if ((unsigned char)lbl_8316FF50[o->x18].f != 0) {
    n = o->vt->f4(o);
    if (n > 1 || o->vt->f4c(o) != 0) {
      int z = (o->vt->f4c(o) == 0) + 1;
      t = lbl_820E7F98[o->pl[z]->idx].b;
      if (t != 0) {
        c26++;
        if (o->fl[z] != 0) c25++;
      }
      res = lbl_820E83A8[res * 5 + t];
    }
  }
  if (res != -1) {
    if ((unsigned char)lbl_8316FF50[o->x18].f != 0 && o->vt->f4(o) > 2) {
      t = lbl_820E7F98[o->pl[3]->idx].b;
      if (t != 0) {
        c26++;
        if (o->fl[3] != 0) c25++;
      }
      res = lbl_820E83A8[res * 5 + t];
    }
  }
done:
  *out = c25 > 0;
  if ((o->vt->f18(o) != 0 && c26 > 0) || (*out != 0 && c25 < c26))
    res = -1;
  return res;
}
