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
typedef struct Blk_829EC0F8 {
  int pad0;
  unsigned char *aligned;
  unsigned char *raw;
  int padc;
  unsigned int size;
} Blk_829EC0F8;
extern void *fn_82A28568(void *, int, unsigned int);
extern void fn_82A28E60(void *, int, void *);
extern void *memset(void *, int, unsigned int);
extern char *lbl_832179FC;

unsigned char *fn_829EC0F8(Blk_829EC0F8 *b, unsigned int size, int mode, unsigned char clear)
{
  unsigned int want;
  void *p;

  if (mode == 3 || mode == 4) {
    want = ((size + 0x3f) & 0xffffffc0) + 0x40;
  } else if (mode == 1 || mode == 2) {
    want = ((size + 0xf) & 0xfffffff0) + 0x10;
  } else {
    want = size;
  }
  if (b->raw == 0 || b->size != want) {
    p = fn_82A28568(*(void **)(lbl_832179FC + 0x8f4cc), 0, want);
    if (p == 0) {
      return 0;
    }
    if (b->raw != 0) {
      fn_82A28E60(*(void **)(lbl_832179FC + 0x8f4cc), 0, b->raw);
    }
    b->size = want;
    b->raw = (unsigned char *)p;
  }
  if (mode == 3 || mode == 4) {
    b->aligned = (unsigned char *)(((unsigned int)b->raw + 0x3f) & 0xffffffc0);
  } else if (mode == 1 || mode == 2) {
    b->aligned = (unsigned char *)(((unsigned int)b->raw + 0xf) & 0xfffffff0);
  } else {
    b->aligned = b->raw;
  }
  if (clear != 0) {
    memset(b->aligned, 0, size);
  }
  return b->aligned;
}
