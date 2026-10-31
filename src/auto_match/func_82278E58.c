// Built with link-time code generation together with its "ltcg_units" (objects.json):
// the frame reserves the 8*(n+8) outgoing area LTCG gives calls to a compiled variadic function.
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
extern void fn_82273C88(void *);
extern void fn_82273CD8(void *, int);
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern void fn_8266F600(int, int, char *, int);
extern void fn_82672C20(int, char *, void *, int);

typedef struct { int first; int second; char *p; } Pair_82278E58;

void fn_82278E58(int param_1, int param_2)
{
  Pair_82278E58 h;
  char b0[32];
  char b90[128];

  fn_8266F600(*(int *)(param_1 + 8), param_2, b0, 0x20);
  h.first = 0;
  h.second = 0;
  fn_82273CD8(&h, 4);
  h.p = b0;
  fn_82526C70(b90, 0x80, "%s.SetIcon", param_1 + 0x18);
  fn_82672C20(*(int *)(param_1 + 8), b90, &h, 1);
  fn_82273C88(&h);
}
