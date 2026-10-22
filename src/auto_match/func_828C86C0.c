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
extern void fn_8223C478(unsigned int, unsigned int, unsigned int);
extern void fn_828E9DB8(unsigned int, unsigned int, unsigned int);


static void write_bits(unsigned int w, unsigned int value, unsigned int bits) {
fn_8223C478(w,bits,0);
fn_828E9DB8(w,value,bits);
}
void fn_828C86C0(int param_1,unsigned int param_2)

{
  undefined4 uVar1;
  
  write_bits(param_2,*(undefined4 *)(param_1 + 0x84),2);
  write_bits(param_2,*(undefined4 *)(param_1 + 0x80),6);
  write_bits(param_2,*(undefined4 *)(param_1 + 0x88),0x10);
  return;
}

