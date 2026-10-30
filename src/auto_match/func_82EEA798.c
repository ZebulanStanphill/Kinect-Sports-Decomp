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
typedef struct Elem_82EEA798 Elem_82EEA798;
typedef struct { void (*dtor)(Elem_82EEA798 *, int); void *f4; void (*f8)(Elem_82EEA798 *); } Vt_82EEA798;
struct Elem_82EEA798 { Vt_82EEA798 *vt; };
typedef struct { char pad[0x4c]; int f4c; Elem_82EEA798 *list; char cs[1]; } Obj_82EEA798;

extern void fn_82A29A38(void);
extern void fn_82EE9FF0(Obj_82EEA798 *o);
extern int fn_82EEA6E8(Elem_82EEA798 *list, Elem_82EEA798 **out);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

void fn_82EEA798(Obj_82EEA798 *o)
{
  Elem_82EEA798 *e;

  if (o->f4c != 0) {
    fn_82A29A38();
  } else {
    RtlEnterCriticalSection(o->cs);
    if (o->list != 0) {
      e = 0;
      while (fn_82EEA6E8(o->list, &e) != 0) {
        if (e != 0) {
          e->vt->f8(e);
          e = 0;
        }
      }
      if (o->list != 0) {
        o->list->vt->dtor(o->list, 1);
      }
      o->list = 0;
      RtlLeaveCriticalSection(o->cs);
    }
    fn_82EE9FF0(o);
  }
}
