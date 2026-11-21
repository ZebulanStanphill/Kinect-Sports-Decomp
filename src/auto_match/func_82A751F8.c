int fn_82A751F8(int sampleRate, unsigned int bytesPerSec, int version, unsigned int options)
{
    int size;
    unsigned int blocks;
    unsigned int mode;

    if ((bytesPerSec == 0 && version < 3) || version > 3 || sampleRate <= 0) {
        return 0;
    }
    if (sampleRate <= 8000) {
        size = 0x200;
    } else if (sampleRate <= 11025) {
        size = 0x200;
    } else if (sampleRate <= 16000) {
        size = 0x200;
    } else if (sampleRate <= 22050) {
        size = 0x400;
    } else if (sampleRate <= 32000) {
        if (version == 1) {
            size = 0x400;
        } else {
            size = 0x800;
        }
    } else if (sampleRate <= 44100) {
        size = 0x800;
    } else if (sampleRate <= 48000) {
        size = 0x800;
    } else if (sampleRate <= 96000) {
        size = 0x1000;
    } else {
        size = 0x2000;
    }
    if (version == 3) {
        mode = options & 6;
        if (mode == 2) {
            size *= 2;
        } else if (mode == 4) {
            size /= 2;
        } else if (mode == 6) {
            size /= 4;
        }
    } else if (version < 3) {
        blocks = ((size * bytesPerSec + sampleRate / 2) / sampleRate + 7) / 8;
        if (blocks == 0 && size * bytesPerSec == 0) {
            bytesPerSec = sampleRate;
            blocks = ((size * bytesPerSec + sampleRate / 2) / sampleRate + 7) / 8;
        }
        if (blocks <= 1) {
            while (blocks == 0) {
                size *= 2;
                blocks = ((size * bytesPerSec + sampleRate / 2) / sampleRate + 7) / 8;
            }
        }
    }
    return size;
}
