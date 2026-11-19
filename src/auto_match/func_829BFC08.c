/* D3DX libjpeg color deconverter: YCCK samples to RGB through the YCC tables and ten lookup tables */
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef unsigned int JDIMENSION;
typedef long INT32;

typedef struct ColorDeconverter_829BFC08 {
    void *start_pass;         /* 0x00 */
    void *color_convert;      /* 0x04 */
    int *Cr_r_tab;            /* 0x08 */
    int *Cb_b_tab;            /* 0x0c */
    INT32 *Cr_g_tab;          /* 0x10 */
    INT32 *Cb_g_tab;          /* 0x14 */
    unsigned int *tables[10]; /* 0x18 */
} ColorDeconverter_829BFC08;

typedef struct DecompressInfo_829BFC08 {
    char pad0[0x70];
    JDIMENSION output_width; /* 0x70 */
    char pad74[0x148 - 0x74];
    JSAMPLE *sample_range_limit; /* 0x148 */
    char pad14c[0x1cc - 0x14c];
    ColorDeconverter_829BFC08 *cconvert; /* 0x1cc */
} DecompressInfo_829BFC08;

void fn_829BFC08(DecompressInfo_829BFC08 *cinfo, JSAMPIMAGE input_buf, JDIMENSION input_row,
                 JSAMPARRAY output_buf, int num_rows)
{
    ColorDeconverter_829BFC08 *cconvert = cinfo->cconvert;
    register int y, cb, cr, k;
    register int red, green, blue;
    register JSAMPROW outptr;
    register JSAMPROW inptr0, inptr1, inptr2, inptr3;
    register JDIMENSION col;
    JDIMENSION num_cols;
    register JSAMPLE *range_limit = cinfo->sample_range_limit;
    register unsigned int *tab0 = cconvert->tables[0];
    register unsigned int *tab1 = cconvert->tables[1];
    register unsigned int *tab2 = cconvert->tables[2];
    register unsigned int *tab3 = cconvert->tables[3];
    register unsigned int *tab4 = cconvert->tables[4];
    register unsigned int *tab5 = cconvert->tables[5];
    register unsigned int *tab6 = cconvert->tables[6];
    register unsigned int *tab7 = cconvert->tables[7];
    register unsigned int *tab8 = cconvert->tables[8];
    register unsigned int *tab9 = cconvert->tables[9];
    register int *Crrtab = cconvert->Cr_r_tab;
    register int *Cbbtab = cconvert->Cb_b_tab;
    register INT32 *Crgtab = cconvert->Cr_g_tab;
    register INT32 *Cbgtab = cconvert->Cb_g_tab;

    num_cols = cinfo->output_width;
    while (--num_rows >= 0) {
        inptr0 = input_buf[0][input_row];
        inptr1 = input_buf[1][input_row];
        inptr2 = input_buf[2][input_row];
        inptr3 = input_buf[3][input_row];
        input_row++;
        outptr = *output_buf++;
        for (col = 0; col < num_cols; col++) {
            y = inptr0[col];
            cb = inptr1[col];
            cr = inptr2[col];
            red = range_limit[y + Crrtab[cr]];
            green = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> 16))];
            blue = range_limit[y + Cbbtab[cb]];
            k = 255 - inptr3[col];
            outptr[0] = (JSAMPLE)((((tab1[red] * tab0[k]) >> 16) * tab4[green] >> 16) * tab7[blue] >> 24);
            outptr[1] = (JSAMPLE)((((tab5[green] * tab0[k]) >> 16) * tab8[blue] >> 16) * tab2[red] >> 24);
            outptr[2] = (JSAMPLE)((((tab9[blue] * tab0[k]) >> 16) * tab3[red] >> 16) * tab6[green] >> 24);
            outptr += 3;
        }
    }
}
