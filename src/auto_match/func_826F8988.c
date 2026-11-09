#define __lwsync() __emit(0x7C2004AC)

typedef struct Inner_826F8988 {
    int pad[10];
    int state; /* +0x28 */
} Inner_826F8988;

typedef struct Outer_826F8988 {
    int pad[5];
    Inner_826F8988 *inner; /* +0x14 */
} Outer_826F8988;

int fn_826F8988(Outer_826F8988 *self)
{
    int state = self->inner->state;
    __lwsync();
    return state == 1;
}
