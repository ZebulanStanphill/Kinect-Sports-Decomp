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
typedef struct Err_827CE9B8 { void (*error_exit)(void *); int pad[4]; int msg_code; } Err_827CE9B8;
typedef struct Mst_827CE9B8 { int pad[12]; int a; int b; int c; int d; } Mst_827CE9B8;
void fn_827CE9B8(int *param_1,int param_2)
{
  int v;
  Mst_827CE9B8 *m = (Mst_827CE9B8 *)param_1[0x51];
  if (param_2 != 0) {
    (*(Err_827CE9B8 **)param_1)->msg_code = 4;
    (*(*(Err_827CE9B8 **)param_1)->error_exit)(param_1);
  }
  v = param_1[8];
  m->c = 0;
  m->b = 0;
  m->a = v;
  m->d = param_1[0x37] << 1;
}
