extern void fn_8267C4F0(void *);
extern void *fn_82695608(void *, void *);
extern void *fn_826957D0(void *, int);
extern void fn_826959C8(void *);

struct Svc_8274BDB8;
typedef struct SvcVT_8274BDB8 {
  int pad[3];
  unsigned char (*f0c)(struct Svc_8274BDB8 *self, void *arg);
} SvcVT_8274BDB8;

typedef struct Svc_8274BDB8 {
  SvcVT_8274BDB8 *vt;
} Svc_8274BDB8;

struct Reg_8274BDB8;
typedef struct RegVT_8274BDB8 {
  int pad[3];
  Svc_8274BDB8 *(*f0c)(struct Reg_8274BDB8 *self, int id);
} RegVT_8274BDB8;

typedef struct Reg_8274BDB8 {
  RegVT_8274BDB8 *vt;
} Reg_8274BDB8;

typedef struct Holder_8274BDB8 {
  char pad[8];
  Reg_8274BDB8 reg;
} Holder_8274BDB8;

typedef struct Out_8274BDB8 {
  unsigned char kind;
  char pad[3];
  unsigned char res;
} Out_8274BDB8;

typedef struct Obj_8274BDB8 {
  char pad0[4];
  Out_8274BDB8 *out;
  char pad8[0x10];
  void *f18;
} Obj_8274BDB8;

extern Holder_8274BDB8 *fn_826A7398(void *);

void fn_8274BDB8(Obj_8274BDB8 *o)
{
  Reg_8274BDB8 *reg;
  Svc_8274BDB8 *svc;
  unsigned char res;
  Out_8274BDB8 *out;
  void *a;
  void *b;

  if (o->f18 != 0) {
    reg = &fn_826A7398(o->f18)->reg;
    svc = reg->vt->f0c(reg, 0x1b);
    res = 0;
    if (svc != 0) {
      SvcVT_8274BDB8 *vt = svc->vt;
      void *f18 = o->f18;
      a = fn_826957D0(o, 0);
      b = fn_82695608(a, f18);
      res = vt->f0c(svc, b);
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
