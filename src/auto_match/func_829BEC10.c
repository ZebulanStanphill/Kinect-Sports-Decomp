/* libjpeg 6b jdsample.c h2v1_upsample (open-source IJG code). */
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef unsigned int JDIMENSION;

struct jpeg_decompress_struct {
    int pad0[28];
    JDIMENSION output_width;            /* 0x70 */
    int pad74[50];
    int max_v_samp_factor;              /* 0x13c */
};
typedef struct jpeg_decompress_struct *j_decompress_ptr;
typedef struct jpeg_component_info jpeg_component_info;

void fn_829BEC10(j_decompress_ptr cinfo, jpeg_component_info *compptr,
                 JSAMPARRAY input_data, JSAMPARRAY *output_data_ptr)
{
    JSAMPARRAY output_data = *output_data_ptr;
    register JSAMPROW inptr, outptr;
    register JSAMPLE invalue;
    JSAMPROW outend;
    int inrow;

    for (inrow = 0; inrow < cinfo->max_v_samp_factor; inrow++) {
        inptr = input_data[inrow];
        outptr = output_data[inrow];
        outend = outptr + cinfo->output_width;
        while (outptr < outend) {
            invalue = *inptr++;
            *outptr++ = invalue;
            *outptr++ = invalue;
        }
    }
}
