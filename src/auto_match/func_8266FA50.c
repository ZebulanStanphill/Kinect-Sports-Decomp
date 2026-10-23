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
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

int fn_8266FA50(int param_1, int param_2, int param_3)
{
  int r;
  void *cs;

  r = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    cs = (void *)(param_1 + 0x108);
    if (cs != 0) {
      RtlEnterCriticalSection(cs);
    }
    r = (*(code *)(**(int **)(param_1 + 0x10) + 0x44))(*(int **)(param_1 + 0x10), param_2, param_3);
    if (cs != 0) {
      RtlLeaveCriticalSection(cs);
    }
  }
  return r;
}
