/* Shortest time for any of the selected movers (bit i of the mask selects entry i of the mover table)
   to reach one of the target's points (or the default point when it has none): distance (fn_8301E600)
   over the mover's speed (fn_8301EE18). 0 when the target's own mover is selected. */
typedef struct Point_82FF2658 {
    float position[3]; /* 0x0 */
    char padC[0xc];
} Point_82FF2658;

typedef struct Mover_82FF2658 {
    char pad0[0x18];
    float position[3]; /* 0x18 */
    char pad24[0x90 - 0x24];
} Mover_82FF2658;

typedef struct Target_82FF2658 {
    Point_82FF2658 *points;    /* 0x0 */
    unsigned short pointCount; /* 0x4 */
    unsigned char moverMask;   /* 0x6 */
    unsigned char flags : 3;   /* 0x7 */
    signed char ownMover : 5;
} Target_82FF2658;

extern float lbl_82014898;
extern float lbl_831BC80C[];
extern Mover_82FF2658 lbl_83264610[8];
extern float fn_8301E600(const float *a, const float *b);
extern float fn_8301EE18(int mover);

float fn_82FF2658(Target_82FF2658 *target)
{
    unsigned int mask;
    unsigned int mover;
    unsigned int point;
    float best;
    float time;

    mask = target->moverMask;
    mover = 0;
    best = lbl_82014898;
    while (mask != 0) {
        if (mask & 1) {
            if (target->ownMover == mover)
                return 0.0f;
            if (target->pointCount != 0) {
                for (point = 0; point < target->pointCount; point++) {
                    time = fn_8301E600(lbl_83264610[mover].position, target->points[point].position) /
                           fn_8301EE18(mover);
                    best = best - time >= 0.0f ? time : best;
                }
            } else {
                time = fn_8301E600(lbl_83264610[mover].position, lbl_831BC80C) / fn_8301EE18(mover);
                best = best - time >= 0.0f ? time : best;
            }
        }
        mask >>= 1;
        mover++;
    }
    return best;
}
