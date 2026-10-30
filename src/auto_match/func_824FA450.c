struct Child_824FA450;
typedef struct VT_824FA450 {
  void (*s0)(struct Child_824FA450 *, int);
  void (*s1)(void); void (*s2)(struct Child_824FA450 *);
  char pad[0x54 - 12];
  void (*s54)(struct Child_824FA450 *, void *);
} VT_824FA450;
typedef struct Child_824FA450 { VT_824FA450 *vt; } Child_824FA450;
typedef struct O_824FA450 { char pad[0x200]; Child_824FA450 *f200; void *f204; char pad2[4]; void *f20c; } O_824FA450;
extern int fn_8251FA58(void *);
extern int fn_825604A0(void *);

void fn_824FA450(O_824FA450 *p)
{
  if (p->f204 != 0) {
    p->f200->vt->s54(p->f200, p->f204);
    p->f204 = 0;
  }
  if (p->f20c != 0) {
    fn_8251FA58(p->f20c);
    p->f20c = 0;
  }
  p->f200->vt->s2(p->f200);
  if (p->f200 != 0) {
    p->f200->vt->s0(p->f200, 1);
  }
  fn_825604A0((char *)p + 0x80);
}
