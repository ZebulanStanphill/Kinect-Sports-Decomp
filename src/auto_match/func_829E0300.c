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
typedef struct Req_829E0300 {
  int size;
  int pad;
} Req_829E0300;
typedef struct Obj_829E0300 {
  unsigned char f0;
  char pad1[3];
  int f4;
  void *f8;
  int fc;
  void *f10;
  void *f14;
} Obj_829E0300;
typedef struct Sys_829E0300 {
  char pad[0x8f4cc];
  void *heap;
} Sys_829E0300;
extern void XamXlfsUninitializeUploadQueue(void *h, Req_829E0300 *r);
extern void fn_82A28E60(void *heap, int a, void *p);
extern Sys_829E0300 *lbl_832179FC;

extern void *memset(void *, int, unsigned);

void fn_829E0300(Obj_829E0300 *o)
{
  if (o->f14 != 0) {
    Req_829E0300 r;
    memset(&r, 0, 8);
    r.size = 8;
    XamXlfsUninitializeUploadQueue(o->f14, &r);
    o->f14 = 0;
  }
  if (o->f10 != 0) {
    fn_82A28E60(lbl_832179FC->heap, 0, o->f10);
    o->f10 = 0;
  }
  if (o->f8 != 0) {
    fn_82A28E60(lbl_832179FC->heap, 0, o->f8);
    o->f8 = 0;
  }
  o->f0 = 0;
  o->f4 = 0;
  o->fc = 0;
}
