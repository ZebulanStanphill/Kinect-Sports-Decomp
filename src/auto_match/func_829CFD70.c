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
extern char lbl_8315C428[];
extern unsigned int lbl_83215000[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int KeSetEvent(void *, int, int);

void fn_829CFD70(void)

{
  unsigned int *ev;
  int p;

  RtlEnterCriticalSection(lbl_8315C428);
  for (p = (int)(lbl_83215000 + 0x2128 / 4); p < (int)(lbl_83215000 + 0x2140 / 4); p += 4) {
    ev = (unsigned int *)*(unsigned int *)p;
    if (ev != 0) {
      KeSetEvent(ev,1,0);
      if (ev[4] != 0) {
        KeSetEvent((void *)ev[4],1,0);
      }
    }
  }
  if (lbl_83215000[0x2140 / 4] != 0) {
    KeSetEvent((void *)lbl_83215000[0x2140 / 4],1,0);
  }
  RtlLeaveCriticalSection(lbl_8315C428);
}
