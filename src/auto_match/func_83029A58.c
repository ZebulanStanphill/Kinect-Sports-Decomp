typedef struct Spread_83029A58 {
    char pad00[8];
    float x; /* 0x8 */
    float z; /* 0xc */
} Spread_83029A58;

typedef struct Jitter_83029A58 {
    char pad00[0x10];
    Spread_83029A58 *spread; /* 0x10 */
} Jitter_83029A58;

extern int fn_82F65350(void);

void fn_83029A58(Jitter_83029A58 *self, float *position)
{
    position[0] += ((float)fn_82F65350() * (1.0f / 16383.0f) - 1.0f) * self->spread->x;
    position[2] += ((float)fn_82F65350() * (1.0f / 16383.0f) - 1.0f) * self->spread->z;
}
