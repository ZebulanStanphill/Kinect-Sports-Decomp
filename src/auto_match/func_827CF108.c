/* Corresponds to libjpeg jcsample.c sep_downsample (open-source IJG libjpeg). */
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef unsigned int JDIMENSION;

typedef struct jpeg_component_info_827CF108 {
  int component_id;
  int component_index;
  int h_samp_factor;
  int v_samp_factor;
  char pad[0x54 - 0x10];
} jpeg_component_info_827CF108;

typedef struct Cinfo_827CF108 Cinfo_827CF108;

typedef void (*downsample1_ptr_827CF108)(Cinfo_827CF108 *cinfo,
                                         jpeg_component_info_827CF108 *compptr,
                                         JSAMPARRAY input_data,
                                         JSAMPARRAY output_data);

typedef struct Downsample_827CF108 {
  void (*start_pass)(Cinfo_827CF108 *cinfo);
  void (*downsample)(Cinfo_827CF108 *cinfo);
  int need_context_rows;
  downsample1_ptr_827CF108 methods[10];
} Downsample_827CF108;

struct Cinfo_827CF108 {
  char pad0[0x3c];
  int num_components;
  char pad40[4];
  jpeg_component_info_827CF108 *comp_info;
  char pad48[0x154 - 0x48];
  Downsample_827CF108 *downsample;
};

void fn_827CF108(Cinfo_827CF108 *cinfo,
                 JSAMPIMAGE input_buf, JDIMENSION in_row_index,
                 JSAMPIMAGE output_buf, JDIMENSION out_row_group_index)
{
  Downsample_827CF108 *downsample = cinfo->downsample;
  int ci;
  jpeg_component_info_827CF108 *compptr;
  JSAMPARRAY in_ptr, out_ptr;

  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components;
       ci++, compptr++) {
    in_ptr = input_buf[ci] + in_row_index;
    out_ptr = output_buf[ci] + (out_row_group_index * compptr->v_samp_factor);
    (*downsample->methods[ci])(cinfo, compptr, in_ptr, out_ptr);
  }
}
