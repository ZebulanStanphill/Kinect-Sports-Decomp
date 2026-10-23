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
extern void fn_8223C478(int w, int n, int z);
extern void fn_823B4970();
extern void fn_828E9D40();
extern void fn_828E9D60();
extern __int64 fn_828E9D90();
extern void fn_828E9F18(int w, unsigned __int64 v, int n);

static void WriteBits(int w, unsigned __int64 v, int n) { fn_8223C478(w, n, 0); fn_828E9F18(w, v, n); }

void fn_823B44E0(int param_1, int param_2)
{
  __int64 v;
  WriteBits(param_2, *(unsigned __int64 *)(param_1 + 0x88), 0x1e);
  v = fn_828E9D90(*(int *)(param_1 + 0x80));
  fn_828E9D40(*(int *)(param_1 + 0x80));
  fn_823B4970(param_2, *(int *)(param_1 + 0x80), v, 0);
  fn_828E9D60(*(int *)(param_1 + 0x80), v);
}
