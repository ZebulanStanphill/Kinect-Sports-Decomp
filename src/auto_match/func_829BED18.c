/* libjpeg 6b jdsample.c h2v1_fancy_upsample (open-source IJG code). */
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef unsigned int JDIMENSION;
#define GETJSAMPLE(value)  ((int) (value))

struct jpeg_decompress_struct {
    int pad0[79];
    int max_v_samp_factor;              /* 0x13c */
};
typedef struct jpeg_decompress_struct *j_decompress_ptr;

typedef struct {
    int pad0[10];
    JDIMENSION downsampled_width;       /* 0x28 */
} jpeg_component_info;

void fn_829BED18(j_decompress_ptr cinfo, jpeg_component_info *compptr,
                 JSAMPARRAY input_data, JSAMPARRAY *output_data_ptr)
{
    JSAMPARRAY output_data = *output_data_ptr;
    register JSAMPROW inptr, outptr;
    register int invalue;
    register JDIMENSION colctr;
    int inrow;

    for (inrow = 0; inrow < cinfo->max_v_samp_factor; inrow++) {
        inptr = input_data[inrow];
        outptr = output_data[inrow];
        /* Special case for first column */
        invalue = GETJSAMPLE(*inptr++);
        *outptr++ = (JSAMPLE) invalue;
        *outptr++ = (JSAMPLE) ((invalue * 3 + GETJSAMPLE(*inptr) + 2) >> 2);

        for (colctr = compptr->downsampled_width - 2; colctr > 0; colctr--) {
            /* General case: 3/4 * nearer pixel + 1/4 * further pixel */
            invalue = GETJSAMPLE(*inptr++) * 3;
            *outptr++ = (JSAMPLE) ((invalue + GETJSAMPLE(inptr[-2]) + 1) >> 2);
            *outptr++ = (JSAMPLE) ((invalue + GETJSAMPLE(*inptr) + 2) >> 2);
        }

        /* Special case for last column */
        invalue = GETJSAMPLE(*inptr);
        *outptr++ = (JSAMPLE) ((invalue * 3 + GETJSAMPLE(inptr[-1]) + 1) >> 2);
        *outptr++ = (JSAMPLE) invalue;
    }
}
