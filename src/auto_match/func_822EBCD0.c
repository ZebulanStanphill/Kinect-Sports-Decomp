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
typedef struct { int a, b, c; } V3_822EBCD0;
typedef struct { char c[32]; } B32_822EBCD0;
extern void fn_822EC698(V3_822EBCD0 *, B32_822EBCD0 *);
extern void fn_822EC058(void *, V3_822EBCD0 *);
extern void fn_822DB5D0(V3_822EBCD0 *);
extern void fn_82230110(B32_822EBCD0 *, const char *);
extern void fn_82230300(B32_822EBCD0 *, int, int);
void fn_822EBCD0(void *param_1)
{
  V3_822EBCD0 v;
  B32_822EBCD0 a, b, c;
  v.a = 0; v.b = 0; v.c = 0;
  fn_82230110(&a,"_tired_");
  fn_822EC698(&v,&a);
  fn_82230300(&a,1,0);
  fn_82230110(&b,"_short_");
  fn_822EC698(&v,&b);
  fn_82230300(&b,1,0);
  fn_82230110(&c,"_freestanding_");
  fn_822EC698(&v,&c);
  fn_82230300(&c,1,0);
  fn_822EC058(param_1,&v);
  fn_822DB5D0(&v);
}
