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
extern int fn_827F9E08(int);
extern void fn_82805590(void *, int);
extern void fn_828079D8(void *);
extern void fn_82807A50(void *, int);
extern void fn_82807A70(void *, int);
extern void fn_82807A80(void *, void *);
extern void fn_82807A90(void *, int);
extern void fn_82807A98(void *, int);
extern void fn_82807AB0(void *, float);
extern void fn_82807AB8(void *, int, int, int);
extern void fn_82808638(void *, int, int, int);
extern void fn_82802110(void);

void fn_82802228(int param_1, float param_2, int param_3, int param_4, unsigned param_5, int param_6,
                 int param_7, int param_8, int param_9, int param_10)
{
  char buf[96];

  fn_828079D8(buf);
  fn_82807A50(buf, param_8);
  fn_82807AB0(buf, param_2);
  fn_82807A70(buf, param_8);
  fn_82807A98(buf, param_7);
  fn_82805590(buf, param_10);
  if (fn_827F9E08(param_1) == 1) {
    fn_82807A80(buf, (void *)fn_82802110);
    fn_82807A90(buf, 6);
  }
  fn_82808638(buf, param_3, param_4, param_6);
  if (param_5 != 0) {
    fn_82807AB8(buf, param_3, param_5, 0);
  }
}
