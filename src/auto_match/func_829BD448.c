extern void fn_829BCDD0(void);
extern void fn_829BD2A8(void);

typedef struct Cinfo Cinfo;

typedef struct {
    void *(*alloc_small)(Cinfo *cinfo, int pool_id, unsigned int sizeofobject);
} MemMgr;

struct Cinfo {
    int err;
    MemMgr *mem;
    char pad[0x1c0 - 8];
    void *entropy;
};

typedef struct {
    void (*start_pass)(void);
    void (*decode_mcu)(void);
    char pad[0x28 - 8];
    void *dc_derived_tbls[4];
    void *ac_derived_tbls[4];
    char pad2[0xe8 - 0x48];
} HuffEntropy;

void fn_829BD448(Cinfo *cinfo)
{
    HuffEntropy *entropy;
    int i;

    entropy = (HuffEntropy *)(*cinfo->mem->alloc_small)(cinfo, 1, sizeof(HuffEntropy));
    cinfo->entropy = entropy;
    entropy->start_pass = fn_829BD2A8;
    entropy->decode_mcu = fn_829BCDD0;

    for (i = 0; i < 4; i++) {
        entropy->dc_derived_tbls[i] = entropy->ac_derived_tbls[i] = 0;
    }
}
