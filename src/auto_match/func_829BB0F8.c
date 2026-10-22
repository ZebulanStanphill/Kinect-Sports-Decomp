typedef unsigned int JDIMENSION;
typedef int boolean;
typedef void *JSAMPARRAY;
typedef struct jpeg_decompress_struct *j_decompress_ptr;

struct jpeg_d_coef_controller {
    void *start_input_pass;
    void *consume_data;
    void *start_output_pass;
    int (*decompress_data)(j_decompress_ptr cinfo, void *output_buf);
};

struct jpeg_d_post_controller {
    void *start_pass;
    void (*post_process_data)(j_decompress_ptr cinfo, void *input_buf,
                              JDIMENSION *in_row_group_ctr,
                              JDIMENSION in_row_groups_avail,
                              JSAMPARRAY output_buf, JDIMENSION *out_row_ctr,
                              JDIMENSION out_rows_avail);
};

typedef struct {
    char pub[0x8];
    char buffer[0x28];
    boolean buffer_full;
    JDIMENSION rowgroup_ctr;
} my_main_controller;

struct jpeg_decompress_struct {
    char pad0[0x140];
    int min_DCT_scaled_size;
    char pad144[0x68];
    my_main_controller *main;
    struct jpeg_d_coef_controller *coef;
    struct jpeg_d_post_controller *post;
};

void fn_829BB0F8(j_decompress_ptr cinfo, JSAMPARRAY output_buf,
                 JDIMENSION *out_row_ctr, JDIMENSION out_rows_avail)
{
    my_main_controller *main = cinfo->main;
    JDIMENSION rowgroups_avail;

    if (!main->buffer_full) {
        if (!(*cinfo->coef->decompress_data)(cinfo, main->buffer))
            return;
        main->buffer_full = 1;
    }

    rowgroups_avail = (JDIMENSION)cinfo->min_DCT_scaled_size;

    (*cinfo->post->post_process_data)(cinfo, main->buffer,
                                      &main->rowgroup_ctr, rowgroups_avail,
                                      output_buf, out_row_ctr, out_rows_avail);

    if (main->rowgroup_ctr >= rowgroups_avail) {
        main->buffer_full = 0;
        main->rowgroup_ctr = 0;
    }
}
