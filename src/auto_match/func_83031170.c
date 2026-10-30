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
extern void *memcpy(void *, const void *, unsigned);
extern unsigned char fn_830310B8(void *);

typedef struct Nd_83031170 { struct Nd_83031170 *next; int pad; } Nd_83031170;
typedef struct Pool_83031170 { Nd_83031170 *head; Nd_83031170 *last; Nd_83031170 *free; int pad[2]; int count; } Pool_83031170;

void *fn_83031170(Pool_83031170 *param_1, unsigned char *param_2)
{
  char *d;

  if (fn_830310B8(param_1) != 0) {
    if (param_1->last == 0) {
      param_1->head = param_1->free;
    } else {
      param_1->last->next = param_1->free;
    }
    param_1->last = param_1->free;
    param_1->free = param_1->last->next;
    param_1->last->next = 0;
    param_1->count = param_1->count + 1;
    d = (char *)param_1->last + 8;
    memcpy(d, param_2, 0x68);
    return d;
  }
  return 0;
}
