typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_83075D30 {
    __vector4 v;
    char pad[0x10];
} Entry_83075D30;

extern float lbl_82196080;
extern const __vector4 lbl_832654C0;
extern float fn_8306EE38(__vector4 v);
extern __vector4 fn_82F534D8(float x, float y, float z, float w);
extern __vector4 fn_8306ED70(__vector4 a, __vector4 b);
extern __vector4 fn_8306ECD8(void);
extern __vector4 fn_83076CB0(__vector4 a, __vector4 b);
extern void fn_83075D30(__vector4 *out, Entry_83075D30 *entries, int i);
extern __vector4 fn_830760D0(__vector4 q, __vector4 v);
extern void fn_83075D80(Entry_83075D30 *entries, int i, __vector4 v);
extern float fn_8306E7D8(float a, float b);

/* Rotates the 20 path points so that the direction points up, then drops them by the lowest height. */
float fn_8306D898(void *self, Entry_83075D30 *points, __vector4 a, __vector4 b)
{
    int straight;
    __vector4 axis;
    __vector4 rotation;
    __vector4 point;
    __vector4 other;
    unsigned int i;
    int j;
    float height;
    __vector4 *direction;

    if (fn_8306EE38(a) > lbl_82196080) {
        straight = 1;
        axis = fn_82F534D8(a.vector4_f32[0], a.vector4_f32[1], a.vector4_f32[2], 0.0f);
    } else {
        straight = 0;
        if (fn_8306EE38(b) > lbl_82196080) {
            direction = &b;
        } else {
            point = fn_8306ECD8();
            direction = &point;
        }
        axis = *direction;
    }
    rotation = fn_83076CB0(fn_8306ECD8(), fn_8306ED70(axis, lbl_832654C0));
    for (i = 0; i < 20; i++) {
        fn_83075D30(&point, points, i);
        point = fn_830760D0(rotation, point);
        fn_83075D80(points, i, point);
    }
    if (straight) {
        height = -a.vector4_f32[3];
    } else {
        fn_83075D30(&other, points, 15);
        fn_83075D30(&point, points, 19);
        height = fn_8306E7D8(other.vector4_f32[1], point.vector4_f32[1]);
    }
    for (j = 0; j < 20; j++) {
        fn_83075D30(&point, points, j);
        point.vector4_f32[1] = point.vector4_f32[1] - height;
        fn_83075D80(points, j, point);
    }
    return height;
}
