typedef struct Macroblock_82F1ABB8 {
    int pad0;
    int codes[6];
    int intra;
    int acPred[6];
    char pad38[0x4a - 0x38];
    unsigned char coded[6];
    char pad50[0x114 - 0x50];
} Macroblock_82F1ABB8;

typedef struct Decoder_82F1ABB8 {
    char pad0[0x2d0];
    unsigned int mbWidth;
    char pad2d4[0xa0c - 0x2d4];
    int advanced;
    char padA10[0xaf0 - 0xa10];
    int mode;
    char padAF4[0x1e54 - 0xaf4];
    Macroblock_82F1ABB8 *mbs;
    char pad1E58[0x2048 - 0x1e58];
    const int *scan;
} Decoder_82F1ABB8;

extern const int lbl_831A7DC0[64];
extern const int lbl_831A7EC0[64];
extern const int lbl_831A7FC0[64];

extern int fn_82F1AA38(Decoder_82F1ABB8 *self, short *coef, short *out, const int *scan);

void fn_82F1ABB8(Decoder_82F1ABB8 *self, unsigned int start, unsigned int end, int mbIndex, short *coef,
                 short *out)
{
    const int *scan = self->scan;
    Macroblock_82F1ABB8 *mb = &self->mbs[mbIndex];
    unsigned int row;
    unsigned int col;
    int i;

    for (row = start; row < end; row++) {
        for (col = 0; col < self->mbWidth; col++) {
            short *c = coef;
            short *o = out;
            unsigned char *coded;
            int *code;
            for (i = 0, coded = mb->coded, code = mb->codes; i < 6; i++, code++) {
                if (coded[i]) {
                    if (self->advanced != 0 && (self->mode == 0 || self->mode == 4)) {
                        scan = mb->intra ? (mb->acPred[i] ? lbl_831A7DC0 : lbl_831A7EC0) : lbl_831A7FC0;
                    }
                    *code = fn_82F1AA38(self, c, o, scan);
                }
                c += 0x80;
                o++;
            }
            mb++;
            coef += 0x300;
            out += 6;
        }
    }
}
