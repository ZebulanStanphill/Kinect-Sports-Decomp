//BODY
extern void fn_82A5F3B8(void *, void *);
extern void fn_82A3FE48(void *);
extern void *memset(void *, int, unsigned int);
extern char lbl_82089EAC[];
extern char lbl_82089EC0[];
extern char lbl_8315E1E8[];
extern char lbl_83219D50[];

typedef struct Obj_82A4D350 {
  void *vt;
  int pad[7];
  void *vt20;
  int f24[9];
  int f48[6];
  int f60;
  int f64;
  int f68;
  int f6c;
  int f70;
} Obj_82A4D350;

Obj_82A4D350 *fn_82A4D350(Obj_82A4D350 *p)
{
  fn_82A5F3B8(p, lbl_8315E1E8);
  p->f60 = 0;
  p->vt = lbl_82089EC0;
  p->vt20 = lbl_82089EAC;
  p->f64 = 0;
  p->f68 = 0;
  p->f6c = 0;
  p->f70 = 0;
  fn_82A3FE48(lbl_83219D50);
  memset(p->f24, 0, 0x24);
  memset(p->f48, 0, 0x18);
  return p;
}
