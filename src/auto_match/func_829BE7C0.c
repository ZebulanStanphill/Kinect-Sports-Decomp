/* IJG libjpeg 6b jdpostct.c post_process_1pass (open-source). */
typedef struct Cinfo_829BE7C0 *j_decompress_ptr;
typedef unsigned int JDIMENSION;
typedef unsigned char **JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;

typedef struct {
    void *start_pass;
    void *post_process_data;
    void *whole_image;
    JSAMPARRAY buffer;
    JDIMENSION strip_height;
} my_post_829BE7C0;

typedef struct {
    void *start_pass;
    void (*upsample)(j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION *in_row_group_ctr,
                     JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr,
                     JDIMENSION out_rows_avail);
} Upsample_829BE7C0;

typedef struct {
    void *start_pass;
    void (*color_quantize)(j_decompress_ptr cinfo, JSAMPARRAY input_buf, JSAMPARRAY output_buf, int num_rows);
} Cquantize_829BE7C0;

struct Cinfo_829BE7C0 {
    char pad0[0x1b4];
    my_post_829BE7C0 *post;
    char pad1b8[0x1c8 - 0x1b8];
    Upsample_829BE7C0 *upsample;
    int pad1cc;
    Cquantize_829BE7C0 *cquantize;
};

void fn_829BE7C0(j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION *in_row_group_ctr,
                 JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION *out_row_ctr,
                 JDIMENSION out_rows_avail)
{
    my_post_829BE7C0 *post = cinfo->post;
    JDIMENSION num_rows, max_rows;

    max_rows = out_rows_avail - *out_row_ctr;
    if (max_rows > post->strip_height)
        max_rows = post->strip_height;
    num_rows = 0;
    (*cinfo->upsample->upsample)(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail,
                                 post->buffer, &num_rows, max_rows);
    (*cinfo->cquantize->color_quantize)(cinfo, post->buffer, output_buf + *out_row_ctr, (int)num_rows);
    *out_row_ctr += num_rows;
}
