extern float lbl_8200DFF4;
extern float lbl_82014E48;

typedef struct Format_8304C458 {
    char pad0[0x20];
    unsigned int rate; /* 0x20 */
} Format_8304C458;

typedef struct Info_8304C458 {
    char pad0[0x6c];
    Format_8304C458 *format; /* 0x6c */
    char pad70[0x64];
    unsigned short count; /* 0xd4 */
} Info_8304C458;

typedef struct Stream_8304C458 {
    char pad0[0x8];
    Info_8304C458 *info; /* 0x08 */
    char padC[0x20];
    unsigned int offset; /* 0x2c */
    char pad30[0x1c];
    unsigned int start; /* 0x4c */
    unsigned int end;   /* 0x50 */
    char pad54[0x8];
    unsigned int divisor; /* 0x5c */
} Stream_8304C458;

float fn_8304C458(Stream_8304C458 *o)
{
    unsigned short n = o->info->count;
    if (n == 0) {
        return 0.0f;
    }
    return ((float)(o->end - o->start) * (float)(n - 1) + (float)o->offset) / (float)o->divisor *
           lbl_8200DFF4 * lbl_82014E48 / (float)o->info->format->rate;
}
