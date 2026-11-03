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
extern void *fn_82930318(int);
extern void fn_82930358(void *);
extern char lbl_82031798[];
typedef struct { void *vt; int p4, p8; int next; int a; int b; } Node;
typedef struct { char pad[0x148]; Node *head; } Obj;
Node *fn_82937188(Obj *self, int b, int a)
{
  Node *mem, *p;
  mem = (Node *)fn_82930318(0x18);
  if (mem != 0) {
    fn_82930358(mem);
    mem->a = -1;
    mem->vt = lbl_82031798;
    mem->b = -1;
    p = mem;
  } else {
    p = 0;
  }
  p->a = a;
  p->b = b;
  p->next = self->head;
  self->head = p;
  return p;
}
