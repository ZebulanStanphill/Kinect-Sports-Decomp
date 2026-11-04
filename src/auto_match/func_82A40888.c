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
//BODY
typedef struct Node_82A40888 { void *val; struct Node_82A40888 *next; } Node_82A40888;
typedef struct VO_82A40888 { void (**vt)(struct VO_82A40888 *); } VO_82A40888;
typedef struct Sub_82A40888 { void (**vt)(struct Sub_82A40888 *); } Sub_82A40888;
typedef struct Obj_82A40888 {
  char pad[0x70];
  Sub_82A40888 sub;
  char pad2[0x1fc - 0x74];
  Node_82A40888 *list1;
  char pad3[0x20c - 0x200];
  float vol;
  char pad4[0x22c - 0x210];
  Node_82A40888 *list2;
  int pad5;
  unsigned int cnt2;
} Obj_82A40888;

extern void fn_82A43BF8(void *);
extern void fn_82A459A8();
extern int XAudioGetVoiceCategoryVolume(int, float *);

void fn_82A40888(Obj_82A40888 *o)
{
  float v;
  Node_82A40888 *it;
  Node_82A40888 *cur;
  void *val;
  Sub_82A40888 *sub;
  XAudioGetVoiceCategoryVolume(1, &v);
  if (v != o->vol) {
    it = o->list1;
    o->vol = v;
    while (it != 0) {
      cur = it;
      if (it != 0) {
        it = it->next;
        val = cur->val;
      } else {
        val = 0;
      }
      fn_82A43BF8(val);
    }
  }
  sub = &o->sub;
  sub->vt[2](sub);
  if (o->cnt2 != 0) {
    it = o->list2;
    for (;;) {
      cur = it;
      if (it != 0) {
        it = it->next;
        val = cur->val;
      } else {
        val = 0;
      }
      if (val == 0) break;
      (*(*(void (***)(void *))val))(val);
    }
  }
  sub->vt[5](sub);
  fn_82A459A8();
}
