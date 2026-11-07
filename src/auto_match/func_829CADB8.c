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
extern int fn_8265C990();
extern unsigned int lbl_83215000[];
extern char lbl_8315C428[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);




void fn_829CADB8(void)

{
  undefined4 *puVar1;
  int lVar2;
  unsigned int zero = 0;
  
  RtlEnterCriticalSection(lbl_8315C428);
  if (lbl_83215000[0x2168/4] != 0) {
    fn_8265C990(lbl_83215000[0x2168/4],0x209c0000);
    lbl_83215000[0x2168/4] = 0;
  }
  if (lbl_83215000[0x216c/4] != 0) {
    fn_8265C990(*(undefined4 *)(lbl_83215000[0x216c/4] + 100),0xac9c0000);
    fn_8265C990(lbl_83215000[0x216c/4],0x209c0000);
    lbl_83215000[0x216c/4] = 0;
  }
  if (lbl_83215000[0x2170/4] != 0) {
    fn_8265C990(*(undefined4 *)(lbl_83215000[0x2170/4] + 100),0xac9c0000);
    fn_8265C990(lbl_83215000[0x2170/4],0x209c0000);
    lbl_83215000[0x2170/4] = 0;
  }
  for (lVar2 = 0; lVar2 < 7; ++lVar2) {
    lbl_83215000[0x215c/4 + lVar2] = 0;
  }
  RtlLeaveCriticalSection(lbl_8315C428);
  return;
}

