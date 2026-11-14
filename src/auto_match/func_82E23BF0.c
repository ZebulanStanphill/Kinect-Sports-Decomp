/* Default speaker channel mask for a channel count (SPEAKER_* bits: 4 = front centre, 3 = front left/right, 0x3f = 5.1). */
unsigned int fn_82E23BF0(void *self, unsigned short channels)
{
    switch (channels) {
    case 1: return 4;
    case 2: return 3;
    case 3: return 7;
    case 4: return 0x33;
    case 5: return 0x37;
    case 6: return 0x3f;
    case 7: return 0x13f;
    case 8: return 0x63f;
    default: return 0;
    }
}
