typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
typedef struct I { struct IVt *vt; } I;
struct IVt {
  void *f0, *f4;
  void (*f8)(I *);
  void (*fc)(I *);
  void *f10;
  void (*f14)(I *);
  char pad18[0x24];
  int (*f3c)(I *, I **, I **, int);
  int (*f40)(I *, I **, I **, int);
  int (*f44)(I *, I **, I **, int);
  char pad48[0xc];
  int (*f54)(I *, int);
  char pad58[0x24];
  int (*f7c)(I *, unsigned, unsigned *);
  char pad80[0x44];
  void (*fc4)(I *);
  void (*fc8)(I *);
};
typedef struct { I base; char pad[0x28]; I *m2c; } Self;
extern void fn_82C04268(I *, unsigned);
extern void fn_82C0BF10(I *);

int fn_82C0C8C8(Self *self, unsigned a, unsigned *out)
{
  int hr;
  I *r1, *r2, *r3, *r4, *r5, *r6;
  unsigned v;
  v = 0;
  r6 = 0;
  r5 = 0;
  r1 = 0;
  r2 = 0;
  r3 = 0;
  r4 = 0;
  self->base.vt->fc(&self->base);
  self->m2c->vt->f44(self->m2c, &r6, &r5, 0);
  self->m2c->vt->f3c(self->m2c, &r1, &r2, 0);
  hr = self->m2c->vt->f40(self->m2c, &r3, &r4, 0);
  if (r1 != 0) r1->vt->fc(r1);
  if (r2 != 0) r2->vt->fc(r2);
  if (r3 != 0) r3->vt->fc(r3);
  if (r4 != 0) r4->vt->fc(r4);
  if (r2 != 0) {
    hr = r2->vt->f7c(r2, a, &v);
    a = v;
  }
  if (hr >= 0) {
    if (r1 != 0) hr = r1->vt->f7c(r1, a, &v);
    if (hr >= 0) {
      if (r5 != 0) {
        hr = r4->vt->f54(r4, 4);
        fn_82C0BF10(r5);
      }
      if (hr >= 0) fn_82C04268(self->m2c, v);
    }
  }
  self->base.vt->fc8(&self->base);
  self->base.vt->fc4(&self->base);
  if (r4 != 0) r4->vt->f14(r4);
  if (r3 != 0) r3->vt->f14(r3);
  if (r2 != 0) r2->vt->f14(r2);
  if (r1 != 0) r1->vt->f14(r1);
  self->base.vt->f14(&self->base);
  if (out != 0) *out = v;
  if (r3 != 0) { r3->vt->f8(r3); r3 = 0; }
  if (r4 != 0) { r4->vt->f8(r4); r4 = 0; }
  if (r1 != 0) { r1->vt->f8(r1); r1 = 0; }
  if (r2 != 0) { r2->vt->f8(r2); r2 = 0; }
  if (r6 != 0) { r6->vt->f8(r6); r6 = 0; }
  if (r5 != 0) r5->vt->f8(r5);
  return hr;
}
