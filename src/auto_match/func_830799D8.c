typedef struct Object_830799D8 {
    char reserved00[0xb0]; /* 0x00 */
    void *source;          /* 0xb0 */
    char reservedb4[0x38]; /* 0xb4 */
    float angle;           /* 0xec */
} Object_830799D8;

extern float fn_8306D688(void *);
extern float fn_8306E890(float, float);
extern float fn_8306EA78(float);
extern float fn_8306E7F8(float, float, float);
extern const float lbl_820BC534;
extern const float lbl_82186E70;

void fn_830799D8(Object_830799D8 *self, float time)
{
    float target = -fn_8306D688(self->source);
    float blend = fn_8306E890(lbl_820BC534, time);
    float delta = fn_8306EA78(target - self->angle);
    self->angle = delta * blend + self->angle;
    self->angle = fn_8306EA78(self->angle);
    fn_8306E7F8(self->angle, lbl_82186E70, 1.2f);
}
