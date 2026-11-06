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
extern int fn_8240D930();
extern int fn_828D53C0();
extern int fn_828D7C30();
extern int fn_828D8478();

typedef struct Empty_828D85F8 { char c; } Empty_828D85F8;

void fn_828D85F8(int param_1,unsigned int param_2)

{
  unsigned int *vec;
  unsigned int it;
  Empty_828D85F8 a;
  Empty_828D85F8 b;

  vec = (unsigned int *)(param_1 + 0xc);
  it = vec[0];
  if (it != *(unsigned int *)(param_1 + 0x10)) {
    do {
      if ((unsigned int)fn_8240D930(it) == param_2) {
        fn_828D8478(it + 0x1c,vec[1],it,a);
        fn_828D53C0(vec[1] - 0x1c,vec[1],vec + 3,b);
        vec[1] = vec[1] - 0x1c;
        break;
      }
      it = it + 0x1c;
    } while (it != *(unsigned int *)(param_1 + 0x10));
  }
  fn_828D7C30(param_1);
}
