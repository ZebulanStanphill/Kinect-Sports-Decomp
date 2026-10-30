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
struct Lk_82A4B938;
typedef struct { char pad[8]; void (*f8)(struct Lk_82A4B938 *); char pad2[8]; void (*f14)(struct Lk_82A4B938 *); } Vt_82A4B938;
typedef struct Lk_82A4B938 { Vt_82A4B938 *vt; } Lk_82A4B938;
typedef struct Node_82A4B938 { unsigned key; struct Node_82A4B938 *next; } Node_82A4B938;
typedef struct {
  char pad0[0x54];
  Lk_82A4B938 lk;
  char pad1[0x78 - 0x58];
  char sub[0x144 - 0x78];
  Node_82A4B938 *head;
} Obj_82A4B938;
extern void fn_82A40B38(void *, Node_82A4B938 *);

static Node_82A4B938 *Find_82A4B938(Node_82A4B938 *n, unsigned key) { for (; n != 0; n = n->next) if (n->key == key) return n; return 0; }
void fn_82A4B938(Obj_82A4B938 *o, unsigned key)
{
  Lk_82A4B938 *lk = &o->lk;
  Node_82A4B938 *n;
  lk->vt->f8(lk);
  n = Find_82A4B938(o->head, key);
  fn_82A40B38(o->sub, n);
  lk->vt->f14(lk);
}
