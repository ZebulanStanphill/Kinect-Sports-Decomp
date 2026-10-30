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
typedef unsigned char boolean;
typedef struct jerr_827C5B00 {
  void *error_exit;
  void (*emit_message)(void *, int);
  void *output_message;
  void *format_message;
  void *reset_error_mgr;
  int msg_code;
} jerr_827C5B00;
typedef struct comp_827C5B00 {
  char pad0[0x10];
  int quant_tbl_no;
  int dc_tbl_no;
  int ac_tbl_no;
  char pad1[0x54 - 0x1c];
} comp_827C5B00;
typedef struct jcompress_827C5B00 {
  jerr_827C5B00 *err;
  char pad4[0x38 - 4];
  int data_precision;
  int num_components;
  char pad40[0x44 - 0x40];
  comp_827C5B00 *comp_info;
  char pad48[0xb1 - 0x48];
  boolean arith_code;
  char padb2[0xd4 - 0xb2];
  boolean progressive_mode;
} jcompress_827C5B00;
extern int fn_827C5428(jcompress_827C5B00 *, int);
extern void fn_827C5690(jcompress_827C5B00 *, int);

void fn_827C5B00(jcompress_827C5B00 *cinfo)
{
  int ci, prec;
  boolean is_baseline;
  comp_827C5B00 *compptr;

  prec = 0;
  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
    prec += fn_827C5428(cinfo, compptr->quant_tbl_no);
  }
  if (cinfo->arith_code || cinfo->progressive_mode || cinfo->data_precision != 8) {
    is_baseline = 0;
  } else {
    is_baseline = 1;
    for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
      if (compptr->dc_tbl_no > 1 || compptr->ac_tbl_no > 1)
        is_baseline = 0;
    }
    if (prec && is_baseline) {
      is_baseline = 0;
      cinfo->err->msg_code = 75;
      (*cinfo->err->emit_message)(cinfo, 0);
    }
  }
  if (cinfo->arith_code) {
    fn_827C5690(cinfo, 0xc9);
  } else {
    if (cinfo->progressive_mode)
      fn_827C5690(cinfo, 0xc2);
    else if (is_baseline)
      fn_827C5690(cinfo, 0xc0);
    else
      fn_827C5690(cinfo, 0xc1);
  }
}
