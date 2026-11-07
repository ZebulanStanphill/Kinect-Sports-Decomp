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
extern int fn_82419580(void *obj, int arg);
extern int fn_82419700(int obj, int arg);


void fn_8235C930(int param_1,int *param_2)

{
  int i;
  int entry;
  void *obj;

  switch (*param_2) {
  case 0x59:
    i = 0;
    if (0 < *(int *)(param_1 + 0xc04)) {
      entry = param_1 + 0x1ec0;
      do {
        if (fn_82419700(entry,param_2[2]) != 0) {
          param_2[3] = 1;
          return;
        }
        i = i + 1;
        entry = entry + 0x420;
      } while (i < *(int *)(param_1 + 0xc04));
    }
    break;
  case 0x58:
    obj = *(void **)(param_1 + 0x2b20);
    if (obj != 0) {
      fn_82419580(obj,param_2[2]);
    }
    break;
  }
  return;
}
