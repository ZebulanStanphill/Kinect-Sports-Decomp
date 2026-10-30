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



typedef struct Type_82DB4B60 { char p[0xe8]; unsigned char kind; } Type_82DB4B60;
typedef struct Pair_82DB4B60 { int p0; Type_82DB4B60 *a; Type_82DB4B60 *b; } Pair_82DB4B60;
typedef struct Item_82DB4B60 { char p[0x30]; Pair_82DB4B60 *pair; } Item_82DB4B60;
typedef struct E_82DB4B60 { Item_82DB4B60 *item; int b, c; } E_82DB4B60;
typedef struct V_82DB4B60 { E_82DB4B60 *data; int size; } V_82DB4B60;

static char is45(unsigned char t) { if (t == 5 || t == 4) return 1; return 0; }

void fn_82DB4B60(V_82DB4B60 *v, int *cnt, int n)
{
  int i;
  for (i = v->size - n; i < v->size; i++) {
    Pair_82DB4B60 *m = v->data[i].item->pair;
    if (is45(m->a->kind) || is45(m->b->kind)) {
      int k = (*cnt)++;
      E_82DB4B60 *e;
      E_82DB4B60 *g;
      Item_82DB4B60 *a;
      int b, c;
      e = v->data + k;
      g = v->data + i;
      c = e->c;
      a = e->item;
      e->item = g->item;
      b = e->b;
      e->b = g->b;
      e->c = g->c;
      g->item = a; g->b = b; g->c = c;
    }
  }
}
