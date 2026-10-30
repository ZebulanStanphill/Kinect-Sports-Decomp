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
extern void *fn_82AC6560(undefined4, int, int);
typedef struct W_82AD17B0 {
  unsigned int x0:1;
  unsigned int f1:1;
  unsigned int x2:2;
  unsigned int a:3;
  unsigned int c:12;
  unsigned int b:8;
  unsigned int d:5;
} W_82AD17B0;
typedef struct N_82AD17B0 { W_82AD17B0 w; struct N_82AD17B0 *p4; struct N_82AD17B0 *next; unsigned int owner; } N_82AD17B0;
typedef struct O_82AD17B0 { int p0; N_82AD17B0 *head; unsigned int flags; } O_82AD17B0;

void fn_82AD17B0(undefined4 param_1, O_82AD17B0 *o)
{
  N_82AD17B0 *n;
  N_82AD17B0 *c;

  n = (N_82AD17B0 *)fn_82AC6560(param_1, 0x14, 0x1a);
  n->owner = (unsigned int)o;
  n->w.a = 1;
  n->w.b = 0xe4;
  c = o->head;
  n->next = c;
  o->head = n;
  n->w.a = (o->flags >> 14) & 7;
  for (; c != 0; c = c->next) {
    if (c->w.a != 0) {
      if ((unsigned char)c->w.f1 != 0) {
        n->w.c = c->w.c;
        n->w.f1 = 1;
      }
      break;
    }
  }
  if ((o->flags & 1) != 0) {
    n->w.d = 1;
  }
}
