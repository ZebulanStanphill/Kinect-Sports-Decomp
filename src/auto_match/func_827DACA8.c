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
extern int fn_827D9E98();
void *memmove(void *dst, const void *src, unsigned int n);
void RtlEnterCriticalSection(void *cs);
void RtlLeaveCriticalSection(void *cs);

typedef struct Obj Obj;
struct Obj {
  void (**vtbl)(Obj *, int);
};

void fn_827DACA8(int param_1)

{
  Obj *obj;
  Obj **p;
  Obj **next;

  RtlEnterCriticalSection((void *)(param_1 + 0xbfc));
  p = *(Obj ***)(param_1 + 0xbd4);
  if (p != *(Obj ***)(param_1 + 0xbd8)) {
    next = p + 1;
    do {
      obj = *p;
      if (fn_827D9E98(obj) == 0) {
        memmove(p,next,(*(Obj ***)(param_1 + 0xbd8) - next) * sizeof(Obj *));
        *(Obj ***)(param_1 + 0xbd8) = *(Obj ***)(param_1 + 0xbd8) - 1;
        if (obj != 0) {
          obj->vtbl[0](obj,1);
        }
      }
      else {
        p = p + 1;
        next = next + 1;
      }
    } while (p != *(Obj ***)(param_1 + 0xbd8));
  }
  RtlLeaveCriticalSection((void *)(param_1 + 0xbfc));
  return;
}
