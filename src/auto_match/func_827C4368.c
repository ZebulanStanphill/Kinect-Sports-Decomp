extern void fn_827C3D60(void);
extern void fn_827C41C0(void);

typedef struct jpeg_memory_mgr {
    void *(*alloc_small)(void *cinfo, int pool_id, unsigned int sizeofobject);
} jpeg_memory_mgr;

typedef struct huff_entropy_decoder {
    void (*start_pass)(void);
    void (*decode_mcu)(void);
    char pad08[0x20];
    void *dc_derived_tbls[4];
    void *ac_derived_tbls[4];
    char pad48[0xac - 0x48];
} huff_entropy_decoder;

typedef struct jpeg_decompress_struct {
    void *err;
    jpeg_memory_mgr *mem;
    char pad08[0x198 - 0x8];
    huff_entropy_decoder *entropy;
} jpeg_decompress_struct;

void fn_827C4368(jpeg_decompress_struct *cinfo)
{
    huff_entropy_decoder *entropy;
    int i;

    entropy = (huff_entropy_decoder *)(*cinfo->mem->alloc_small)(cinfo, 1, sizeof(huff_entropy_decoder));
    cinfo->entropy = entropy;
    entropy->start_pass = fn_827C41C0;
    entropy->decode_mcu = fn_827C3D60;
    for (i = 0; i < 4; i++) {
        entropy->dc_derived_tbls[i] = entropy->ac_derived_tbls[i] = 0;
    }
}
