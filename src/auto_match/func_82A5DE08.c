typedef struct Stream_82A5DE08 {
    unsigned int bytesPerSec;
    unsigned int sampleRate;
    unsigned int loopStart;
    unsigned int loopEnd;
    unsigned char subframes;
    unsigned char channels;
    unsigned short channelMask;
} Stream_82A5DE08;

typedef struct Format_82A5DE08 {
    unsigned short tag;
    unsigned short channels;
    unsigned short pad[2];
    unsigned short numStreams;
    unsigned char loopCount;
    unsigned char version;
    union {
        Stream_82A5DE08 streams[1];
        struct {
            unsigned int pad2[2];
            unsigned int channelMask;
        } ext;
    } u;
} Format_82A5DE08;

extern const unsigned int lbl_8315F70C[];

unsigned int fn_82A5DE08(const Format_82A5DE08 *fmt, int useDefault)
{
    unsigned int mask = 0;
    if (fmt->tag == 0x165) {
        int i;
        for (i = 0; i < fmt->numStreams; i++) {
            unsigned short m = fmt->u.streams[i].channelMask;
            mask |= (m & 0xff) | (m >> 8);
        }
    } else if (fmt->tag == 0x166) {
        mask = fmt->u.ext.channelMask;
    } else if (fmt->tag == 0xfffe) {
        mask = fmt->u.ext.channelMask;
    } else if (fmt->channels == 1) {
        mask = 4;
    } else if (fmt->channels == 2) {
        mask = 3;
    } else if (useDefault != 0) {
        mask = 0;
        if (fmt->channels >= 1 && fmt->channels <= 8)
            mask = lbl_8315F70C[fmt->channels - 1];
    }
    return mask;
}
