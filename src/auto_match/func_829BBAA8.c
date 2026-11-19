typedef struct Comp_829BBAA8 {
    char pad0[0xc];
    int v_samp_factor; /* 0xc */
    char pad10[0x1c - 0x10];
    unsigned int width_in_blocks;  /* 0x1c */
    unsigned int height_in_blocks; /* 0x20 */
    int DCT_scaled_size;           /* 0x24 */
    char pad28[0x30 - 0x28];
    int component_needed; /* 0x30 */
    char pad34[0x54 - 0x34];
} Comp_829BBAA8;

typedef struct Cinfo_829BBAA8 Cinfo_829BBAA8;

typedef struct Mem_829BBAA8 {
    int p[8];
    short (**(*access_virt_barray)(Cinfo_829BBAA8 *cinfo, void *ptr, unsigned int start_row,
                                   unsigned int num_rows, int writable))[64]; /* 0x20 */
} Mem_829BBAA8;

typedef struct Coef_829BBAA8 {
    int pad[18];
    void *whole_image[10]; /* 0x48 */
} Coef_829BBAA8;

typedef void (*InverseDct_829BBAA8)(Cinfo_829BBAA8 *cinfo, Comp_829BBAA8 *compptr, short *coef_block,
                                    unsigned char **output_buf, unsigned int output_col);

typedef struct Idct_829BBAA8 {
    void *start_pass;
    InverseDct_829BBAA8 inverse_DCT[10]; /* 0x4 */
} Idct_829BBAA8;

typedef struct Inputctl_829BBAA8 {
    int (*consume_input)(Cinfo_829BBAA8 *cinfo);
} Inputctl_829BBAA8;

struct Cinfo_829BBAA8 {
    int pad0;
    Mem_829BBAA8 *mem; /* 0x4 */
    char pad8[0x24 - 0x8];
    int num_components; /* 0x24 */
    char pad28[0x94 - 0x28];
    int input_scan_number;        /* 0x94 */
    unsigned int input_iMCU_row;  /* 0x98 */
    int output_scan_number;       /* 0x9c */
    unsigned int output_iMCU_row; /* 0xa0 */
    char pada4[0xdc - 0xa4];
    Comp_829BBAA8 *comp_info; /* 0xdc */
    char pade0[0x144 - 0xe0];
    unsigned int total_iMCU_rows; /* 0x144 */
    char pad148[0x1b0 - 0x148];
    Coef_829BBAA8 *coef; /* 0x1b0 */
    char pad1b4[4];
    Inputctl_829BBAA8 *inputctl; /* 0x1b8 */
    char pad1bc[0x1c4 - 0x1bc];
    Idct_829BBAA8 *idct; /* 0x1c4 */
};

int fn_829BBAA8(Cinfo_829BBAA8 *cinfo, unsigned char ***output_buf)
{
    Coef_829BBAA8 *coef = cinfo->coef;
    unsigned int last_iMCU_row = cinfo->total_iMCU_rows - 1;
    unsigned int block_num;
    int ci;
    int block_row;
    int block_rows;
    short (**buffer)[64];
    short (*buffer_ptr)[64];
    unsigned char **output_ptr;
    unsigned int output_col;
    Comp_829BBAA8 *compptr;
    InverseDct_829BBAA8 inverse_DCT;

    while (cinfo->input_scan_number < cinfo->output_scan_number ||
           (cinfo->input_scan_number == cinfo->output_scan_number &&
            cinfo->input_iMCU_row <= cinfo->output_iMCU_row)) {
        if ((*cinfo->inputctl->consume_input)(cinfo) == 0) {
            return 0;
        }
    }

    for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
        if (!compptr->component_needed) {
            continue;
        }
        buffer = (*cinfo->mem->access_virt_barray)(cinfo, coef->whole_image[ci],
                                                   cinfo->output_iMCU_row * compptr->v_samp_factor,
                                                   (unsigned int)compptr->v_samp_factor, 0);
        if (cinfo->output_iMCU_row < last_iMCU_row) {
            block_rows = compptr->v_samp_factor;
        } else {
            block_rows = (int)(compptr->height_in_blocks % compptr->v_samp_factor);
            if (block_rows == 0) {
                block_rows = compptr->v_samp_factor;
            }
        }
        inverse_DCT = cinfo->idct->inverse_DCT[ci];
        output_ptr = output_buf[ci];
        for (block_row = 0; block_row < block_rows; block_row++) {
            buffer_ptr = buffer[block_row];
            output_col = 0;
            for (block_num = 0; block_num < compptr->width_in_blocks; block_num++) {
                (*inverse_DCT)(cinfo, compptr, (short *)buffer_ptr, output_ptr, output_col);
                buffer_ptr++;
                output_col += compptr->DCT_scaled_size;
            }
            output_ptr += compptr->DCT_scaled_size;
        }
    }

    if (++(cinfo->output_iMCU_row) < cinfo->total_iMCU_rows) {
        return 3;
    }
    return 4;
}
