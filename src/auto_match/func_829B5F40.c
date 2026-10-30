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



typedef struct { void (*error_exit)(void *); int pad[4]; int msg_code; int msg_parm_i0; } err_829B5F40;
typedef struct { err_829B5F40 *err; char *mem_unused; } cinfo_829B5F40;
typedef struct { char *head; } pool_829B5F40;
typedef struct { int f0; int f4; int f8; int fc; char p10[0x10]; int f20; int p24; int f28; int f2c; } blk_829B5F40;
extern blk_829B5F40 *fn_829B5A80(void *, int, int);

void fn_829B5F40(cinfo_829B5F40 *param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
  char *mem;
  blk_829B5F40 *b;
  mem = (char *)(*(int **)((char *)param_1 + 4));
  if (param_2 != 1) {
    param_1->err->msg_code = 0xe;
    param_1->err->msg_parm_i0 = param_2;
    param_1->err->error_exit(param_1);
  }
  b = fn_829B5A80(param_1, param_2, 0x248);
  b->f4 = param_5;
  b->f0 = 0;
  b->f8 = param_4;
  b->fc = param_6;
  b->f20 = param_3;
  b->f28 = 0;
  b->f2c = *(int *)(mem + 0x44);
  *(blk_829B5F40 **)(mem + 0x44) = b;
}
