typedef struct Linkage_82BBC340 {
    int words000[16];    /* 0x000 */
    int words040[16];    /* 0x040 */
    int table080[16][4]; /* 0x080 */
    int table180[16][4]; /* 0x180 */
    int table280[16][4]; /* 0x280 */
    char pad380[0x3d0];
    unsigned char valid; /* 0x750 */
} Linkage_82BBC340;

typedef struct Shader_82BBC340 {
    char pad0[0x3d0];
    Linkage_82BBC340 linkage; /* 0x3d0 */
} Shader_82BBC340;

void fn_82BBC340(Shader_82BBC340 *self, Linkage_82BBC340 *out)
{
    int i;
    int j;

    for (i = 0; i < 16; i++) {
        out->words040[i] = self->linkage.words040[i];
        out->words000[i] = self->linkage.words000[i];
        for (j = 0; j < 4; j++) {
            out->table080[i][j] = self->linkage.table080[i][j];
            out->table180[i][j] = self->linkage.table180[i][j];
            out->table280[i][j] = self->linkage.table280[i][j];
        }
    }
    out->valid = 1;
}
