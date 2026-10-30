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
struct Itm_82A40968;
typedef struct ItmVT_82A40968 {
  void *s0;
  void (*f4)(struct Itm_82A40968 *);
} ItmVT_82A40968;
typedef struct Itm_82A40968 {
  ItmVT_82A40968 *vt;
} Itm_82A40968;
typedef struct Node_82A40968 {
  Itm_82A40968 *item;
  struct Node_82A40968 *next;
} Node_82A40968;

struct Sub_82A40968;
typedef struct SubVT_82A40968 {
  void *s0, *s4;
  void (*f8)(struct Sub_82A40968 *);
  void *sc, *s10;
  void (*f14)(struct Sub_82A40968 *);
} SubVT_82A40968;
typedef struct Sub_82A40968 {
  SubVT_82A40968 *vt;
} Sub_82A40968;

typedef struct Obj_82A40968 {
  char pad[0x70];
  Sub_82A40968 sub;
  char pad74[0x22c - 0x74];
  Node_82A40968 *head;
  int pad230;
  unsigned count;
} Obj_82A40968;


void fn_82A40968(Obj_82A40968 *o)
{
  Sub_82A40968 *s = &o->sub;
  s->vt->f8(s);
  if (o->count != 0) {
    Node_82A40968 *n = o->head;
    for (;;) {
      Itm_82A40968 *it;
      Node_82A40968 *c = n; if (c) { n = c->next; it = c->item; } else it = 0;
      if (it == 0) break;
      it->vt->f4(it);
    }
  }
  s->vt->f14(s);
}
