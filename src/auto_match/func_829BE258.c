/* libjpeg jdphuff.c jinit_phuff_decoder */
typedef struct Decompress_829BE258 Decompress_829BE258;
typedef struct { void *(*alloc_small)(Decompress_829BE258 *cinfo, int pool_id, unsigned int size); } MemoryMgr_829BE258;
typedef struct { void (*start_pass)(Decompress_829BE258 *); char pad[0x28]; void *derived_tbls[4]; int pad2; } PhuffEntropy_829BE258;
struct Decompress_829BE258 { int err; MemoryMgr_829BE258 *mem; char pad08[0x1c]; int num_components; char pad28[0x7c]; int (*coef_bits)[64]; char padA8[0x118]; PhuffEntropy_829BE258 *entropy; };
extern void fn_829BDF70(Decompress_829BE258 *cinfo);
void fn_829BE258(Decompress_829BE258 *cinfo)
{
    PhuffEntropy_829BE258 *entropy;
    int *coef_bit_ptr;
    int ci, i;
    entropy = (PhuffEntropy_829BE258 *)(*cinfo->mem->alloc_small)(cinfo, 1, sizeof(PhuffEntropy_829BE258));
    cinfo->entropy = entropy;
    entropy->start_pass = fn_829BDF70;
    for (i = 0; i < 4; i++) {
        entropy->derived_tbls[i] = 0;
    }
    cinfo->coef_bits = (int (*)[64])(*cinfo->mem->alloc_small)(cinfo, 1, cinfo->num_components * 64 * sizeof(int));
    coef_bit_ptr = &cinfo->coef_bits[0][0];
    for (ci = 0; ci < cinfo->num_components; ci++)
        for (i = 0; i < 64; i++)
            *coef_bit_ptr++ = -1;
}
