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
extern int fn_82C10F40();


typedef struct { char pad[0x4a]; unsigned short n; char pad2[4]; char *tab; } T_82C1D9D8;
unsigned int fn_82C1D9D8(undefined8 param_1,undefined8 param_2,int *param_3)
{
  unsigned int hr;
  unsigned short i;
  T_82C1D9D8 *t = 0;
  *param_3 = 0;
  hr = fn_82C10F40(param_1,param_2,&t);
  if (hr == 0x80500016) return 0;
  if (t->n != 0) {
    i = 0;
    do {
      *param_3 += *(unsigned short *)(t->tab + i * 0x1c + 0x10);
      i++;
    } while (i < t->n);
  }
  return hr;
}
