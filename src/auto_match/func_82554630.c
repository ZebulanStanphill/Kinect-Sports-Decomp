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
typedef struct Obj Obj;
typedef struct {
  void (*Release)(Obj *, int);
} ObjVtbl;
struct Obj { ObjVtbl *vtbl; };

typedef struct Mgr Mgr;
typedef struct {
  void *f0[6];
  void (*Free)(Mgr *, void *, void *);
} MgrVtbl;
struct Mgr { MgrVtbl *vtbl; };

typedef struct {
  void *vtbl;
  char pad[0x188];
  unsigned int count;
  Obj **a;
  Obj **b;
  Obj **c;
} Self;

extern void fn_827F1080(Self *self);
extern void fn_82811438(void *out, void *in, int size);
extern unsigned int lbl_821C4CB8;
extern Mgr *lbl_832823E0;

void fn_82554630(Self *param_1)
{
  unsigned int i;
  int desc[4];
  char buf[32];

  param_1->vtbl = &lbl_821C4CB8;
  for (i = 0; i < param_1->count; i++) {
    if (i != 0) {
      param_1->c[i - 1]->vtbl->Release(param_1->c[i - 1], 0);
    }
    param_1->a[i]->vtbl->Release(param_1->a[i], 0);
    param_1->b[i]->vtbl->Release(param_1->b[i], 0);
  }
  desc[0] = 3;
  fn_82811438(buf, desc, 0x10);
  lbl_832823E0->vtbl->Free(lbl_832823E0, param_1->b, buf);
  fn_827F1080(param_1);
}
