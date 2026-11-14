struct VObj_82358058;
typedef struct { void (*dtor)(struct VObj_82358058 *, int); } Vt_82358058;
typedef struct VObj_82358058 { Vt_82358058 *vt; } VObj_82358058;
typedef struct { VObj_82358058 **begin; VObj_82358058 **end; VObj_82358058 **cap; } Vec_82358058;
typedef struct { Vec_82358058 **begin; Vec_82358058 **end; Vec_82358058 **cap; } VecVec_82358058;
typedef struct { char pad[0x80]; int f80; } Holder_82358058;
typedef struct { char pad[0x1c]; char s1[0x1c]; char s2[0x1c]; } Strs_82358058;
typedef struct {
  void *vt;
  char pad4[8];
  Vec_82358058 v1;
  char pad18[8];
  VecVec_82358058 v2;
  char pad2c[4];
  char sub30[0x10];
  void *vt40;
  char pad44[0x3c];
  Holder_82358058 *f84;
  char pad88[4];
  void *f8c;
  char pad90[0x24];
  VObj_82358058 *fb4_dummy;
} Obj_82358058;

extern unsigned int lbl_821B24E0[];
extern unsigned int lbl_821B30C8[];
extern char *fn_8225F160(void);
extern char *fn_8249ABC0(void);
extern void fn_8249D980(int, int);
extern void fn_8249DA08(int, int);
extern void fn_8265CA20(void *);
extern void fn_82297DB0(void *, int, int);
extern void fn_8236DD08(void *);
extern void fn_82359BB0(void *);
extern void fn_823B4D40(void *);

void fn_82358058(char *o)
{
  *(void **)o = lbl_821B24E0;
  *(int *)(fn_8225F160() + 0x40) = 3;
  *(int *)(fn_8225F160() + 0x60) = 1;
  {
    char *g = fn_8249ABC0();
    int h = *(int *)(g + 0x110);
    if (*(int *)(o + 0xb4) != -1) {
      fn_8249D980(h, *(int *)(o + 0xb4));
      *(int *)(o + 0xb4) = -1;
    }
    if (*(int *)(o + 0xb8) != -1) {
      fn_8249DA08(h, *(int *)(o + 0xb8));
      *(int *)(o + 0xb8) = -1;
    }
  }
  {
    VObj_82358058 **p;
    for (p = *(VObj_82358058 ***)(o + 0xc); p < *(VObj_82358058 ***)(o + 0x10); p++) {
      if (*p != 0) (*p)->vt->dtor(*p, 1);
    }
  }
  {
    Vec_82358058 **q;
    for (q = *(Vec_82358058 ***)(o + 0x20); q < *(Vec_82358058 ***)(o + 0x24); q++) {
      Vec_82358058 *v = *q;
      VObj_82358058 **p;
      for (p = v->begin; p < v->end; p++) {
        if (*p != 0) (*p)->vt->dtor(*p, 1);
        v = *q;
      }
      v = *q;
      if (v != 0) {
        if (v->begin != 0) fn_8265CA20(v->begin);
        v->begin = 0;
        v->end = 0;
        v->cap = 0;
        fn_8265CA20(v);
      }
    }
  }
  if (*(char **)(o + 0x84) != 0) *(int *)(*(char **)(o + 0x84) + 0x80) = 0;
  {
    char *s = o + 0x118;
    fn_82297DB0(s + 0x38, 1, 0);
    fn_82297DB0(s + 0x1c, 1, 0);
    fn_82297DB0(s, 1, 0);
  }
  if (*(VObj_82358058 **)(o + 0xd4) != 0) (*(VObj_82358058 **)(o + 0xd4))->vt->dtor(*(VObj_82358058 **)(o + 0xd4), 1);
  {
    void *x = *(void **)(o + 0x8c);
    if (x != 0) {
      fn_823B4D40(x);
      fn_8265CA20(x);
    }
  }
  *(void **)(o + 0x40) = lbl_821B30C8;
  fn_8236DD08(o + 0x40);
  fn_82359BB0(o + 0x30);
  {
    VecVec_82358058 *a = (VecVec_82358058 *)(o + 0x20);
    if (a->begin != 0) fn_8265CA20(a->begin);
    a->begin = 0;
    a->end = 0;
    a->cap = 0;
  }
  {
    Vec_82358058 *b = (Vec_82358058 *)(o + 0xc);
    if (b->begin != 0) fn_8265CA20(b->begin);
    b->begin = 0;
    b->end = 0;
    b->cap = 0;
  }
}
