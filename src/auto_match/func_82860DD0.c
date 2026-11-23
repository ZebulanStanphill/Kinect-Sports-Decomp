typedef struct View_82860DD0 {
    char pad0[0x8];
    int width;  /* 0x8 */
    int height; /* 0xc */
    int unitsX; /* 0x10 */
    int unitsY; /* 0x14 */
    char pad18[0xe4 - 0x18];
    float sizeX;   /* 0xe4 */
    float sizeY;   /* 0xe8 */
    float scaleX;  /* 0xec */
    float scaleY;  /* 0xf0 */
    float offsetX; /* 0xf4 */
    float offsetY; /* 0xf8 */
} View_82860DD0;

extern float fn_82809E58(float value);

void fn_82860DD0(View_82860DD0 *self, int x, int y, float offsetX, float offsetY)
{
    self->scaleX = fn_82809E58((float)x / (float)self->width);
    self->sizeX = fn_82809E58((float)self->unitsX * self->scaleX);
    self->scaleY = fn_82809E58((float)y / (float)self->height);
    self->sizeY = fn_82809E58((float)self->unitsY * self->scaleY);
    self->offsetX = offsetX;
    self->offsetY = offsetY;
}
