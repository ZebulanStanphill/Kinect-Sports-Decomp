typedef unsigned char boolean;
typedef unsigned int JDIMENSION;
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;

typedef struct jpeg_compress_struct *j_compress_ptr;

struct jpeg_c_prep_controller {
  void (*start_pass)(j_compress_ptr cinfo, int pass_mode);
  void (*pre_process_data)(j_compress_ptr cinfo, JSAMPARRAY input_buf,
                           JDIMENSION *in_row_ctr, JDIMENSION in_rows_avail,
                           JSAMPIMAGE output_buf, JDIMENSION *out_row_group_ctr,
                           JDIMENSION out_row_groups_avail);
};

struct jpeg_c_coef_controller {
  void (*start_pass)(j_compress_ptr cinfo, int pass_mode);
  boolean (*compress_data)(j_compress_ptr cinfo, JSAMPIMAGE input_buf);
};

struct jpeg_c_main_controller {
  void (*start_pass)(j_compress_ptr cinfo, int pass_mode);
  void (*process_data)(j_compress_ptr cinfo, JSAMPARRAY input_buf,
                       JDIMENSION *in_row_ctr, JDIMENSION in_rows_avail);
};

struct jpeg_compress_struct {
  char pad0[0xe0];
  JDIMENSION total_iMCU_rows;
  char pade4[0x140 - 0xe4];
  struct jpeg_c_main_controller *main;
  struct jpeg_c_prep_controller *prep;
  struct jpeg_c_coef_controller *coef;
};

typedef struct {
  struct jpeg_c_main_controller pub;
  JDIMENSION cur_iMCU_row;
  JDIMENSION rowgroup_ctr;
  boolean suspended;
  int pass_mode;
  JSAMPARRAY buffer[10];
} my_main_controller;

typedef my_main_controller *my_main_ptr;

void fn_827CD810(j_compress_ptr cinfo, JSAMPARRAY input_buf,
                 JDIMENSION *in_row_ctr, JDIMENSION in_rows_avail)
{
  my_main_ptr main = (my_main_ptr)cinfo->main;

  while (main->cur_iMCU_row < cinfo->total_iMCU_rows) {
    if (main->rowgroup_ctr < 8)
      (*cinfo->prep->pre_process_data)(cinfo, input_buf, in_row_ctr, in_rows_avail,
                                       main->buffer, &main->rowgroup_ctr,
                                       (JDIMENSION)8);

    if (main->rowgroup_ctr != 8)
      return;

    if (!(*cinfo->coef->compress_data)(cinfo, main->buffer)) {
      if (!main->suspended) {
        (*in_row_ctr)--;
        main->suspended = 1;
      }
      return;
    }
    if (main->suspended) {
      (*in_row_ctr)++;
      main->suspended = 0;
    }
    main->rowgroup_ctr = 0;
    main->cur_iMCU_row++;
  }
}
