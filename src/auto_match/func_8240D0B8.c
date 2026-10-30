extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B7E04;
extern float lbl_821CC160;

typedef struct Buf { unsigned char d[0x2c]; } Buf;
typedef struct Sub {
  void *vt;      /* 0x00 */
  int f4;
  int f8;
  int fc;
  int f10;
  int f14;
  int f18;
  Buf buf;
  int f48;
  int f4c;
  int f50;
  int f54;
  int f58;
  int f5c;
  int f60;
  int f64;
  float f68;
  int f6c;
  int f70;
  int f74;
  int f78;
} Sub;
typedef struct Obj { void *vt; int f4; int f8; Sub s; } Obj;
typedef struct Src { int s0; int s1; int s2; int s3; int s4; int s5; void *s6; int s7; int s8; int s9; int s10; } Src;

Obj *fn_8240D0B8(Obj *param_1, Src *param_2)
{
  Sub *s;
  float fv;
  param_1->f4 = 1;
  param_1->vt = &lbl_821AD588;
  param_1->f8 = 1;
  s = &param_1->s;
  if (s != 0) {
    int a = param_2->s3;
    int b = param_2->s0;
    int c = param_2->s2;
    int d = param_2->s1;
    s->f4 = 5;
    s->fc = a;
    s->f8 = b;
    s->f14 = c;
    s->f10 = d;
    s->vt = &lbl_821B7E04;
    s->f18 = 0;
    s->buf = *(Buf *)param_2->s6;
    fv = lbl_821CC160;
    s->f48 = 0;
    s->f4c = 0;
    s->f50 = param_2->s7;
    s->f54 = param_2->s8;
    s->f58 = param_2->s4;
    s->f5c = param_2->s5;
    s->f60 = param_2->s9;
    s->f64 = param_2->s10;
    s->f68 = fv;
    s->f6c = 0;
    s->f70 = 0;
    s->f74 = 0;
    s->f78 = 0;
  }
  return param_1;
}
