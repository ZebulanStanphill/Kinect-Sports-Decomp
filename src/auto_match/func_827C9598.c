typedef unsigned int JDIMENSION;
typedef unsigned char boolean;
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;

typedef struct jpeg_decompress_struct *j_decompress_ptr;

struct jpeg_d_coef_controller {
    void (*start_input_pass)(j_decompress_ptr);
    int (*consume_data)(j_decompress_ptr);
    void (*start_output_pass)(j_decompress_ptr);
    int (*decompress_data)(j_decompress_ptr, JSAMPIMAGE);
};

struct jpeg_d_post_controller {
    void (*start_pass)(j_decompress_ptr, int);
    void (*post_process_data)(j_decompress_ptr, JSAMPIMAGE, JDIMENSION *, JDIMENSION,
                              JSAMPARRAY, JDIMENSION *, JDIMENSION);
};

typedef struct {
    void (*start_pass)(j_decompress_ptr, int);
    void (*process_data)(j_decompress_ptr, JSAMPARRAY, JDIMENSION *, JDIMENSION);
    JSAMPARRAY buffer[10];
    boolean buffer_full;
    JDIMENSION rowgroup_ctr;
    JSAMPIMAGE xbuffer[2];
    int whichptr;
    int context_state;
    JDIMENSION rowgroups_avail;
    JDIMENSION iMCU_row_ctr;
} my_main_controller;
typedef my_main_controller *my_main_ptr;

struct jpeg_decompress_struct {
    char pad0[0x118];
    int min_DCT_scaled_size;
    JDIMENSION total_iMCU_rows;
    char pad120[0x184 - 0x120];
    my_main_controller *main;
    struct jpeg_d_coef_controller *coef;
    struct jpeg_d_post_controller *post;
};

#define CTX_PREPARE_FOR_IMCU 0
#define CTX_PROCESS_IMCU 1
#define CTX_POSTPONED_ROW 2

extern void fn_827C9310(j_decompress_ptr cinfo);
extern void fn_827C9400(j_decompress_ptr cinfo);

void fn_827C9598(j_decompress_ptr cinfo, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr,
                 JDIMENSION out_rows_avail)
{
    my_main_ptr main = (my_main_ptr)cinfo->main;

    if (!main->buffer_full) {
        if (!(*cinfo->coef->decompress_data)(cinfo, main->xbuffer[main->whichptr]))
            return;
        main->buffer_full = 1;
        main->iMCU_row_ctr++;
    }

    switch (main->context_state) {
    case CTX_POSTPONED_ROW:
        (*cinfo->post->post_process_data)(cinfo, main->xbuffer[main->whichptr],
                                          &main->rowgroup_ctr, main->rowgroups_avail,
                                          output_buf, out_row_ctr, out_rows_avail);
        if (main->rowgroup_ctr < main->rowgroups_avail)
            return;
        main->context_state = CTX_PREPARE_FOR_IMCU;
        if (*out_row_ctr >= out_rows_avail)
            return;
    case CTX_PREPARE_FOR_IMCU:
        main->rowgroup_ctr = 0;
        main->rowgroups_avail = (JDIMENSION)(cinfo->min_DCT_scaled_size - 1);
        if (main->iMCU_row_ctr == cinfo->total_iMCU_rows)
            fn_827C9400(cinfo);
        main->context_state = CTX_PROCESS_IMCU;
    case CTX_PROCESS_IMCU:
        (*cinfo->post->post_process_data)(cinfo, main->xbuffer[main->whichptr],
                                          &main->rowgroup_ctr, main->rowgroups_avail,
                                          output_buf, out_row_ctr, out_rows_avail);
        if (main->rowgroup_ctr < main->rowgroups_avail)
            return;
        if (main->iMCU_row_ctr == 1)
            fn_827C9310(cinfo);
        main->whichptr ^= 1;
        main->buffer_full = 0;
        main->rowgroup_ctr = (JDIMENSION)(cinfo->min_DCT_scaled_size + 1);
        main->rowgroups_avail = (JDIMENSION)(cinfo->min_DCT_scaled_size + 2);
        main->context_state = CTX_POSTPONED_ROW;
    }
}
