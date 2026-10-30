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
typedef struct VT_82FF57E0 { void (*dtor)(void *, int); } VT_82FF57E0;
typedef struct Item_82FF57E0 {
  VT_82FF57E0 *vt; char pad[0x14]; float f18; char pad2[8]; unsigned f24; char pad3[0xc]; int state;
} Item_82FF57E0;
typedef struct Vec_82FF57E0 { Item_82FF57E0 **begin; Item_82FF57E0 **end; } Vec_82FF57E0;

extern void fn_82FA5190(void *, void *);
extern unsigned char fn_8302AA50(Item_82FF57E0 *, unsigned);
extern void fn_8302ABC0(Item_82FF57E0 *);
extern void *lbl_831BC768;

void fn_82FF57E0(void *param_1, unsigned now, Vec_82FF57E0 *v)
{
  Item_82FF57E0 **cur = v->begin;
  if (cur != v->end) {
    do {
      Item_82FF57E0 *it = *cur;
      void *heap;
      if (it->state == 6) {
        fn_8302ABC0(it);
        heap = lbl_831BC768;
        it->vt->dtor(it, 0);
        fn_82FA5190(heap, it);
        if (1 < (unsigned)(v->end - v->begin)) {
          *cur = v->end[-1];
        }
        v->end = v->end - 1;
      } else {
        if (it->state != 2) {
          if (it->state == 4) {
            it->state = 1;
            it->f18 = (float)(now - it->f24) + it->f18;
          }
        } else {
          it->f24 = now;
          it->state = 3;
        }
        if (it->state == 1 && fn_8302AA50(it, now)) {
          fn_8302ABC0(it);
          if (1 < (unsigned)(v->end - v->begin)) {
            *cur = v->end[-1];
          }
          v->end = v->end - 1;
          heap = lbl_831BC768;
          it->vt->dtor(it, 0);
          fn_82FA5190(heap, it);
        } else {
          cur++;
        }
      }
    } while (cur != v->end);
  }
}
