typedef struct View_82763FE8 {
    char pad0[0x14];
    int originX;   /* 0x14 */
    int originY;   /* 0x18 */
} View_82763FE8;

extern void fn_82763C60(View_82763FE8 *self, int x, int y, int width, int height, int flags);

void fn_82763FE8(View_82763FE8 *self, int left, int top, int right, int bottom)
{
    fn_82763C60(self, left - self->originX, top - self->originY, right - left, bottom - top, 0);
}
