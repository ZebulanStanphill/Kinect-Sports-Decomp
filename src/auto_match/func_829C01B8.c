/* libjpeg jdmerge.c: merged_2v_upsample (2:1 vertical sampling case: may need a spare row). */
typedef unsigned char *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef unsigned int JDIMENSION;

struct Cinfo_829C01B8;

typedef struct Upsampler_829C01B8 {
    void *start_pass;      /* 0x00 */
    void *upsample;        /* 0x04 */
    int need_context_rows; /* 0x08 */
    void (*upmethod)(struct Cinfo_829C01B8 *cinfo, JSAMPIMAGE input_buf, JDIMENSION in_row_group_ctr,
                     JSAMPARRAY output_buf); /* 0x0c */
    int *Cr_r_tab;                           /* 0x10 */
    int *Cb_b_tab;                           /* 0x14 */
    int *Cr_g_tab;                           /* 0x18 */
    int *Cb_g_tab;                           /* 0x1c */
    JSAMPROW spare_row;                      /* 0x20 */
    int spare_full;                          /* 0x24 */
    JDIMENSION out_row_width;                /* 0x28 */
    JDIMENSION rows_to_go;                   /* 0x2c */
} Upsampler_829C01B8;

typedef struct Cinfo_829C01B8 {
    char pad[0x1c8];
    Upsampler_829C01B8 *upsample; /* 0x1c8 */
} Cinfo_829C01B8;

extern void d3dx_jcopy_sample_rows(JSAMPARRAY input_array, int source_row, JSAMPARRAY output_array,
                                   int dest_row, int num_rows, JDIMENSION num_cols);

void fn_829C01B8(Cinfo_829C01B8 *cinfo, JSAMPIMAGE input_buf, JDIMENSION *in_row_group_ctr,
                 JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr,
                 JDIMENSION out_rows_avail)
{
    Upsampler_829C01B8 *upsample = cinfo->upsample;
    JSAMPROW work_ptrs[2];
    JDIMENSION num_rows;

    if (upsample->spare_full) {
        d3dx_jcopy_sample_rows(&upsample->spare_row, 0, output_buf + *out_row_ctr, 0, 1,
                               upsample->out_row_width);
        num_rows = 1;
        upsample->spare_full = 0;
    } else {
        num_rows = 2;
        if (num_rows > upsample->rows_to_go)
            num_rows = upsample->rows_to_go;
        out_rows_avail -= *out_row_ctr;
        if (num_rows > out_rows_avail)
            num_rows = out_rows_avail;
        work_ptrs[0] = output_buf[*out_row_ctr];
        if (num_rows > 1) {
            work_ptrs[1] = output_buf[*out_row_ctr + 1];
        } else {
            work_ptrs[1] = upsample->spare_row;
            upsample->spare_full = 1;
        }
        (*upsample->upmethod)(cinfo, input_buf, *in_row_group_ctr, work_ptrs);
    }

    *out_row_ctr += num_rows;
    upsample->rows_to_go -= num_rows;
    if (!upsample->spare_full)
        (*in_row_group_ctr)++;
}
