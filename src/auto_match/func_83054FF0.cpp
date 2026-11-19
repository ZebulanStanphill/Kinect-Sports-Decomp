struct Info_83054FF0 {
    int f0;    /* 0x00 */
    int extra; /* 0x04 */
};

struct Frame_83054FF0 {
    float time;           /* 0x00 */
    unsigned char format; /* 0x04 */
};

struct Result_83054FF0 {
    __int64 position;   /* 0x00 */
    Info_83054FF0 info; /* 0x08 */
};

class Source_83054FF0
{
  public:
    virtual void Unused0();
    virtual void Unused4();
    virtual void Unused8();
    virtual void UnusedC();
    virtual void Unused10();
    virtual void Unused14();
    virtual unsigned char GetInfo(int *buffer, __int64 *position, Info_83054FF0 *info);    /* 0x18 */
    virtual void Complete(int ok, __int64 position, void *context, int extra, int status); /* 0x1c */

    char pad4[0x6c];
    unsigned char format; /* 0x70 */
    char pad71[0x3];
    unsigned int pad74 : 2; /* 0x74 */
    unsigned int alternate : 1;
    unsigned int rest74 : 29;
};

class Decoder_83054FF0
{
  public:
    virtual void Unused0();
    virtual void Unused4();
    virtual void Unused8();
    virtual void UnusedC();
    virtual int Decode(int buffer, Frame_83054FF0 *frame, void *context, __int64 *position); /* 0x10 */
    virtual int DecodeAlternate(int buffer, Frame_83054FF0 *frame, void *context,
                                __int64 *position); /* 0x14 */
};

struct Stream_83054FF0 {
    char pad0[0x80];
    Decoder_83054FF0 *decoder; /* 0x80 */
    char pad84[0x14];
    __int64 position; /* 0x98 */
};

extern "C" int fn_83050008(Source_83054FF0 *source);

extern "C" void fn_83054FF0(Stream_83054FF0 *self, Source_83054FF0 *source, void *context, float time)
{
    int buffer;
    Result_83054FF0 result;
    Frame_83054FF0 frame;
    int status;

    if (fn_83050008(source) != 1) {
        source->Complete(0, 0, context, 0, 2);
    } else if (source->GetInfo(&buffer, &result.position, &result.info) == 0) {
        source->Complete(0, 0, context, 0, 0x35);
    } else {
        Decoder_83054FF0 *decoder;

        frame.time = time;
        result.info.extra = 0;
        self->position = result.position;
        frame.format = source->format;
        decoder = self->decoder;
        if ((unsigned char)source->alternate != 0) {
            status = decoder->DecodeAlternate(buffer, &frame, context, &result.position);
        } else {
            status = decoder->Decode(buffer, &frame, context, &result.position);
        }
        source->Complete(1, result.position, context, result.info.extra, status);
    }
}
