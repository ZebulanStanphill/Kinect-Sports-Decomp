/* libjpeg 6b jdcolor.c: null_convert */
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef unsigned int JDIMENSION;

typedef struct DecompressInfo_829BF450 {
    char pad0[0x24];
    int num_components;
    char pad28[0x70 - 0x28];
    JDIMENSION output_width;
} DecompressInfo_829BF450;

void fn_829BF450(DecompressInfo_829BF450 *cinfo, JSAMPIMAGE input_buf, JDIMENSION input_row,
                 JSAMPARRAY output_buf, int num_rows)
{
    register JSAMPROW inptr, outptr;
    register JDIMENSION count;
    register int num_components = cinfo->num_components;
    JDIMENSION num_cols = cinfo->output_width;
    int ci;

    while (--num_rows >= 0) {
        for (ci = 0; ci < num_components; ci++) {
            inptr = input_buf[ci][input_row];
            outptr = output_buf[0] + ci;
            for (count = num_cols; count > 0; count--) {
                *outptr = *inptr++;
                outptr += num_components;
            }
        }
        input_row++;
        output_buf++;
    }
}
