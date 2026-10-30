extern int fn_827C1AF8();
extern int fn_827CEA30();

typedef struct jci jci;
typedef struct { void *pad; void (*color_convert)(jci *, void *, void *, unsigned int, int); } Conv;
typedef struct { void *pad; void (*downsample)(jci *, void *, unsigned int, void *, unsigned int); } Down;
typedef struct {
  char p0[8];
  void *color_buf[10];
  unsigned int rows_to_go;
  int next_buf_row;
  int this_row_group;
  int next_buf_stop;
} Prep;
struct jci {
  char p0[0x1c];
  unsigned int image_width;
  unsigned int image_height;
  char p24[0x3c - 0x24];
  int num_components;
  char p40[0xdc - 0x40];
  int max_v_samp_factor;
  char pe0[0x144 - 0xe0];
  Prep *prep;
  char p148[0x150 - 0x148];
  Conv *cconvert;
  Down *downsample;
};

void fn_827CEC48(jci *cinfo, void **input_buf, unsigned int *in_row_ctr, unsigned int in_rows_avail,
                 void *output_buf, unsigned int *out_row_group_ctr, unsigned int out_row_groups_avail)
{
  Prep *prep = cinfo->prep;
  int numrows, ci, i;
  unsigned int inrows;
  int buf_height = cinfo->max_v_samp_factor * 3;

  while (*out_row_group_ctr < out_row_groups_avail) {
    if (*in_row_ctr < in_rows_avail) {
      inrows = in_rows_avail - *in_row_ctr;
      numrows = prep->next_buf_stop - prep->next_buf_row;
      numrows = (unsigned int)numrows < inrows ? numrows : inrows;
      (*cinfo->cconvert->color_convert)(cinfo, input_buf + *in_row_ctr, prep->color_buf, prep->next_buf_row, numrows);
      if (prep->rows_to_go == cinfo->image_height) {
        for (ci = 0; ci < cinfo->num_components; ci++) {
          for (i = 1; i <= cinfo->max_v_samp_factor; i++) {
            fn_827C1AF8(prep->color_buf[ci], 0, prep->color_buf[ci], -i, 1, cinfo->image_width);
          }
        }
      }
      *in_row_ctr += numrows;
      prep->next_buf_row += numrows;
      prep->rows_to_go -= numrows;
    } else {
      if (prep->rows_to_go != 0) return;
      if (prep->next_buf_row < prep->next_buf_stop) {
        for (ci = 0; ci < cinfo->num_components; ci++) {
          fn_827CEA30(prep->color_buf[ci], cinfo->image_width, prep->next_buf_row, prep->next_buf_stop);
        }
        prep->next_buf_row = prep->next_buf_stop;
      }
    }
    if (prep->next_buf_row == prep->next_buf_stop) {
      (*cinfo->downsample->downsample)(cinfo, prep->color_buf, prep->this_row_group, output_buf, *out_row_group_ctr);
      (*out_row_group_ctr)++;
      prep->this_row_group += cinfo->max_v_samp_factor;
      if (prep->this_row_group >= buf_height) prep->this_row_group = 0;
      if (prep->next_buf_row >= buf_height) prep->next_buf_row = 0;
      prep->next_buf_stop = prep->next_buf_row + cinfo->max_v_samp_factor;
    }
  }
}
