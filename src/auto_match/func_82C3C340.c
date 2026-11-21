int fn_82C3C340(int sampleRate, unsigned int bitRate, int version, unsigned int flags)
{
    int frameSize;
    int half;
    unsigned int bits;
    unsigned int bytes;

    if ((bitRate == 0 && version < 3) || version > 3 || sampleRate <= 0) {
        return 0;
    }
    if (sampleRate <= 8000) {
        frameSize = 512;
    } else if (sampleRate <= 11025) {
        frameSize = 512;
    } else if (sampleRate <= 16000) {
        frameSize = 512;
    } else if (sampleRate <= 22050) {
        frameSize = 1024;
    } else if (sampleRate <= 32000) {
        if (version == 1) {
            frameSize = 1024;
        } else {
            frameSize = 2048;
        }
    } else if (sampleRate <= 44100) {
        frameSize = 2048;
    } else if (sampleRate <= 48000) {
        frameSize = 2048;
    } else if (sampleRate <= 96000) {
        frameSize = 4096;
    } else {
        frameSize = 8192;
    }
    if (version == 3) {
        flags &= 6;
        if (flags == 2) {
            frameSize *= 2;
        } else if (flags == 4) {
            frameSize /= 2;
        } else if (flags == 6) {
            frameSize /= 4;
        }
    } else if (version < 3) {
        bits = frameSize * bitRate;
        half = sampleRate / 2;
        bytes = (bits + half) / sampleRate + 7 >> 3;
        if (bytes == 0 && bits == 0) {
            bitRate = sampleRate;
            bytes = (frameSize * bitRate + half) / sampleRate + 7 >> 3;
        }
        if (bytes <= 1) {
            while (bytes == 0) {
                frameSize *= 2;
                bytes = (frameSize * bitRate + half) / sampleRate + 7 >> 3;
            }
        }
    }
    return frameSize;
}
