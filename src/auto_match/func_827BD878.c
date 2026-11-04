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


typedef struct Err_827BD878 {
  void (*error_exit)(void *);
  int pad4[4];
  int msg_code;
  int msg_param0;
} Err_827BD878;

typedef struct Marker_827BD878 {
  int pad0[6];
  unsigned int limit[1];
} Marker_827BD878;

typedef struct Cinfo_827BD878 {
  Err_827BD878 *err;
  int pad[0x64];
  Marker_827BD878 *marker;
} Cinfo_827BD878;

void fn_827BD878(Cinfo_827BD878 *cinfo, int code, unsigned int length)
{
  Marker_827BD878 *m = cinfo->marker;

  if (code == 0xfe) {
    m->limit[0] = length;
    return;
  }
  if (code >= 0xe0 && code <= 0xef) {
    ((unsigned int *)m)[code - 0xd9] = length;
    return;
  }
  cinfo->err->msg_code = 0x44;
  cinfo->err->msg_param0 = code;
  (*cinfo->err->error_exit)(cinfo);
}
