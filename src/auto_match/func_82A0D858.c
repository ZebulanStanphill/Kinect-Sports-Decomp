#include "xdk/vectorintrinsics.h"

typedef struct Node_82A0D858 {
    float x;           /* 0x0 */
    float y;           /* 0x4 */
    float z;           /* 0x8 */
    unsigned short id; /* 0xc */
    unsigned short padE;
} Node_82A0D858;

Node_82A0D858 *fn_82A0D858(__vector4 *position, Node_82A0D858 *nodes, int count, float maxDistance,
                           unsigned int id)
{
    Node_82A0D858 *best = 0;
    float bestDistance = 3.402823466e+38F;
    __vector4 delta;
    __vector4 lengthSq;

    do {
        if (nodes->id == id) {
            delta = __vsubfp(*position, *(__vector4 *)nodes);
            lengthSq = __vmsum3fp(delta, delta);
            if (lengthSq.vector4_f32[0] < bestDistance) {
                best = nodes;
                bestDistance = lengthSq.vector4_f32[0];
            }
        }
        nodes++;
    } while (--count != 0);
    if (bestDistance > maxDistance)
        return 0;
    return best;
}
