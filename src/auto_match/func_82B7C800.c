typedef char *va_list;
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
typedef struct { char pad[0x14]; unsigned int mod; } Operand_8293B8F8;
#define ZEXT48(x) ((U64)((U32)(x)))
typedef struct { uint lo : 7; uint f : 5; uint rest : 20; } X;
typedef struct Sh_8293E2D0 { char pad0[0x48]; int f48; char pad1[0xc]; int f58; char pad2[4]; unsigned flags; char pad3[0xd0]; int f134; char pad4[4]; int f13c; } Sh_8293E2D0;
typedef struct Dc_8293E2D0 { char pad[0x50]; int f50; } Dc_8293E2D0;
#define NAN(x) ((x) != (x))
typedef struct { char pad0[0x34]; int f34; char pad1[0x28]; unsigned f60; char pad2[0xbc]; unsigned f120; unsigned f124; unsigned f128; char pad3[0xc]; void *f138; } Obj_8293DD48;

extern void __cdecl __va_start(va_list *, ...);
extern void fn_82B7C2F0(void *self, const char *fmt, va_list ap);

void fn_82B7C800(void *self, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  fn_82B7C2F0(self, fmt, ap);
}
