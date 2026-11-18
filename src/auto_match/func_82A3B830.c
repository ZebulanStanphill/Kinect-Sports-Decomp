typedef struct Decoder_82A3B830 {
    char pad0[0x454];
    unsigned char positionSlots[0x400]; /* 0x454 */
} Decoder_82A3B830;

void fn_82A3B830(Decoder_82A3B830 *self)
{
    unsigned char slot;
    int run;
    int i;
    int j;

    self->positionSlots[0] = 0;
    self->positionSlots[1] = 1;
    self->positionSlots[2] = 2;
    self->positionSlots[3] = 3;
    slot = 4;
    i = 4;
    run = 2;
    do {
        for (j = 0; j < run; j++) {
            self->positionSlots[i++] = slot;
        }
        slot++;
        for (j = 0; j < run; j++) {
            self->positionSlots[i++] = slot;
        }
        slot++;
        run <<= 1;
    } while (i < 0x400);
}
