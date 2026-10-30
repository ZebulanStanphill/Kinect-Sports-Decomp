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
struct jpeg_common_829AB9A8;
struct jpeg_error_mgr_829AB9A8 {
  void (*error_exit)(struct jpeg_common_829AB9A8 *);
  void *emit_message;
  void *output_message;
  void *format_message;
  void *reset_error_mgr;
  int msg_code;
  union {
    int i[8];
    char s[80];
  } msg_parm;
};
struct jpeg_common_829AB9A8 {
  struct jpeg_error_mgr_829AB9A8 *err;
  char pad[0x10];
  int global_state;
};

extern int fn_829AB710(struct jpeg_common_829AB9A8 *);
extern void fn_829B6CA8(struct jpeg_common_829AB9A8 *);

int fn_829AB9A8(struct jpeg_common_829AB9A8 *cinfo, int require_image)
{
  int retcode;
  if (cinfo->global_state != 200 && cinfo->global_state != 201) {
    cinfo->err->msg_code = 20;
    cinfo->err->msg_parm.i[0] = cinfo->global_state;
    (*cinfo->err->error_exit)(cinfo);
  }
  retcode = fn_829AB710(cinfo);
  switch (retcode) {
  case 1:
    retcode = 1;
    break;
  case 2:
    if (require_image) {
      cinfo->err->msg_code = 51;
      (*cinfo->err->error_exit)(cinfo);
    }
    fn_829B6CA8(cinfo);
    retcode = 2;
    break;
  case 0:
    break;
  }
  return retcode;
}
