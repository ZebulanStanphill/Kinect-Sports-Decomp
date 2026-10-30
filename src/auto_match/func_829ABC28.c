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
typedef struct Cinfo_829ABC28 Cinfo_829ABC28;
typedef struct { void (*error_exit)(Cinfo_829ABC28 *); char pad[0x10]; int msg_code; int msg_parm; } Err_829ABC28;
typedef struct { void (*progress_monitor)(Cinfo_829ABC28 *); int pass_counter; int pass_limit; } Progress_829ABC28;
typedef struct { int (*consume_input)(Cinfo_829ABC28 *); void *reset_input_controller; void *start_input_pass; void *finish_input_pass; int has_multiple_scans; } Inputctl_829ABC28;
struct Cinfo_829ABC28 {
  Err_829ABC28 *err;
  int pad0;
  Progress_829ABC28 *progress;
  int pad1[2];
  int global_state;
  char pad2[0x40 - 0x18];
  int buffered_image;
  char pad3[0x94 - 0x44];
  int input_scan_number;
  int pad4;
  int output_scan_number;
  char pad5[0x144 - 0xa0];
  int total_iMCU_rows;
  char pad6[0x1b8 - 0x148];
  Inputctl_829ABC28 *inputctl;
};
extern void fn_829B76F0(Cinfo_829ABC28 *);
extern int fn_829ABA70(Cinfo_829ABC28 *);

int fn_829ABC28(Cinfo_829ABC28 *cinfo)
{
  int retcode;
  if (cinfo->global_state == 0xca) {
    fn_829B76F0(cinfo);
    if (cinfo->buffered_image != 0) {
      cinfo->global_state = 0xcf;
      return 1;
    }
    cinfo->global_state = 0xcb;
  }
  if (cinfo->global_state == 0xcb) {
    if (cinfo->inputctl->has_multiple_scans != 0) {
      for (;;) {
        if (cinfo->progress != 0)
          (*cinfo->progress->progress_monitor)(cinfo);
        retcode = (*cinfo->inputctl->consume_input)(cinfo);
        if (retcode == 0)
          return 0;
        if (retcode == 2)
          break;
        if (cinfo->progress != 0 && (retcode == 3 || retcode == 1)) {
          if (++(cinfo->progress->pass_counter) >= cinfo->progress->pass_limit) {
            cinfo->progress->pass_limit += cinfo->total_iMCU_rows;
          }
        }
      }
    }
    cinfo->output_scan_number = cinfo->input_scan_number;
  }
  else if (cinfo->global_state != 0xcc) {
    cinfo->err->msg_code = 0x14;
    cinfo->err->msg_parm = cinfo->global_state;
    (*cinfo->err->error_exit)(cinfo);
  }
  return fn_829ABA70(cinfo);
}
