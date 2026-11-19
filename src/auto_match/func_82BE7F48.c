typedef struct Stream_82BE7F48 {
    char pad0[0x28];
    unsigned short rateA; /* 0x28 */
    unsigned short rateB; /* 0x2A */
    int bytesPerSecond;   /* 0x2C */
    char pad30[8];
    unsigned __int64 end;   /* 0x38 */
    unsigned __int64 start; /* 0x40 */
    char pad48[0x54];
    int mode; /* 0x9C */
} Stream_82BE7F48;

extern const float lbl_82006848;
extern int lbl_83175240;
extern int lbl_83175244;

int fn_82BE7F48(Stream_82BE7F48 *stream)
{
    float scale = (float)(stream->end - stream->start) * lbl_82006848;
    unsigned short rate;

    if (stream->mode == 3) {
        rate = stream->rateA;
        if (rate != 0) {
            stream->bytesPerSecond = (int)((float)(rate << 10) * scale);
        } else {
            stream->bytesPerSecond = lbl_83175244;
        }
    } else if (stream->mode == 4) {
        rate = stream->rateB;
        if (rate != 0) {
            stream->bytesPerSecond = (int)((float)(rate << 10) * scale);
        } else {
            stream->bytesPerSecond = lbl_83175240;
        }
    } else {
        return 0x327;
    }
    return 0;
}
