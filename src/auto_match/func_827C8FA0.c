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
typedef void (*err_fn)(void *);
struct jerr { err_fn error_exit; int pad[4]; int msg_code; };
struct jcinfo { struct jerr *err; };
struct bstore { int pad[3]; void *temp_file; };

extern unsigned int fn_82F67CF8(void *buf, unsigned int size, unsigned int count, void *file);
extern int fn_82F6C060(void *file, long offset, int origin);

void fn_827C8FA0(struct jcinfo *cinfo, struct bstore *info, void *buffer_address, long file_offset, long byte_count)
{
  if (fn_82F6C060(info->temp_file, file_offset, 0)) {
    cinfo->err->msg_code = 0x41;
    (*cinfo->err->error_exit)(cinfo);
  }
  if (fn_82F67CF8(buffer_address, 1, byte_count, info->temp_file) != (unsigned int)byte_count) {
    cinfo->err->msg_code = 0x42;
    (*cinfo->err->error_exit)(cinfo);
  }
}
