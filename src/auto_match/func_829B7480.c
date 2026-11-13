/* libjpeg 6b jdmaster.c prepare_for_output_pass (open-source IJG code), second libjpeg copy
   (int boolean, QUANT_2PASS_SUPPORTED not defined). */
typedef int boolean;
typedef unsigned int JDIMENSION;
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;

#define FALSE 0
#define TRUE 1

typedef enum {
    JBUF_PASS_THRU,
    JBUF_SAVE_SOURCE,
    JBUF_CRANK_DEST,
    JBUF_SAVE_AND_PASS
} J_BUF_MODE;

#define JERR_MODE_CHANGE 0x2e
#define JERR_NOT_COMPILED 0x30

typedef struct jpeg_decompress_struct *j_decompress_ptr;
typedef struct jpeg_common_struct *j_common_ptr;

struct jpeg_error_mgr {
    void (*error_exit)(j_common_ptr cinfo);
    void (*emit_message)(j_common_ptr cinfo, int msg_level);
    void (*output_message)(j_common_ptr cinfo);
    void (*format_message)(j_common_ptr cinfo, char *buffer);
    void (*reset_error_mgr)(j_common_ptr cinfo);
    int msg_code;
};

struct jpeg_progress_mgr {
    void (*progress_monitor)(j_common_ptr cinfo);
    long pass_counter;
    long pass_limit;
    int completed_passes;
    int total_passes;
};

struct jpeg_decomp_master {
    void (*prepare_for_output_pass)(j_decompress_ptr cinfo);
    void (*finish_output_pass)(j_decompress_ptr cinfo);
    boolean is_dummy_pass;
};

struct jpeg_input_controller {
    int (*consume_input)(j_decompress_ptr cinfo);
    void (*reset_input_controller)(j_decompress_ptr cinfo);
    void (*start_input_pass)(j_decompress_ptr cinfo);
    void (*finish_input_pass)(j_decompress_ptr cinfo);
    boolean has_multiple_scans;
    boolean eoi_reached;
};

struct jpeg_d_main_controller {
    void (*start_pass)(j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
};

struct jpeg_d_coef_controller {
    void (*start_input_pass)(j_decompress_ptr cinfo);
    int (*consume_data)(j_decompress_ptr cinfo);
    void (*start_output_pass)(j_decompress_ptr cinfo);
};

struct jpeg_d_post_controller {
    void (*start_pass)(j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
};

struct jpeg_inverse_dct {
    void (*start_pass)(j_decompress_ptr cinfo);
};

struct jpeg_upsampler {
    void (*start_pass)(j_decompress_ptr cinfo);
};

struct jpeg_color_deconverter {
    void (*start_pass)(j_decompress_ptr cinfo);
};

struct jpeg_color_quantizer {
    void (*start_pass)(j_decompress_ptr cinfo, boolean is_pre_scan);
};

struct jpeg_decompress_struct {
    struct jpeg_error_mgr *err;                     /* 0x0 */
    void *mem;
    struct jpeg_progress_mgr *progress;             /* 0x8 */
    int pad0c[13];
    boolean buffered_image;                         /* 0x40 */
    boolean raw_data_out;                           /* 0x44 */
    int pad48[3];
    boolean quantize_colors;                        /* 0x54 */
    int dither_mode;
    boolean two_pass_quantize;                      /* 0x5c */
    int desired_number_of_colors;
    boolean enable_1pass_quant;                     /* 0x64 */
    boolean enable_external_quant;
    boolean enable_2pass_quant;                     /* 0x6c */
    int pad70[6];
    JSAMPARRAY colormap;                            /* 0x88 */
    int pad8c[71];
    struct jpeg_decomp_master *master;              /* 0x1a8 */
    struct jpeg_d_main_controller *main;            /* 0x1ac */
    struct jpeg_d_coef_controller *coef;            /* 0x1b0 */
    struct jpeg_d_post_controller *post;            /* 0x1b4 */
    struct jpeg_input_controller *inputctl;         /* 0x1b8 */
    void *marker;
    void *entropy;
    struct jpeg_inverse_dct *idct;                  /* 0x1c4 */
    struct jpeg_upsampler *upsample;                /* 0x1c8 */
    struct jpeg_color_deconverter *cconvert;        /* 0x1cc */
    struct jpeg_color_quantizer *cquantize;         /* 0x1d0 */
};

typedef struct {
    struct jpeg_decomp_master pub;
    int pass_number;
    boolean using_merged_upsample;
    struct jpeg_color_quantizer *quantizer_1pass;
    struct jpeg_color_quantizer *quantizer_2pass;
} my_decomp_master;

typedef my_decomp_master *my_master_ptr;

#define ERREXIT(cinfo, code) \
    ((cinfo)->err->msg_code = (code), (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)))

void fn_829B7480(j_decompress_ptr cinfo)
{
    my_master_ptr master = (my_master_ptr)cinfo->master;

    if (master->pub.is_dummy_pass) {
        ERREXIT(cinfo, JERR_NOT_COMPILED);
    } else {
        if (cinfo->quantize_colors && cinfo->colormap == 0) {
            /* Select new quantization method */
            if (cinfo->two_pass_quantize && cinfo->enable_2pass_quant) {
                cinfo->cquantize = master->quantizer_2pass;
                master->pub.is_dummy_pass = TRUE;
            } else if (cinfo->enable_1pass_quant) {
                cinfo->cquantize = master->quantizer_1pass;
            } else {
                ERREXIT(cinfo, JERR_MODE_CHANGE);
            }
        }
        (*cinfo->idct->start_pass)(cinfo);
        (*cinfo->coef->start_output_pass)(cinfo);
        if (!cinfo->raw_data_out) {
            if (!master->using_merged_upsample)
                (*cinfo->cconvert->start_pass)(cinfo);
            (*cinfo->upsample->start_pass)(cinfo);
            if (cinfo->quantize_colors)
                (*cinfo->cquantize->start_pass)(cinfo, master->pub.is_dummy_pass);
            (*cinfo->post->start_pass)(cinfo,
                                       (master->pub.is_dummy_pass ? JBUF_SAVE_AND_PASS : JBUF_PASS_THRU));
            (*cinfo->main->start_pass)(cinfo, JBUF_PASS_THRU);
        }
    }

    /* Set up progress monitor's pass info if present */
    if (cinfo->progress != 0) {
        cinfo->progress->completed_passes = master->pass_number;
        cinfo->progress->total_passes = master->pass_number + (master->pub.is_dummy_pass ? 2 : 1);
        /* In buffered-image mode, we assume one more output pass if EOI not
         * yet reached, but no more passes if EOI has been reached.
         */
        if (cinfo->buffered_image && !cinfo->inputctl->eoi_reached) {
            cinfo->progress->total_passes += (cinfo->enable_2pass_quant ? 2 : 1);
        }
    }
}
