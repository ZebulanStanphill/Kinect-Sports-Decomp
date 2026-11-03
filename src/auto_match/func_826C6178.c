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
typedef struct Obj_826C6178 Obj_826C6178;
struct Obj_826C6178 { struct { int pad[2]; int (*f8)(Obj_826C6178 *); } *vt; };
typedef struct { int pad; char *a; Obj_826C6178 *obj; } S_826C6178;
extern void fn_826959C8(char *);
extern void fn_82696BC8(char *, char *);

void fn_826C6178(S_826C6178 *p)
{
  char *a;
  if (p->obj == 0 || p->obj->vt->f8(p->obj) != 0xb) {
    a = p->a;
    fn_826959C8(a);
    *a = 0;
  } else {
    fn_82696BC8(p->a, p->obj != 0 ? (char *)p->obj - 0x10 : 0);
  }
}
