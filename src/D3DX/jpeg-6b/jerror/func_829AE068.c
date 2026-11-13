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
extern void d3dx_error_exit(void);
extern void d3dx_output_message(void);
extern void d3dx_emit_message(void);
extern void d3dx_format_message(void);
extern void d3dx_reset_error_mgr(void);
extern char d3dx_jpeg_std_message_table[];

typedef struct S { void *f0, *f4, *f8, *fc, *f10; int f14; char pad[0x68 - 0x18]; int f68, f6c; void *f70; int f74, f78, f7c, f80; } S;

void d3dx_jpeg_std_error(S *p)
{
  p->f0 = (void *)d3dx_error_exit;
  p->f4 = (void *)d3dx_emit_message;
  p->f8 = (void *)d3dx_output_message;
  p->fc = (void *)d3dx_format_message;
  p->f10 = (void *)d3dx_reset_error_mgr;
  p->f68 = 0;
  p->f70 = d3dx_jpeg_std_message_table;
  p->f6c = 0;
  p->f14 = 0;
  p->f74 = 0x7b;
  p->f78 = 0;
  p->f7c = 0;
  p->f80 = 0;
}
