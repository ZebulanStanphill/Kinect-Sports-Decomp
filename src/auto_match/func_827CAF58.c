typedef int INT32;
typedef struct jpeg_memory_mgr {
    void *(*alloc_small)(void *cinfo, int pool_id, unsigned int sizeofobject);
} jpeg_memory_mgr;

typedef struct my_color_deconverter {
    void *start_pass;
    void *color_convert;
    int pad8, padc;
    int *Cr_r_tab;
    int *Cb_b_tab;
    INT32 *Cr_g_tab;
    INT32 *Cb_g_tab;
} my_color_deconverter;

typedef struct jpeg_decompress_struct {
    void *err;
    jpeg_memory_mgr *mem;
    char pad[0x1a0 - 8];
    my_color_deconverter *cconvert;
} jpeg_decompress_struct;

#define SCALEBITS 16
#define ONE_HALF ((INT32) 1 << (SCALEBITS-1))
#define FIX(x) ((INT32) ((x) * (1L<<SCALEBITS) + 0.5))
#define RIGHT_SHIFT(x,shft) ((x) >> (shft))
#define MAXJSAMPLE 255
#define CENTERJSAMPLE 128
#define JPOOL_IMAGE 1

void fn_827CAF58(jpeg_decompress_struct *cinfo)
{
    my_color_deconverter *cconvert = cinfo->cconvert;
    int i;
    INT32 x;

    cconvert->Cr_r_tab = (int *)
        (*cinfo->mem->alloc_small)(cinfo, JPOOL_IMAGE, (MAXJSAMPLE + 1) * sizeof(int));
    cconvert->Cb_b_tab = (int *)
        (*cinfo->mem->alloc_small)(cinfo, JPOOL_IMAGE, (MAXJSAMPLE + 1) * sizeof(int));
    cconvert->Cr_g_tab = (INT32 *)
        (*cinfo->mem->alloc_small)(cinfo, JPOOL_IMAGE, (MAXJSAMPLE + 1) * sizeof(INT32));
    cconvert->Cb_g_tab = (INT32 *)
        (*cinfo->mem->alloc_small)(cinfo, JPOOL_IMAGE, (MAXJSAMPLE + 1) * sizeof(INT32));

    for (i = 0, x = -CENTERJSAMPLE; i <= MAXJSAMPLE; i++, x++) {
        cconvert->Cr_r_tab[i] = (int)
            RIGHT_SHIFT(FIX(1.40200) * x + ONE_HALF, SCALEBITS);
        cconvert->Cb_b_tab[i] = (int)
            RIGHT_SHIFT(FIX(1.77200) * x + ONE_HALF, SCALEBITS);
        cconvert->Cr_g_tab[i] = (- FIX(0.71414)) * x;
        cconvert->Cb_g_tab[i] = (- FIX(0.34414)) * x + ONE_HALF;
    }
}
