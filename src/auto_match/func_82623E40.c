typedef struct Slot_82623E40 {
    float pad0[0x10];
    float data[0x18];       /* 0x40 */
    int active;             /* 0xa0 */
    int padA4[3];
} Slot_82623E40;

extern Slot_82623E40 lbl_83296BE0[2];
extern float lbl_83296890[];

extern void fn_82623B60(float *table, void *target);
extern void fn_82623C90(void *self, int a, int b, float *x, float *y);
extern void fn_82623D60(float x, float y, float *v);

void fn_82623E40(void *self, void *target, float *v, int unused, int b, int a, int index)
{
    float y;
    float x;

    fn_82623B60(lbl_83296BE0[index].active != 0 ? lbl_83296BE0[index].data : lbl_83296890, target);
    fn_82623C90(self, a, b, &x, &y);
    fn_82623D60(x, y, v);
}
