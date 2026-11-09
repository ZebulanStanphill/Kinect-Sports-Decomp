extern void fn_8267C4F0(void *);
extern float fn_826972E0(void *, void *);
extern void *fn_826957D0(void *, int);
extern void fn_826959C8(void *);

struct Svc_8274BD08;
typedef struct SvcVT_8274BD08 {
  int pad[1];
  unsigned char (*f04)(struct Svc_8274BD08 *self, unsigned int arg);
} SvcVT_8274BD08;

typedef struct Svc_8274BD08 {
  SvcVT_8274BD08 *vt;
} Svc_8274BD08;

struct Reg_8274BD08;
typedef struct RegVT_8274BD08 {
  int pad[3];
  Svc_8274BD08 *(*f0c)(struct Reg_8274BD08 *self, int id);
} RegVT_8274BD08;

typedef struct Reg_8274BD08 {
  RegVT_8274BD08 *vt;
} Reg_8274BD08;

typedef struct Holder_8274BD08 {
  char pad[8];
  Reg_8274BD08 reg;
} Holder_8274BD08;

typedef struct Out_8274BD08 {
  unsigned char kind;
  char pad[3];
  unsigned char res;
} Out_8274BD08;

typedef struct Obj_8274BD08 {
  char pad0[4];
  Out_8274BD08 *out;
  char pad8[0x10];
  void *f18;
} Obj_8274BD08;

extern Holder_8274BD08 *fn_826A7398(void *);

void fn_8274BD08(Obj_8274BD08 *o)
{
  Reg_8274BD08 *reg;
  Svc_8274BD08 *svc;
  unsigned char res;
  Out_8274BD08 *out;
  void *a;
  float b;

  if (o->f18 != 0) {
    reg = &fn_826A7398(o->f18)->reg;
    svc = reg->vt->f0c(reg, 0x1b);
    res = 0;
    if (svc != 0) {
      SvcVT_8274BD08 *vt = svc->vt;
      void *f18 = o->f18;
      a = fn_826957D0(o, 0);
      b = fn_826972E0(a, f18);
      res = vt->f04(svc, (unsigned int)b);
    }
    out = o->out;
    fn_826959C8(out);
    out->res = res;
    out->kind = 2;
    if (svc != 0) {
      fn_8267C4F0(svc);
    }
  }
}
