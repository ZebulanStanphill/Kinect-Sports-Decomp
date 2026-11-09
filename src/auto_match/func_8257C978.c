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
extern float lbl_8327F880[];

typedef struct Obj_8257C978 Obj_8257C978;
typedef struct {
  void *f[6];
  void (*f18)(Obj_8257C978 *, void *);
} VtA_8257C978;
typedef struct {
  void *f[6];
  void (*f18)(Obj_8257C978 *, float);
} VtB_8257C978;
struct Obj_8257C978 {
  VtA_8257C978 *vt;
  int a, state;
};

typedef struct Link_8257C978 Link_8257C978;
struct Link_8257C978 {
  Link_8257C978 *next;
  Link_8257C978 *n2;
  Obj_8257C978 *obj;
};

void fn_8257C978(int param_1)
{
  unsigned int n;
  void *ctx;
  Link_8257C978 *it;
  Link_8257C978 *end;
  float step;
  n = *(unsigned int *)(param_1 + 4);
  ctx = *(void **)(param_1 + 0x34);
  while (n != 0) {
    Obj_8257C978 *o = (Obj_8257C978 *)(n - 0x38);
    n = *(unsigned int *)(n + 4);
    o->vt->f18(o, ctx);
  }
  step = 0.0f;
  if (*(float *)((char *)ctx + 0x838) <= step) {
    step = *(float *)((char *)ctx + 0x820) * lbl_8327F880[5];
  }
  end = *(Link_8257C978 **)(param_1 + 0x28);
  for (it = end->next; it != end; it = it->next) {
    Obj_8257C978 *q = it->obj;
    if (q->state == 2) {
      ((VtB_8257C978 *)q->vt)->f18(q, step);
    }
    end = *(Link_8257C978 **)(param_1 + 0x28);
  }
}
