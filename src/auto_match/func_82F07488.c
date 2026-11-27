typedef struct MacroblockMode_82F07488 {
    char pad00[0x60];
    int quantizer;   /* 0x60 */
    int stepSize;    /* 0x64 */
    int altStepSize; /* 0x68 */
    char pad6c[0xc];
    int edgeMask; /* 0x78 */
} MacroblockMode_82F07488;

typedef struct Decoder_82F07488 {
    char pad0000[0x588];
    int stepSize;    /* 0x0588 */
    int altStepSize; /* 0x058c */
    int halfStep;    /* 0x0590 */
    char pad0594[0x3e8];
    int dquantOn;                /* 0x097c */
    unsigned char dquantBilevel; /* 0x0980 */
    unsigned char altQuantizer;  /* 0x0981 */
    char pad0982[2];
    int dquantEdges; /* 0x0984 */
    char pad0988[0x168];
    int pictureType; /* 0x0af0 */
    char pad0af4[0x14];
    int skipOverlap; /* 0x0b08 */
    char pad0b0c[0xf68];
    int randomQuant; /* 0x1a74 */
    char pad1a78[0x52dc];
    int interlaced; /* 0x6d54 */
    char pad6d58[0xa2c];
    int forcedTransform; /* 0x7784 */
    char pad7788[0x3a4];
    int transformType;       /* 0x7b2c */
    unsigned char maskIntra; /* 0x7b30 */
    unsigned char maskLevel; /* 0x7b31 */
    unsigned char maskLimit; /* 0x7b32 */
    char pad7b33[0xd];
    void *maskPlane; /* 0x7b40 */
} Decoder_82F07488;

extern int fn_82F65350(void);
extern unsigned int fn_82ED3BB0(void *plane, int row, int column);
extern int fn_82ED3678(void *plane, int row, int column, int *a, int *b);

void fn_82F07488(Decoder_82F07488 *self, MacroblockMode_82F07488 *mode, int column, int row)
{
    int useIntraMask;
    int useLevelMask;
    int step;

    mode->quantizer = 2 * self->stepSize + self->halfStep - 1;
    mode->stepSize = self->stepSize;
    mode->altStepSize = self->altStepSize;
    if (self->dquantOn) {
        if (self->dquantEdges) {
            if (mode->edgeMask & self->dquantEdges) {
                mode->quantizer = 2 * self->altQuantizer - 1;
                mode->stepSize = self->altQuantizer;
                mode->altStepSize = mode->stepSize;
            }
        } else if (self->dquantBilevel == 1) {
            useIntraMask = self->maskIntra && self->pictureType == 0;
            useLevelMask = self->maskLevel && self->pictureType == 1 && self->maskLimit >= self->maskLevel;
            if (!useIntraMask && !useLevelMask) {
                if (self->randomQuant) {
                    if (fn_82F65350() & 1) {
                        step = self->stepSize;
                    } else {
                        step = self->altQuantizer;
                    }
                    mode->stepSize = step;
                    mode->quantizer = 2 * step + self->halfStep - 1;
                    mode->altStepSize = mode->stepSize;
                }
            } else if (fn_82ED3BB0(self->maskPlane, row, column)) {
                mode->quantizer = 2 * self->altQuantizer - 1;
                mode->stepSize = self->altQuantizer;
                mode->altStepSize = mode->stepSize;
            }
        } else {
            if (self->randomQuant) {
                step = 1 > (fn_82F65350() & 0x1f) ? 1 : (fn_82F65350() & 0x1f);
                mode->stepSize = step;
                mode->quantizer = 2 * step + self->halfStep - 1;
                mode->altStepSize = mode->stepSize;
            }
        }
    }
    if ((self->transformType & 0x20) && self->interlaced == 0 && self->pictureType != 2 &&
        self->skipOverlap == 0) {
        if (self->forcedTransform) {
            self->transformType = self->forcedTransform;
        } else if (fn_82ED3678(self->maskPlane, row, column, 0, 0) == 1) {
            self->transformType = 0x20;
            if (self->pictureType != 0 && mode->quantizer > 6) {
                self->transformType = 0x2b;
            }
        } else {
            self->transformType = 0x20;
        }
    }
}
