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
extern void fn_827C1B68(void *, unsigned);
extern void fn_827CB600(void);
extern void fn_827CC2B0(void);
extern void fn_827CC368(void);
extern void fn_827CC638(void *);
extern void fn_827CC710(void);
extern void fn_827CC750(void);
struct Cinfo_827CC758;
typedef struct Err_827CC758 { void (*error_exit)(struct Cinfo_827CC758 *); int pad[4]; int msg_code; int msg_parm; } Err_827CC758;
typedef struct Mem_827CC758 { void *(*alloc_small)(struct Cinfo_827CC758 *, int, unsigned); void *(*alloc_large)(struct Cinfo_827CC758 *, int, unsigned); } Mem_827CC758;
typedef struct Quant_827CC758 {
  void (*start_pass)(void);
  void (*color_quantize)(void);
  void (*finish_pass)(void);
  void (*new_color_map)(void);
  void *pad[2];
  void **histogram;
  unsigned char needs_zeroed;
  void *fserrors;
  unsigned char on_odd_row;
  void *error_limiter;
} Quant_827CC758;
typedef struct Cinfo_827CC758 {
  Err_827CC758 *err;
  Mem_827CC758 *mem;
  char pad[0x44];
  int dither_mode;
  char pad1[0x0c];
  int output_width;
  char pad2[0x10];
  int actual_number_of_colors;
  char pad3[0x134];
  Quant_827CC758 *cquantize;
} Cinfo_827CC758;
void fn_827CC758(Cinfo_827CC758 *cinfo, unsigned char is_pre_scan)
{
  Quant_827CC758 *q = cinfo->cquantize;
  void **histogram = q->histogram;
  int i;
  if (cinfo->dither_mode != 0) cinfo->dither_mode = 2;
  if (is_pre_scan) {
    q->color_quantize = fn_827CB600;
    q->finish_pass = fn_827CC710;
    q->needs_zeroed = 1;
  } else {
    if (cinfo->dither_mode == 2) q->color_quantize = fn_827CC368;
    else q->color_quantize = fn_827CC2B0;
    q->finish_pass = fn_827CC750;
    i = cinfo->actual_number_of_colors;
    if (i < 1) {
      cinfo->err->msg_code = 0x38;
      cinfo->err->msg_parm = 1;
      cinfo->err->error_exit(cinfo);
    }
    if (i > 256) {
      cinfo->err->msg_code = 0x39;
      cinfo->err->msg_parm = 256;
      cinfo->err->error_exit(cinfo);
    }
    if (cinfo->dither_mode == 2) {
      unsigned arraysize = (cinfo->output_width + 2) * 6;
      if (q->fserrors == 0) q->fserrors = cinfo->mem->alloc_large(cinfo, 1, arraysize);
      fn_827C1B68(q->fserrors, arraysize);
      if (q->error_limiter == 0) fn_827CC638(cinfo);
      q->on_odd_row = 0;
    }
  }
  if (q->needs_zeroed) {
    for (i = 0; i < 32; i++) fn_827C1B68(histogram[i], 0x1000);
    q->needs_zeroed = 0;
  }
}
