typedef struct Inst_8252BF00 Inst_8252BF00;
typedef struct InstVt_8252BF00 {
  void (*dtor)(Inst_8252BF00 *, int);
  void *s1;
  void (*stop)(Inst_8252BF00 *);
} InstVt_8252BF00;
struct Inst_8252BF00 {
  InstVt_8252BF00 *vt;
};

typedef struct Ctx_8252BF00 {
  char pad0[0xb8];
  struct { char pad[0x80]; int v; } *info;
} Ctx_8252BF00;

typedef struct Sub_8252BF00 {
  int pad0;
  Inst_8252BF00 *inst;
  char pad8[8];
  char area10[0x24];
  char area34[0x2c];
  int kind;
} Sub_8252BF00;

typedef struct Obj_8252BF00 {
  char pad0[0x8bc];
  Sub_8252BF00 sub;
} Obj_8252BF00;

typedef union FloatBits_8252BF00 {
  float f;
  unsigned int u;
} FloatBits_8252BF00;

extern Inst_8252BF00 *fn_82523340(void *, int, void *, void *, int, int, int, int);
extern Inst_8252BF00 *fn_82523548(void *, int, int, int, void *, void *, int, int, int);
extern void fn_8252CAF8(Obj_8252BF00 *, int, unsigned char);
extern void *fn_8265C9E0(int);
extern float lbl_8218E8FC;
extern float lbl_821CA45C[];
extern unsigned int lbl_83265A28;

int fn_8252BF00(Obj_8252BF00 *self, int kind, int a, int one, int b, int c, int d, Ctx_8252BF00 *ctx)
{
  Sub_8252BF00 *s = &self->sub;
  Inst_8252BF00 *inst;
  void *mem;
  int v;
  int k;
  FloatBits_8252BF00 u;

  if (s->inst != 0) {
    s->inst->vt->stop(s->inst);
    if (s->inst != 0)
      s->inst->vt->dtor(s->inst, 1);
    s->inst = 0;
  }
  v = ctx->info->v;
  if (kind == 7) {
    mem = fn_8265C9E0(0x319c0);
    if (mem != 0)
      inst = fn_82523340(mem, b, s->area10, s->area34, v, c, 0, d);
    else
      inst = 0;
  } else {
    mem = fn_8265C9E0(0x319c0);
    if (mem != 0)
      inst = fn_82523548(mem, kind, a, one == 1, s->area10, s->area34, v, c, d);
    else
      inst = 0;
  }
  k = s->kind;
  s->inst = inst;
  if (k == 4) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    u.u = lbl_83265A28 & 0x7fffff | 0x3f800000;
    k = (int)((u.f - lbl_821CA45C[1]) * lbl_8218E8FC);
  }
  fn_8252CAF8(self, 0xf, (unsigned char)k);
  return self->sub.inst != 0;
}
