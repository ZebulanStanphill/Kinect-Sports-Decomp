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
typedef struct Item_82BA9620 Item_82BA9620;
typedef struct Vt_82BA9620 { char pad[0x1c]; unsigned char (*f1c)(Item_82BA9620 *); unsigned char (*f20)(Item_82BA9620 *); } Vt_82BA9620;
struct Item_82BA9620 { Vt_82BA9620 *vt; };
typedef struct Vec_82BA9620 { int pad; unsigned int count; Item_82BA9620 **data; } Vec_82BA9620;
typedef struct Node_82BA9620 { char pad[0x14]; char sub[0x24]; Vec_82BA9620 *vec; } Node_82BA9620;
typedef struct Obj_82BA9620 { char pad[0x90]; Node_82BA9620 *b; Node_82BA9620 *a; unsigned int key; } Obj_82BA9620;
extern int fn_82BBFE28(void *);
extern int fn_82BC5AB0(Node_82BA9620 *);

static Item_82BA9620 **first_82BA9620(Vec_82BA9620 *v)
{
  if (v->count > 0) {
    return v->data;
  }
  return 0;
}

unsigned char fn_82BA9620(Obj_82BA9620 *o, unsigned char *out)
{
  Item_82BA9620 *it;
  *out = 0;
  if (fn_82BBFE28(o->a->sub) <= 2 && fn_82BBFE28(o->b->sub) <= 2 && fn_82BC5AB0(o->a) == 1) {
    if (*(unsigned *)first_82BA9620(o->a->vec) == o->key && fn_82BC5AB0(o->b) == 1) {
      it = *first_82BA9620(o->b->vec);
      if (it->vt->f1c(it) != 0) {
        return 1;
      }
      it = *first_82BA9620(o->b->vec);
      if (it->vt->f20(it) != 0) {
        *out = 1;
        return 1;
      }
    }
  }
  return 0;
}
