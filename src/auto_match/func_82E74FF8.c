struct Voice_82E74FF8;
typedef struct VoiceVt_82E74FF8 {
    void *slots[0x2d];
    void (*GetState)(struct Voice_82E74FF8 *, unsigned int *);   /* 0xb4 */
} VoiceVt_82E74FF8;
typedef struct Voice_82E74FF8 { VoiceVt_82E74FF8 *vt; } Voice_82E74FF8;

typedef struct Base_82E74FF8 {
    char pad[0x2c];
    unsigned int offset;    /* 0x2c */
} Base_82E74FF8;

typedef struct Obj_82E74FF8 {
    char pad[0x68];
    int enabled;            /* 0x68 */
    unsigned int blockSize; /* 0x6c */
    char pad70[8];
    Base_82E74FF8 *base;    /* 0x78 */
} Obj_82E74FF8;

unsigned int fn_82E74FF8(Obj_82E74FF8 *o, Voice_82E74FF8 *v)
{
    unsigned int samples;
    unsigned int total;

    if (o->enabled == 0) {
        return 1;
    }
    samples = 0;
    v->vt->GetState(v, &samples);
    total = samples;
    if (o->base != 0) {
        total += o->base->offset;
    }
    return total / o->blockSize + 1;
}
