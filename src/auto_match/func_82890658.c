extern void fn_82230110(void *s, const char *text);
extern void fn_82230180(void *s);
extern void fn_8265CA20(void *p);
extern void fn_8288CCB8(void *out, void *a, void *b);
extern void fn_8288F180(void *a, void *b, void *s);
extern unsigned int *fn_828A12E8(void *a);
extern void fn_828B55B0(void *p);
extern void fn_828BDE70(void *p);
extern unsigned int lbl_82023640;
extern unsigned int lbl_82023648;

typedef struct VObj_82890658 {
  void (**vt)(struct VObj_82890658 *, int);
} VObj_82890658;

typedef struct Mgr_82890658 {
  unsigned int *vt;
  char pad04[0x4c];
  unsigned int *vt50;
  char pad54[0x18];
  void *e6c;
  char pad70[0x10];
  char sub80[8];
  void *e88;
  VObj_82890658 **begin;
  VObj_82890658 **end;
  void *cap;
  char pad98[0x4];
  char flag;
} Mgr_82890658;

void fn_82890658(Mgr_82890658 *m)
{
  VObj_82890658 **it;
  m->vt = &lbl_82023648;
  m->vt50 = &lbl_82023640;
  if (m->flag != 0) {
    unsigned int *r = fn_828A12E8(m->e6c);
    unsigned int found;
    fn_8288CCB8(&found, r + 1, m->sub80);
    if (found != r[2]) {
      unsigned int *n = *(unsigned int **)(found + 0x14);
      if (n != 0) {
        char s[40];
        fn_82230110(s, "Create net obj msg destruct");
        fn_8288F180(n, m->e88, s);
        fn_82230180(s);
      }
    }
  }
  it = m->begin;
  if (it != m->end) {
    do {
      VObj_82890658 *o = *it;
      if (o != 0) {
        (*(void (*)(VObj_82890658 *, int))*(unsigned int *)o->vt)(o, 1);
      }
      it++;
    } while (it != m->end);
  }
  if (m->begin != 0) {
    fn_8265CA20(m->begin);
  }
  m->begin = 0;
  m->end = 0;
  m->cap = 0;
  fn_828B55B0(m->sub80);
  fn_828BDE70(m);
}
