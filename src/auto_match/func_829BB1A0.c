typedef struct Cinfo_829BB1A0 *j_decompress_ptr;
typedef unsigned int JDIMENSION;
typedef void *JSAMPARRAY;
typedef int boolean;
typedef struct {
    void *start_pass;
    void *process_data;
    void *buffer[10];
    boolean buffer_full;
    JDIMENSION rowgroup_ctr;
    void *xbuffer[2];
    int whichptr;
    int context_state;
    JDIMENSION rowgroups_avail;
    JDIMENSION iMCU_row_ctr;
} my_main_829BB1A0;
typedef struct { void *start_pass; void *consume_data; void *start_output_pass; boolean (*decompress_data)(j_decompress_ptr, void *); } Coef_829BB1A0;
typedef struct {
    void *start_pass;
    void (*post_process_data)(j_decompress_ptr, void *, JDIMENSION *, JDIMENSION, JSAMPARRAY, JDIMENSION *, JDIMENSION);
} Post_829BB1A0;
struct Cinfo_829BB1A0 {
    char pad0[0x140];
    int min_DCT_scaled_size;
    unsigned int total_iMCU_rows;
    char pad1[0x1ac - 0x148];
    my_main_829BB1A0 *main;
    Coef_829BB1A0 *coef;
    Post_829BB1A0 *post;
};
extern void fn_829BB008(j_decompress_ptr);
extern void fn_829BAF18(j_decompress_ptr);

void fn_829BB1A0(j_decompress_ptr cinfo, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr, JDIMENSION out_rows_avail)
{
    my_main_829BB1A0 *main = cinfo->main;

    if (!main->buffer_full) {
        if (!(*cinfo->coef->decompress_data)(cinfo, main->xbuffer[main->whichptr]))
            return;
        main->buffer_full = 1;
        main->iMCU_row_ctr++;
    }

    switch (main->context_state) {
    case 2:
        (*cinfo->post->post_process_data)(cinfo, main->xbuffer[main->whichptr], &main->rowgroup_ctr, main->rowgroups_avail, output_buf, out_row_ctr, out_rows_avail);
        if (main->rowgroup_ctr < main->rowgroups_avail)
            return;
        main->context_state = 0;
        if (*out_row_ctr >= out_rows_avail)
            return;
    case 0:
        main->rowgroup_ctr = 0;
        main->rowgroups_avail = (JDIMENSION)(cinfo->min_DCT_scaled_size - 1);
        if (main->iMCU_row_ctr == cinfo->total_iMCU_rows)
            fn_829BB008(cinfo);
        main->context_state = 1;
    case 1:
        (*cinfo->post->post_process_data)(cinfo, main->xbuffer[main->whichptr], &main->rowgroup_ctr, main->rowgroups_avail, output_buf, out_row_ctr, out_rows_avail);
        if (main->rowgroup_ctr < main->rowgroups_avail)
            return;
        if (main->iMCU_row_ctr == 1)
            fn_829BAF18(cinfo);
        main->whichptr ^= 1;
        main->buffer_full = 0;
        main->rowgroup_ctr = (JDIMENSION)(cinfo->min_DCT_scaled_size + 1);
        main->rowgroups_avail = (JDIMENSION)(cinfo->min_DCT_scaled_size + 2);
        main->context_state = 2;
    }
}
