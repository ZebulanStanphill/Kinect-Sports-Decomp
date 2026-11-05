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
typedef struct Heap_8259B6D8 Heap_8259B6D8;
typedef struct { int pad[3]; void *(*alloc)(Heap_8259B6D8 *, int, int); } HeapVt_8259B6D8;
struct Heap_8259B6D8 { HeapVt_8259B6D8 *vt; };
extern int fn_8259A3A8(void *, void *, int, int *, int, int);
extern void *fn_8259AF08(int, int *);
extern int fn_827D96A0(int);
extern int fn_82811400(void *, int);
extern Heap_8259B6D8 *lbl_83156AA0;

void *fn_8259B6D8(int param_1, int param_2)
{
  int a[4];
  char buf[32];
  void *r;
  void *o;
  a[0] = fn_827D96A0(param_2);
  r = fn_8259AF08(param_1, a);
  if (r != 0) {
    o = lbl_83156AA0->vt->alloc(lbl_83156AA0, 0x1b8, fn_82811400(buf, 4));
    if (o != 0) {
      a[0] = 0;
      return (void *)fn_8259A3A8(o, r, *(int *)(param_1 + 0x70), a, param_2, 0);
    }
  }
  return 0;
}
