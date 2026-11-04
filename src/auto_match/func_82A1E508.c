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
extern void *__imp_ExThreadObjectType;
extern int ObReferenceObjectByHandle(void *, void *, void **);
extern int KeSetAffinityThread(void *, unsigned, unsigned *);
extern void ObDereferenceObject(void *);
extern unsigned int _CountLeadingZeros(unsigned int);
extern void fn_82A31F28(int);

int fn_82A1E508(void *h, unsigned cpu)
{
  int hr;
  void *thr;
  unsigned prev;
  if (cpu < 6) {
    hr = ObReferenceObjectByHandle(h, __imp_ExThreadObjectType, &thr);
    if (hr < 0) goto fail;
    hr = KeSetAffinityThread(thr, 1 << cpu, &prev);
    ObDereferenceObject(thr);
  } else {
    hr = 0xC000000D;
  }
  if (hr >= 0) {
    if (prev != 0) return 0x1f - _CountLeadingZeros(prev);
    return 0;
  }
fail:
  fn_82A31F28(hr);
  return -1;
}
