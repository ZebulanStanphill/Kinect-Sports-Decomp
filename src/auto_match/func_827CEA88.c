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
typedef unsigned char *JSAMPROW_827CEA88;
typedef JSAMPROW_827CEA88 *JSAMPARRAY_827CEA88;
typedef JSAMPARRAY_827CEA88 *JSAMPIMAGE_827CEA88;

typedef struct Cinfo_827CEA88 Cinfo_827CEA88;

typedef struct Comp_827CEA88 {
  int pad0[3];
  int v_samp_factor;
  int pad10[3];
  unsigned int width_in_blocks;
  int pad20[0x15 - 8];
} Comp_827CEA88;

typedef struct Prep_827CEA88 {
  void *start_pass;
  void *pre_process_data;
  JSAMPARRAY_827CEA88 color_buf[10];
  unsigned int rows_to_go;
  int next_buf_row;
} Prep_827CEA88;

typedef struct Cconv_827CEA88 {
  void *start_pass;
  void (*color_convert)(Cinfo_827CEA88 *, JSAMPARRAY_827CEA88, JSAMPIMAGE_827CEA88, unsigned int, unsigned int);
} Cconv_827CEA88;

typedef struct Down_827CEA88 {
  void *start_pass;
  void (*downsample)(Cinfo_827CEA88 *, JSAMPIMAGE_827CEA88, unsigned int, JSAMPIMAGE_827CEA88, unsigned int);
} Down_827CEA88;

struct Cinfo_827CEA88 {
  int pad0[7];
  unsigned int image_width;
  int pad20[0x3c / 4 - 8];
  int num_components;
  int pad40;
  Comp_827CEA88 *comp_info;
  char pad48[0xdc - 0x48];
  int max_v_samp_factor;
  char pade0[0x144 - 0xe0];
  Prep_827CEA88 *prep;
  char pad148[0x150 - 0x148];
  Cconv_827CEA88 *cconvert;
  Down_827CEA88 *downsample;
};

extern int fn_827CEA30(void *, unsigned int, int, int);

void fn_827CEA88(Cinfo_827CEA88 *cinfo, JSAMPARRAY_827CEA88 input_buf, unsigned int *in_row_ctr,
                 unsigned int in_rows_avail, JSAMPIMAGE_827CEA88 output_buf,
                 unsigned int *out_row_group_ctr, unsigned int out_row_groups_avail)
{
  Prep_827CEA88 *prep = cinfo->prep;
  unsigned int numrows;
  int ci;
  Comp_827CEA88 *compptr;

  while (*in_row_ctr < in_rows_avail && *out_row_group_ctr < out_row_groups_avail) {
    unsigned int inrows = in_rows_avail - *in_row_ctr;
    numrows = cinfo->max_v_samp_factor - prep->next_buf_row;
    if (numrows >= inrows) numrows = inrows;
    cinfo->cconvert->color_convert(cinfo, input_buf + *in_row_ctr, (JSAMPIMAGE_827CEA88)prep->color_buf,
                                   prep->next_buf_row, numrows);
    *in_row_ctr += numrows;
    prep->next_buf_row += numrows;
    prep->rows_to_go -= numrows;
    if (prep->rows_to_go == 0 && prep->next_buf_row < cinfo->max_v_samp_factor) {
      for (ci = 0; ci < cinfo->num_components; ci++) {
        fn_827CEA30(prep->color_buf[ci], cinfo->image_width, prep->next_buf_row, cinfo->max_v_samp_factor);
      }
      prep->next_buf_row = cinfo->max_v_samp_factor;
    }
    if (prep->next_buf_row == cinfo->max_v_samp_factor) {
      cinfo->downsample->downsample(cinfo, (JSAMPIMAGE_827CEA88)prep->color_buf, 0, output_buf,
                                    *out_row_group_ctr);
      prep->next_buf_row = 0;
      (*out_row_group_ctr)++;
    }
    if (prep->rows_to_go == 0 && *out_row_group_ctr < out_row_groups_avail) {
      compptr = cinfo->comp_info;
      for (ci = 0; ci < cinfo->num_components; ci++, compptr++) {
        fn_827CEA30(output_buf[ci], compptr->width_in_blocks * 8,
                    *out_row_group_ctr * compptr->v_samp_factor,
                    out_row_groups_avail * compptr->v_samp_factor);
      }
      *out_row_group_ctr = out_row_groups_avail;
      return;
    }
  }
}
