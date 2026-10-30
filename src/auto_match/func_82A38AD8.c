extern int *piRam83219598;
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
typedef struct Obj_82A38AD8 Obj_82A38AD8;
typedef struct VT_82A38AD8 {
  void *s[8];
  int (*f20)(unsigned int, int, void *, int, int);
  int (*f24)(unsigned int, int, __int64 *, int, int);
} VT_82A38AD8;
struct Obj_82A38AD8 { VT_82A38AD8 *vt; char pad[0x4c]; char sub[4]; };
typedef struct Node_82A38AD8 { int pad0; unsigned int h; char pad[0x28]; __int64 v; } Node_82A38AD8;
extern int fn_82A33D80(Obj_82A38AD8 *, Node_82A38AD8 *, unsigned int, int);
extern Node_82A38AD8 *fn_82A381F0(void *, unsigned int, int);
extern Obj_82A38AD8 *lbl_83219598;

int fn_82A38AD8(unsigned int param_1, int param_2, __int64 *param_3, int param_4, int op)
{
  Obj_82A38AD8 *o = lbl_83219598;
  Node_82A38AD8 *n;
  __int64 t;
  int r;
  n = fn_82A381F0(o->sub, param_1, 0);
  if (n != 0) {
    if (op == 0xe) {
      __int64 v = *param_3;
      if (fn_82A33D80(o, n, (unsigned int)v, 0) == 0) {
        return 0xc000000d;
      }
      n->v = v;
      return 0;
    }
    if (op != 0x13 && op != 0x14 && op != 0x1c && (op == 5 || op == 0x22)) {
      r = o->vt->f20(n->h, param_2, &t, 8, 0x13);
      if (r < 0) {
        return r;
      }
      if (op == 5) {
        param_3[0] = t;
        param_3[1] = t;
      } else if (op == 0x22) {
        param_3[4] = t;
        param_3[5] = t;
      }
    }
    param_1 = n->h;
  }
  return o->vt->f24(param_1, param_2, param_3, param_4, op);
}
