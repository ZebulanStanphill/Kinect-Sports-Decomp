typedef struct Component_82AB8228 {
    float value;        /* 0x0 */
    unsigned int extra; /* 0x4 */
} Component_82AB8228;

typedef struct VecConst_82AB8228 {
    union {
        unsigned int word;

        struct {
            unsigned int index : 8;
            unsigned int used : 4;
            unsigned int types : 8;
            unsigned int pad : 12;
        } bits;
    } flags;

    Component_82AB8228 components[4]; /* 0x4 */
} VecConst_82AB8228;

typedef struct ICA_82AB8228 {
    void *context;                   /* 0x0 */
    void *AllocateSysMem;            /* 0x4 */
    void *FreeSysMem;                /* 0x8 */
    void *pRegistry;                 /* 0xc */
    VecConst_82AB8228 vecConsts[32]; /* 0x10 */
} ICA_82AB8228;

int fn_82AB8228(ICA_82AB8228 *pICA, int vec, unsigned int component, float value)
{
    VecConst_82AB8228 *pConst = &pICA->vecConsts[vec];

    pConst->flags.word |= ((1 << component) & 0xf) << 20;
    pConst->flags.bits.types = (pConst->flags.bits.types & ~(3 << (component * 2))) | (0 << (component * 2));
    pICA->vecConsts[vec].components[component].value = value;
    return 0;
}
