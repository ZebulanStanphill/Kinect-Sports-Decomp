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
extern int fn_827C1AA0(int, int);

typedef struct jpeg_error_mgr_827C7FC0 {
  void (*error_exit)(void *);
  int pad4[4];
  int msg_code;
  int msg_parm[8];
} jpeg_error_mgr_827C7FC0;
typedef struct jpeg_component_info_827C7FC0 {
  int component_id;
  int component_index;
  int h_samp_factor;
  int v_samp_factor;
  int quant_tbl_no;
  int dc_tbl_no;
  int ac_tbl_no;
  unsigned int width_in_blocks;
  unsigned int height_in_blocks;
  int DCT_scaled_size;
  unsigned int downsampled_width;
  unsigned int downsampled_height;
  unsigned char component_needed;
  char pad31[0x54 - 0x31];
} jpeg_component_info_827C7FC0;
typedef struct jpeg_compress_struct_827C7FC0 {
  jpeg_error_mgr_827C7FC0 *err;
  char pad4[0x1c - 4];
  unsigned int image_width;
  unsigned int image_height;
  int input_components;
  char pad28[0x38 - 0x28];
  int data_precision;
  int num_components;
  int jpeg_color_space;
  jpeg_component_info_827C7FC0 *comp_info;
  char pad48[0xd8 - 0x48];
  int max_h_samp_factor;
  int max_v_samp_factor;
  int total_iMCU_rows;
} jpeg_compress_struct_827C7FC0;

#define ERREXIT_827C7FC0(c, code) ((c)->err->msg_code = (code), (*(c)->err->error_exit)(c))

void fn_827C7FC0(jpeg_compress_struct_827C7FC0 *cinfo)
{
  int ci;
  jpeg_component_info_827C7FC0 *compptr;

  if (cinfo->image_height <= 0 || cinfo->image_width <= 0 || cinfo->num_components <= 0 ||
      cinfo->input_components <= 0) {
    ERREXIT_827C7FC0(cinfo, 0x20);
  }
  if ((long)cinfo->image_height > 0xffdc || (long)cinfo->image_width > 0xffdc) {
    cinfo->err->msg_code = 0x29;
    cinfo->err->msg_parm[0] = 0xffdc;
    (*cinfo->err->error_exit)(cinfo);
  }
  if (cinfo->data_precision != 8) {
    cinfo->err->msg_code = 0xf;
    cinfo->err->msg_parm[0] = cinfo->data_precision;
    (*cinfo->err->error_exit)(cinfo);
  }
  if (cinfo->num_components > 10) {
    cinfo->err->msg_code = 0x1a;
    cinfo->err->msg_parm[0] = cinfo->num_components;
    cinfo->err->msg_parm[1] = 10;
    (*cinfo->err->error_exit)(cinfo);
  }
  cinfo->max_h_samp_factor = 1;
  cinfo->max_v_samp_factor = 1;
  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
    if (compptr->h_samp_factor <= 0 || compptr->h_samp_factor > 4 || compptr->v_samp_factor <= 0 ||
        compptr->v_samp_factor > 4) {
      ERREXIT_827C7FC0(cinfo, 0x12);
    }
    cinfo->max_h_samp_factor =
        cinfo->max_h_samp_factor > compptr->h_samp_factor ? cinfo->max_h_samp_factor : compptr->h_samp_factor;
    cinfo->max_v_samp_factor =
        cinfo->max_v_samp_factor > compptr->v_samp_factor ? cinfo->max_v_samp_factor : compptr->v_samp_factor;
  }
  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
    compptr->component_index = ci;
    compptr->DCT_scaled_size = 8;
    compptr->width_in_blocks =
        fn_827C1AA0((__int64)cinfo->image_width * (__int64)compptr->h_samp_factor, cinfo->max_h_samp_factor << 3);
    compptr->height_in_blocks =
        fn_827C1AA0((__int64)cinfo->image_height * (__int64)compptr->v_samp_factor, cinfo->max_v_samp_factor << 3);
    compptr->downsampled_width =
        fn_827C1AA0((__int64)cinfo->image_width * (__int64)compptr->h_samp_factor, cinfo->max_h_samp_factor);
    compptr->downsampled_height =
        fn_827C1AA0((__int64)cinfo->image_height * (__int64)compptr->v_samp_factor, cinfo->max_v_samp_factor);
    compptr->component_needed = 1;
  }
  cinfo->total_iMCU_rows = fn_827C1AA0(cinfo->image_height, cinfo->max_v_samp_factor << 3);
}
