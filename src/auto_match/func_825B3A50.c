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
extern void *fn_8265C9E0(int);
extern void fn_827D84F8(void *, void *);
extern char lbl_821C8424[];
extern void *lbl_83265A24;

typedef struct Obj_825B3A50 {
  void *vt;
  int a, b, c, d;
} Obj_825B3A50;

void fn_825B3A50(int a, int b, int c, int d)
{
  Obj_825B3A50 *mem = (Obj_825B3A50 *)fn_8265C9E0(0x14);
  Obj_825B3A50 *o;
  if (mem != 0) {
    mem->a = a;
    mem->b = b;
    mem->c = c;
    mem->d = d;
    mem->vt = lbl_821C8424;
    o = mem;
  } else {
    o = 0;
  }
  fn_827D84F8(lbl_83265A24, o);
}
