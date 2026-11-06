/* libjpeg jquant2.c init_error_limit */
typedef struct jpeg_decompress_struct_827CC638 *j_decompress_ptr_827CC638;
typedef struct jpeg_memory_mgr_827CC638 {
    void *(*alloc_small)(void *cinfo, int pool_id, unsigned int sizeofobject);
} jpeg_memory_mgr_827CC638;
typedef struct my_cquantizer_827CC638 {
    char pad[0x28];
    int *error_limiter;
} my_cquantizer_827CC638;
struct jpeg_decompress_struct_827CC638 {
    void *err;
    jpeg_memory_mgr_827CC638 *mem;
    char pad[0x1a8 - 8];
    my_cquantizer_827CC638 *cquantize;
};

#define MAXJSAMPLE 255
#define STEPSIZE ((MAXJSAMPLE + 1) / 16)

void fn_827CC638(j_decompress_ptr_827CC638 cinfo)
{
    my_cquantizer_827CC638 *cquantize = cinfo->cquantize;
    int *table;
    int in, out;

    table = (int *)(*cinfo->mem->alloc_small)((void *)cinfo, 1, (MAXJSAMPLE * 2 + 1) * sizeof(int));
    table += MAXJSAMPLE;
    cquantize->error_limiter = table;

    out = 0;
    for (in = 0; in < STEPSIZE; in++, out++) {
        table[in] = out;
        table[-in] = -out;
    }
    for (; in < STEPSIZE * 3; in++, out += (in & 1) ? 0 : 1) {
        table[in] = out;
        table[-in] = -out;
    }
    for (; in <= MAXJSAMPLE; in++) {
        table[in] = out;
        table[-in] = -out;
    }
}
