/* IJG libjpeg 6b jdcoefct.c jinit_d_coef_controller (open-source; the D3DX copy). */
typedef struct Cinfo_829BC638 *j_decompress_ptr;
typedef struct Cinfo_829BC638 *j_common_ptr;
typedef int boolean;
typedef unsigned int JDIMENSION;
typedef short JCOEF;
typedef JCOEF JBLOCK[64];
typedef JBLOCK *JBLOCKROW;
typedef struct jvirt_barray_control *jvirt_barray_ptr;

#define JPOOL_IMAGE 1
#define TRUE 1
#define D_MAX_BLOCKS_IN_MCU 10
#define MAX_COMPONENTS 10

typedef struct {
    int component_id;
    int component_index;
    int h_samp_factor;
    int v_samp_factor;
    int quant_tbl_no;
    int dc_tbl_no;
    int ac_tbl_no;
    JDIMENSION width_in_blocks;
    JDIMENSION height_in_blocks;
    int pad24[12];
} jpeg_component_info;

typedef struct {
    void *(*alloc_small)(j_common_ptr cinfo, int pool_id, unsigned int sizeofobject);
    void *(*alloc_large)(j_common_ptr cinfo, int pool_id, unsigned int sizeofobject);
    void *alloc_sarray;
    void *alloc_barray;
    void *request_virt_sarray;
    jvirt_barray_ptr (*request_virt_barray)(j_common_ptr cinfo, int pool_id, boolean pre_zero,
                                            JDIMENSION blocksperrow, JDIMENSION numrows,
                                            JDIMENSION maxaccess);
} jpeg_memory_mgr;

struct jpeg_d_coef_controller {
    void (*start_input_pass)(j_decompress_ptr cinfo);
    int (*consume_data)(j_decompress_ptr cinfo);
    void (*start_output_pass)(j_decompress_ptr cinfo);
    int (*decompress_data)(j_decompress_ptr cinfo, void *output_buf);
    jvirt_barray_ptr *coef_arrays;
};

struct Cinfo_829BC638 {
    void *err;
    jpeg_memory_mgr *mem;
    char pad8[0x24 - 0x8];
    int num_components;
    char pad28[0xdc - 0x28];
    jpeg_component_info *comp_info;
    boolean progressive_mode;
    char pade4[0x1b0 - 0xe4];
    struct jpeg_d_coef_controller *coef;
};

typedef struct {
    struct jpeg_d_coef_controller pub;
    JDIMENSION MCU_ctr;
    int MCU_vert_offset;
    int MCU_rows_per_iMCU_row;
    JBLOCKROW MCU_buffer[D_MAX_BLOCKS_IN_MCU];
    jvirt_barray_ptr whole_image[MAX_COMPONENTS];
    int *coef_bits_latch;
} my_coef_controller;
typedef my_coef_controller *my_coef_ptr;

extern long d3dx_jround_up(long a, long b);
extern void fn_829BB598(j_decompress_ptr cinfo);
extern void fn_829BC5A8(j_decompress_ptr cinfo);
extern int fn_829BB848(j_decompress_ptr cinfo);
extern int fn_829BBAA8(j_decompress_ptr cinfo, void *output_buf);
extern int fn_82D7E470(j_decompress_ptr cinfo);
extern int fn_829BB5A8(j_decompress_ptr cinfo, void *output_buf);

void fn_829BC638(j_decompress_ptr cinfo, boolean need_full_buffer)
{
    my_coef_ptr coef;

    coef = (my_coef_ptr)(*cinfo->mem->alloc_small)((j_common_ptr)cinfo, JPOOL_IMAGE,
                                                   sizeof(my_coef_controller));
    cinfo->coef = (struct jpeg_d_coef_controller *)coef;
    coef->pub.start_input_pass = fn_829BB598;
    coef->pub.start_output_pass = fn_829BC5A8;
    coef->coef_bits_latch = 0;

    if (need_full_buffer) {
        int ci, access_rows;
        jpeg_component_info *compptr;

        for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
            access_rows = compptr->v_samp_factor;
            if (cinfo->progressive_mode)
                access_rows *= 3;
            coef->whole_image[ci] = (*cinfo->mem->request_virt_barray)(
                (j_common_ptr)cinfo, JPOOL_IMAGE, TRUE,
                (JDIMENSION)d3dx_jround_up((long)compptr->width_in_blocks, (long)compptr->h_samp_factor),
                (JDIMENSION)d3dx_jround_up((long)compptr->height_in_blocks, (long)compptr->v_samp_factor),
                (JDIMENSION)access_rows);
        }
        coef->pub.consume_data = fn_829BB848;
        coef->pub.decompress_data = fn_829BBAA8;
        coef->pub.coef_arrays = coef->whole_image;
    } else {
        JBLOCKROW buffer;
        int i;

        buffer = (JBLOCKROW)(*cinfo->mem->alloc_large)((j_common_ptr)cinfo, JPOOL_IMAGE,
                                                       D_MAX_BLOCKS_IN_MCU * sizeof(JBLOCK));
        for (i = 0; i < D_MAX_BLOCKS_IN_MCU; i++) {
            coef->MCU_buffer[i] = buffer + i;
        }
        coef->pub.consume_data = fn_82D7E470;
        coef->pub.decompress_data = fn_829BB5A8;
        coef->pub.coef_arrays = 0;
    }
}
