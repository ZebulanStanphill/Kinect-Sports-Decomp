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
typedef void *JSAMPROW_T;
typedef struct { char data[0x54]; } CompInfo_827CA100;
typedef struct Cinfo_827CA100 Cinfo_827CA100;
typedef struct {
  char pub[0xc];
  void **color_buf[10];
  void (*methods[10])(Cinfo_827CA100 *, CompInfo_827CA100 *, void **, void ***);
  int next_row_out;
  unsigned rows_to_go;
  int rowgroup_height[10];
} Upsample_827CA100;
typedef struct {
  void (*start_pass)(Cinfo_827CA100 *);
  void (*color_convert)(Cinfo_827CA100 *, void ***, unsigned, void **, int);
} Cconvert_827CA100;
struct Cinfo_827CA100 {
  char pad0[0x24];
  int num_components;
  char pad1[0xc4 - 0x28];
  CompInfo_827CA100 *comp_info;
  char pad2[0x114 - 0xc8];
  int max_v_samp_factor;
  char pad3[0x1a0 - 0x118];
  Upsample_827CA100 *upsample;
  Cconvert_827CA100 *cconvert;
};

void fn_827CA100(Cinfo_827CA100 *cinfo, void ***input_buf, unsigned *in_row_group_ctr,
                 unsigned in_row_groups_avail, void **output_buf, unsigned *out_row_ctr,
                 unsigned out_rows_avail)
{
  Upsample_827CA100 *upsample = cinfo->upsample;
  int ci;
  CompInfo_827CA100 *compptr;
  unsigned num_rows;

  if (upsample->next_row_out >= cinfo->max_v_samp_factor) {
    for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
      (*upsample->methods[ci])(cinfo, compptr,
                               input_buf[ci] + (*in_row_group_ctr * upsample->rowgroup_height[ci]),
                               &upsample->color_buf[ci]);
    }
    upsample->next_row_out = 0;
  }
  num_rows = (unsigned)(cinfo->max_v_samp_factor - upsample->next_row_out);
  if (num_rows > upsample->rows_to_go)
    num_rows = upsample->rows_to_go;
  out_rows_avail -= *out_row_ctr;
  if (num_rows > out_rows_avail)
    num_rows = out_rows_avail;
  (*cinfo->cconvert->color_convert)(cinfo, upsample->color_buf, (unsigned)upsample->next_row_out,
                                    output_buf + *out_row_ctr, (int)num_rows);
  *out_row_ctr += num_rows;
  upsample->rows_to_go -= num_rows;
  upsample->next_row_out += num_rows;
  if (upsample->next_row_out >= cinfo->max_v_samp_factor)
    (*in_row_group_ctr)++;
}
