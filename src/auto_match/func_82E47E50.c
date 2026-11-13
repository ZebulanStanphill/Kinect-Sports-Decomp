//BODY
typedef struct VObj_82E47E50 { void (**vt)(struct VObj_82E47E50 *); } VObj_82E47E50;
typedef struct Obj_82E47E50 {
  void *vt;
  int pad[0x17];
  VObj_82E47E50 *m60;
  int pad2[1];
  int m68;
  int pad3[2];
  void *m74;
} Obj_82E47E50;

extern void fn_82E46FB8(void *);
extern void fn_82E471A0(void *);
extern void fn_82E47658(void *);
extern void fn_82E4FE40(void *);
extern char lbl_821539A8[];

void fn_82E47E50(Obj_82E47E50 *p)
{
  p->vt = lbl_821539A8;
  if (p->m60 != 0) {
    (*(void (**)(VObj_82E47E50 *))((char *)p->m60->vt + 8))(p->m60);
    p->m60 = 0;
  }
  fn_82E46FB8(p);
  fn_82E47658(p);
  if (p->m74 != &p->m68) {
    void *q = p->m74;
    if (q != 0) {
      fn_82E4FE40(q);
    }
    p->m74 = 0;
  }
  fn_82E471A0(p);
}
