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
extern unsigned char KfAcquireSpinLock(void *);
extern void KfReleaseSpinLock(void *, unsigned char);
extern void *memcpy(void *, const void *, unsigned int);
extern void fn_829C8440(int, int);
extern char lbl_83215000[];

int fn_829C8918(int idx)
{
  unsigned char irql = KfAcquireSpinLock(lbl_83215000 + 0x6c);
  if (*(int *)(lbl_83215000 + 0x6ac + idx * 0x184) == 0) {
    char *src = lbl_83215000 + 0x6b0 + idx * 0x184;
    char *dst = lbl_83215000 + 0x70c + idx * 0x184;
    memcpy(dst, src, 0x5c);
    KfReleaseSpinLock(lbl_83215000 + 0x6c, irql);
    fn_829C8440(idx, 1);
  } else {
    KfReleaseSpinLock(lbl_83215000 + 0x6c, irql);
  }
  return 0;
}
