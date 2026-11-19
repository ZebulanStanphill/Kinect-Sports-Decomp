extern float lbl_8200DFF4;
extern float lbl_82014E48;

typedef struct Format_8304B8B0 {
    char pad0[0x20];
    unsigned int rate; /* 0x20 */
} Format_8304B8B0;

typedef struct Info_8304B8B0 {
    char pad0[0x6c];
    Format_8304B8B0 *format; /* 0x6c */
    char pad70[0x64];
    unsigned short count; /* 0xd4 */
} Info_8304B8B0;

typedef struct Stream_8304B8B0 {
    char pad0[0x8];
    Info_8304B8B0 *info; /* 0x8 */
    char padC[0x20];
    unsigned int start;  /* 0x2c */
    unsigned int end;    /* 0x30 */
    unsigned int offset; /* 0x34 */
    char pad38[0x4];
    unsigned short divisor; /* 0x3c */
} Stream_8304B8B0;

float fn_8304B8B0(Stream_8304B8B0 *o)
{
    unsigned short n = o->info->count;
    if (n == 0) {
        return 0.0f;
    }
    return ((float)(o->end - o->start) * (float)(n - 1) + (float)o->offset) / (float)o->divisor *
           lbl_8200DFF4 * lbl_82014E48 / (float)o->info->format->rate;
}
