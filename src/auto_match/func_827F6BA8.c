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
extern int fn_827F9450();
extern int fn_827F94C8();
extern int fn_827F98C8();
extern int fn_8280CB58();
extern int fn_82810208();

typedef struct { float x, y, z; } Vec3;

int fn_827F6BA8(int param_1, int param_2, int param_3)
{
  int a;
  int b;
  Vec3 v;

  fn_827F98C8(param_2, param_3, &b);
  fn_827F9450(param_2, param_3, &a);
  fn_827F94C8(b, a, &v);
  fn_8280CB58(a, param_1);
  fn_82810208(&v, param_1, param_1);
  return param_1;
}
