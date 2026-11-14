typedef struct {
    int unk0[15];
    int state;      /* 0x3c */
} Stream_82F418F0;

extern int fn_82F41870(Stream_82F418F0 *stream, unsigned short *status);

int fn_82F418F0(Stream_82F418F0 *stream, unsigned short *status)
{
    int hr = 0;
    *status = 1;
    if (stream->state != 6)
        hr = fn_82F41870(stream, status);
    else
        *status = 6;
    return hr;
}
