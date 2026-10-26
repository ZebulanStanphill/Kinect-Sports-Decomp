// Kinect Sports retail 4D5308C9, function 0x826C02C8 (100 bytes).
//
// Publishes the object vtable, then runs the teardown tail: the member at
// +0x8 is released through fn_826824B0 when present, and fn_8265CA20 runs when
// bit 0 of the flags word is set. The vtable store and the member load touch the
// same object, so both are volatile to keep the retail order (store, then load).
extern unsigned int lbl_8200B5A8;
extern void fn_826824B0(unsigned int object);
extern void fn_8265CA20(void *object);

void *fn_826C02C8(unsigned int *param_1, unsigned int param_2)
{
    unsigned int object;

    *(volatile unsigned int *)param_1 = (unsigned int)&lbl_8200B5A8;
    object = *(volatile unsigned int *)&param_1[1];
    if (object != 0) {
        fn_826824B0(object);
    }
    if (param_2 & 1) {
        fn_8265CA20((void *)param_1);
    }
    return (void *)param_1;
}
