// Destructor of Obj_82286BF0 written as a __forceinline dtor; the member-array destruction (4 x Elem, then Mem680) is compiler-generated.
extern "C" {
extern char lbl_820E975C;
void *fn_822889C0(void *, void *);
void fn_8228B6A8(void *);
void fn_82286EA8(unsigned);
void fn_82268330(unsigned);
void fn_8265CA20(unsigned);
void fn_82286F08(unsigned);
void fn_82286E18(unsigned, int);
void fn_82529320(unsigned, int);
void fn_822848B8(unsigned);
void fn_8228BE30(unsigned);
void *fn_8225C590();
void fn_8225D168(void *, unsigned);
void fn_82280850(unsigned);
void fn_8229E090(unsigned, int, int);
void fn_822A5480(unsigned, void *);
void fn_8251FA58(unsigned);
void fn_82230300(void *, int, int);
void fn_82359C18(void *);
}

struct Vt_82286BF0 { void (*dtor)(void *, int); };
struct Vo_82286BF0 { Vt_82286BF0 *vt; };
struct SA_82286BF0 { unsigned f0, f4; Vo_82286BF0 *f8; int fc; int f10, f14; };
struct SB_82286BF0 { unsigned f0; char p[0x3c]; };

struct Str_82286BF0 {
    char b[0x20];
    __forceinline ~Str_82286BF0() { fn_82230300(this, 1, 0); }
};
struct Elem_82286BF0 {
    char a[0x20];
    Str_82286BF0 s;
};
struct Mem680_82286BF0 {
    char b[0x1c];
    __forceinline ~Mem680_82286BF0() { fn_82359C18(this); }
};

struct Obj_82286BF0 {
    char a[0x680];
    Mem680_82286BF0 m680;
    char b[0xc];
    Elem_82286BF0 el[4];
    char d[0x1240 - 0x7a8];
    __forceinline ~Obj_82286BF0()
    {

  char buf[16];
  char *param_1 = (char *)this;
  unsigned v;
  SA_82286BF0 *a;
  SB_82286BF0 *b;
  int i;
  fn_8228B6A8(fn_822889C0(buf, param_1));
  if (*(unsigned *)(param_1 + 0x60c) != 0) {
    fn_82286EA8(*(unsigned *)(param_1 + 0x60c));
    *(unsigned *)(param_1 + 0x60c) = 0;
  }
  if (*(unsigned *)(param_1 + 0x610) != 0) {
    fn_82286EA8(*(unsigned *)(param_1 + 0x610));
    *(unsigned *)(param_1 + 0x610) = 0;
  }
  v = *(unsigned *)(param_1 + 0x614);
  if (v != 0) {
    fn_82268330(v);
    fn_8265CA20(v);
    *(unsigned *)(param_1 + 0x614) = 0;
  }
  if (*(unsigned *)(param_1 + 0x618) != 0) {
    fn_82286F08(*(unsigned *)(param_1 + 0x618));
    *(unsigned *)(param_1 + 0x618) = 0;
  }
  b = (SB_82286BF0 *)(param_1 + 0x6c0);
  a = (SA_82286BF0 *)(param_1 + 0x624);
  for (i = 4; i != 0; i--) {
    Vo_82286BF0 *o;
    if (*(unsigned *)((char *)a - 8) != 0) {
      fn_82286E18(*(unsigned *)((char *)a - 8), 1);
    }
    o = *(Vo_82286BF0 **)a;
    *(unsigned *)((char *)a - 8) = 0;
    if (o != 0) {
      o->vt->dtor(o, 1);
    }
    *(unsigned *)a = 0;
    if (b->f0 != 0) {
      *(unsigned *)((char *)a - 4) = 0;
      *(int *)((char *)a + 4) = -1;
      fn_82529320(b->f0, 0);
      b->f0 = 0;
    }
    b++;
    a++;
  }
  if (*(unsigned *)(param_1 + 0x11f4) != 0) {
    fn_822848B8(*(unsigned *)(param_1 + 0x11f4));
    *(unsigned *)(param_1 + 0x11f4) = 0;
  }
  v = *(unsigned *)(param_1 + 0x67c);
  if (v != 0) {
    fn_8228BE30(v);
    fn_8265CA20(v);
    *(unsigned *)(param_1 + 0x67c) = 0;
  }
  { void *t = fn_8225C590(); fn_8225D168(t, *(unsigned *)(param_1 + 0x11fc)); }
  fn_82280850(*(unsigned *)(param_1 + 0x69c));
  if (*(unsigned *)(param_1 + 0x11f8) != 0) {
    fn_8229E090(*(unsigned *)(param_1 + 0x11f8), 0, 0);
    *(unsigned *)(param_1 + 0x11f8) = 0;
  }
  if (*(unsigned *)(param_1 + 0x7ac) != 0) {
    fn_822A5480(*(unsigned *)(param_1 + 0x7ac), &lbl_820E975C);
  }
  if (*(unsigned *)(param_1 + 0x7b0) != 0) {
    fn_822A5480(*(unsigned *)(param_1 + 0x7b0), &lbl_820E975C);
  }
  if (*(unsigned *)(param_1 + 0x1224) != 0) {
    fn_8251FA58(*(unsigned *)(param_1 + 0x1224));
    *(unsigned *)(param_1 + 0x1224) = 0;
  }
  if (*(unsigned *)(param_1 + 0x1228) != 0) {
    fn_8251FA58(*(unsigned *)(param_1 + 0x1228));
    *(unsigned *)(param_1 + 0x1228) = 0;
  }
  if (*(unsigned *)(param_1 + 0x122c) != 0) {
    fn_8251FA58(*(unsigned *)(param_1 + 0x122c));
    *(unsigned *)(param_1 + 0x122c) = 0;
    *(unsigned *)(param_1 + 0x1234) = 0;
  }
  if (*(unsigned *)(param_1 + 0x1230) != 0) {
    fn_8251FA58(*(unsigned *)(param_1 + 0x1230));
    *(unsigned *)(param_1 + 0x1230) = 0;
    *(unsigned *)(param_1 + 0x1238) = 0;
  }
    }
};

extern "C" void fn_82286BF0(Obj_82286BF0 *o)
{
    o->Obj_82286BF0::~Obj_82286BF0();
}
