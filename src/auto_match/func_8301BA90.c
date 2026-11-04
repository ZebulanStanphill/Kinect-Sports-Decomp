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
typedef struct Obj_8301BA90 Obj_8301BA90;
typedef struct Vt_8301BA90 { int pad0[2]; void (*rel)(Obj_8301BA90 *); int pad1[6]; void (*f24)(Obj_8301BA90 *); } Vt_8301BA90;
struct Obj_8301BA90 { Vt_8301BA90 *vt; char pad[0xf8]; Obj_8301BA90 *sub; void *slot[4]; };
typedef struct Mgr_8301BA90 { char pad[0xc]; Obj_8301BA90 *obj[2]; } Mgr_8301BA90;
extern void fn_83026548(void *);

void fn_8301BA90(Mgr_8301BA90 *m)
{
  unsigned int i = 0;
  Obj_8301BA90 **pp = m->obj;
  do {
    Obj_8301BA90 *o = *pp;
    void **s;
    int k;
    if (o == 0) {
      return;
    }
    o->sub->vt->f24(o->sub);
    s = o->slot;
    k = 4;
    do {
      if (*s != 0) {
        fn_83026548(*s);
      }
      k--;
      s++;
    } while (k != 0);
    o->vt->rel(o);
    i++;
    pp++;
  } while (i < 2);
}
