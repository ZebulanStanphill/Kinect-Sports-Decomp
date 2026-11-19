/* D3DX libjpeg color deconverter: inverted CMYK samples to RGB through ten lookup tables */
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef unsigned int JDIMENSION;

typedef struct ColorDeconverter_829BFAA0 {
    void *start_pass;    /* 0x00 */
    void *color_convert; /* 0x04 */
    char pad8[0x10];
    unsigned int *tables[10]; /* 0x18 */
} ColorDeconverter_829BFAA0;

typedef struct DecompressInfo_829BFAA0 {
    char pad0[0x70];
    JDIMENSION output_width; /* 0x70 */
    char pad74[0x1cc - 0x74];
    ColorDeconverter_829BFAA0 *cconvert; /* 0x1cc */
} DecompressInfo_829BFAA0;

void fn_829BFAA0(DecompressInfo_829BFAA0 *cinfo, JSAMPIMAGE input_buf, JDIMENSION input_row,
                 JSAMPARRAY output_buf, int num_rows)
{
    ColorDeconverter_829BFAA0 *cconvert = cinfo->cconvert;
    register JSAMPROW outptr;
    register JSAMPROW inptr0, inptr1, inptr2, inptr3;
    register JDIMENSION col;
    JDIMENSION num_cols = cinfo->output_width;
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
    int c, m, y, k;

    while (--num_rows >= 0) {
        inptr0 = input_buf[0][input_row];
        inptr1 = input_buf[1][input_row];
        inptr2 = input_buf[2][input_row];
        inptr3 = input_buf[3][input_row];
        input_row++;
        outptr = *output_buf++;
        for (col = 0; col < num_cols; col++) {
            c = 255 - inptr0[col];
            m = 255 - inptr1[col];
            y = 255 - inptr2[col];
            k = 255 - inptr3[col];
            outptr[0] = (JSAMPLE)((((tab1[c] * tab0[k]) >> 16) * tab4[m] >> 16) * tab7[y] >> 24);
            outptr[1] = (JSAMPLE)((((tab5[m] * tab0[k]) >> 16) * tab8[y] >> 16) * tab2[c] >> 24);
            outptr[2] = (JSAMPLE)((((tab9[y] * tab0[k]) >> 16) * tab3[c] >> 16) * tab6[m] >> 24);
            outptr += 3;
        }
    }
}
