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
extern int fn_83050528();
extern int fn_830543B8();
extern int fn_83055CF0();
extern int fn_83055EE8();
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
void fn_830539F8(char *param_1)
{
  char *o;
  RtlEnterCriticalSection(param_1 - 0x40);
  o = param_1 - 0x78;
  *(unsigned int *)(o + 0x74) = *(unsigned int *)(o + 0x74) & 0xf6ffffff | 0x8000000;
  fn_83050528(o, 3);
  if (*(unsigned int *)(param_1 + 0x30) == 0 && *(unsigned int *)(param_1 + 0x34) == 0) {
    RtlLeaveCriticalSection(param_1 - 0x40);
  }
  else {
    fn_83055CF0(o);
    fn_830543B8(o, 0);
    RtlLeaveCriticalSection(param_1 - 0x40);
    fn_83055EE8(*(void **)(param_1 - 0x18), o);
  }
}
