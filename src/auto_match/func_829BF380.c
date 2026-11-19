/* libjpeg 6b jdcolor.c: ycc_rgb_convert */
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef unsigned int JDIMENSION;
typedef int INT32;

typedef struct ColorDeconverter_829BF380 {
    void *start_pass;    /* 0x00 */
    void *color_convert; /* 0x04 */
    int *Cr_r_tab;       /* 0x08 */
    int *Cb_b_tab;       /* 0x0c */
    INT32 *Cr_g_tab;     /* 0x10 */
    INT32 *Cb_g_tab;     /* 0x14 */
} ColorDeconverter_829BF380;

typedef struct DecompressInfo_829BF380 {
    char pad0[0x70];
    JDIMENSION output_width; /* 0x70 */
    char pad74[0x148 - 0x74];
    JSAMPLE *sample_range_limit; /* 0x148 */
    char pad14c[0x1cc - 0x14c];
    ColorDeconverter_829BF380 *cconvert; /* 0x1cc */
} DecompressInfo_829BF380;

#define SCALEBITS 16
#define RIGHT_SHIFT(x, shft) ((x) >> (shft))

void fn_829BF380(DecompressInfo_829BF380 *cinfo, JSAMPIMAGE input_buf, JDIMENSION input_row,
                 JSAMPARRAY output_buf, int num_rows)
{
    ColorDeconverter_829BF380 *cconvert = cinfo->cconvert;
    register int y, cb, cr;
    register JSAMPROW outptr;
    register JSAMPROW inptr0, inptr1, inptr2;
    register JDIMENSION col;
    JDIMENSION num_cols = cinfo->output_width;
    register JSAMPLE *range_limit = cinfo->sample_range_limit;
    register int *Crrtab = cconvert->Cr_r_tab;
    register int *Cbbtab = cconvert->Cb_b_tab;
    register INT32 *Crgtab = cconvert->Cr_g_tab;
    register INT32 *Cbgtab = cconvert->Cb_g_tab;

    while (--num_rows >= 0) {
        inptr0 = input_buf[0][input_row];
        inptr1 = input_buf[1][input_row];
        inptr2 = input_buf[2][input_row];
        input_row++;
        outptr = *output_buf++;
        for (col = 0; col < num_cols; col++) {
            y = inptr0[col];
            cb = inptr1[col];
            cr = inptr2[col];
            outptr[0] = range_limit[y + Crrtab[cr]];
            outptr[1] = range_limit[y + ((int)RIGHT_SHIFT(Cbgtab[cb] + Crgtab[cr], SCALEBITS))];
            outptr[2] = range_limit[y + Cbbtab[cb]];
            outptr += 3;
        }
    }
}
