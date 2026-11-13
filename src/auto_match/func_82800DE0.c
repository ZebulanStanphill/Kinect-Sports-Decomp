typedef struct Obj_82800DE0 {
    float x;                 /* 0x00 */
    float y;                 /* 0x04 */
    float value;             /* 0x08 */
    float angle;             /* 0x0c */
    int state;               /* 0x10 */
    unsigned short a;        /* 0x14 */
    unsigned short b;        /* 0x16 */
} Obj_82800DE0;

extern float fn_82809CB0(float v);
extern void fn_82800B90(Obj_82800DE0 *self, float x, float d);

void fn_82800DE0(Obj_82800DE0 *self)
{
    self->state = 0;
    self->angle = 1.0f;
    self->angle = fn_82809CB0(1.0f);
    fn_82800B90(self, 1.0f, 1.0f);
    self->b = 0;
    self->a = 0;
    self->x = 0.0f;
    self->y = 0.0f;
}
