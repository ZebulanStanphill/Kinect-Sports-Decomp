/* Returns the registered object nearest to a position (the position of the
 * object owning `position`), optionally only objects of one type and only
 * within `range` when the range is positive. */

#include "xdk/vectorintrinsics.h"

typedef struct Object_82579AC0 {
    char pad00[0x50];
    __vector4 position; /* 0x50 */
} Object_82579AC0;

typedef struct Entry_82579AC0 {
    Object_82579AC0 *object; /* 0x0 */
    int type;                /* 0x4 */
} Entry_82579AC0;

typedef struct Registry_82579AC0 {
    char pad000[0x310];
    Entry_82579AC0 *begin; /* 0x310 */
    Entry_82579AC0 *end;   /* 0x314 */
} Registry_82579AC0;

extern const float lbl_821954B0[];

Object_82579AC0 *fn_82579AC0(Registry_82579AC0 *self, __vector4 *position, int type, float range)
{
    Object_82579AC0 *nearest;
    __vector4 origin;
    __vector4 offset;
    __vector4 squared;
    float best;
    float distance;
    Entry_82579AC0 *entry;
    Entry_82579AC0 *end;

    nearest = 0;
    /* `position` points at the position member of an object; the original
     * converts it back to the object (a null-preserving cast) and reads the
     * member through it. */
    if (position == 0) {
        origin = ((Object_82579AC0 *)0)->position;
    } else {
        origin = ((Object_82579AC0 *)((char *)position - 0x50))->position;
    }
    if (range > 0.0f) {
        best = range * range;
    } else {
        best = lbl_821954B0[0x20];
    }
    for (entry = self->begin, end = self->end; entry < end; entry++) {
        if (type == 0 || entry->type == type) {
            offset = __vsubfp(origin, entry->object->position);
            squared = __vmsum3fp(offset, offset);
            distance = squared.vector4_f32[0];
            if (distance < best) {
                nearest = entry->object;
                best = distance;
            }
        }
    }
    return nearest;
}
