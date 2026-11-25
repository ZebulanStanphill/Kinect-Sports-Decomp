typedef struct Tracker_827849F0 {
    float values[52];        /* 0x00 */
    unsigned char flags[11]; /* 0xd0 */
} Tracker_827849F0;

/* Clears every flag and value one element at a time (written out, not a loop). */
void fn_827849F0(Tracker_827849F0 *self)
{
    self->flags[0] = 0;
    self->flags[1] = 0;
    self->flags[2] = 0;
    self->flags[3] = 0;
    self->flags[4] = 0;
    self->flags[5] = 0;
    self->flags[6] = 0;
    self->flags[7] = 0;
    self->flags[8] = 0;
    self->flags[9] = 0;
    self->flags[10] = 0;
    self->values[0] = 0.0f;
    self->values[1] = 0.0f;
    self->values[2] = 0.0f;
    self->values[3] = 0.0f;
    self->values[4] = 0.0f;
    self->values[5] = 0.0f;
    self->values[6] = 0.0f;
    self->values[7] = 0.0f;
    self->values[8] = 0.0f;
    self->values[9] = 0.0f;
    self->values[10] = 0.0f;
    self->values[11] = 0.0f;
    self->values[12] = 0.0f;
    self->values[13] = 0.0f;
    self->values[14] = 0.0f;
    self->values[15] = 0.0f;
    self->values[16] = 0.0f;
    self->values[17] = 0.0f;
    self->values[18] = 0.0f;
    self->values[19] = 0.0f;
    self->values[20] = 0.0f;
    self->values[21] = 0.0f;
    self->values[22] = 0.0f;
    self->values[23] = 0.0f;
    self->values[24] = 0.0f;
    self->values[25] = 0.0f;
    self->values[26] = 0.0f;
    self->values[27] = 0.0f;
    self->values[28] = 0.0f;
    self->values[29] = 0.0f;
    self->values[30] = 0.0f;
    self->values[31] = 0.0f;
    self->values[32] = 0.0f;
    self->values[33] = 0.0f;
    self->values[34] = 0.0f;
    self->values[35] = 0.0f;
    self->values[36] = 0.0f;
    self->values[37] = 0.0f;
    self->values[38] = 0.0f;
    self->values[39] = 0.0f;
    self->values[40] = 0.0f;
    self->values[41] = 0.0f;
    self->values[42] = 0.0f;
    self->values[43] = 0.0f;
    self->values[44] = 0.0f;
    self->values[45] = 0.0f;
    self->values[46] = 0.0f;
    self->values[47] = 0.0f;
    self->values[48] = 0.0f;
    self->values[49] = 0.0f;
    self->values[50] = 0.0f;
    self->values[51] = 0.0f;
}
