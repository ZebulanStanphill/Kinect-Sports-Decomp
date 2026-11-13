typedef struct Vec3_827FA750 {
    float x, y, z;
} Vec3_827FA750;

typedef struct Obj_827FA750 {
    char pad0[0x34];
    char a[0x10];           /* 0x34 */
    Vec3_827FA750 aVec;     /* 0x44 */
    char pad50[4];
    char b[0x10];           /* 0x54 */
    Vec3_827FA750 bVec;     /* 0x64 */
    char pad70[4];
    char c[0x10];           /* 0x74 */
} Obj_827FA750;

extern void fn_8280DD50(void *p);

void fn_827FA750(Obj_827FA750 *self)
{
    fn_8280DD50(self->b);
    self->bVec.x = 0.0f;
    self->bVec.y = 0.0f;
    self->bVec.z = 0.0f;
    fn_8280DD50(self->a);
    self->aVec.x = 0.0f;
    self->aVec.y = 0.0f;
    self->aVec.z = 0.0f;
    fn_8280DD50(self->c);
}
