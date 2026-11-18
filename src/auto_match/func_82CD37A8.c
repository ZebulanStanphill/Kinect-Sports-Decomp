typedef struct Layout_82CD37A8 {
    char pad0000[0x54];
    unsigned int width0; /* 0x0054 */
    unsigned int width1; /* 0x0058 */
    unsigned int width2; /* 0x005c */
    char pad0060[0x3894 - 0x60];
    unsigned int totalWidth; /* 0x3894 */
    char pad3898[0x38e0 - 0x3898];
    unsigned int planeCount; /* 0x38e0 */
} Layout_82CD37A8;

void fn_82CD37A8(Layout_82CD37A8 *self)
{
    if (self->planeCount > 4)
        self->planeCount = 4;
    self->width0 = (self->totalWidth / self->planeCount) & ~1;
    if (self->width0 % 4 != 0)
        self->width0 -= 2;
    if (self->planeCount == 1)
        self->width0 = self->totalWidth;
    self->width1 = self->planeCount == 2 ? self->totalWidth : self->width0 * 2;
    if (self->planeCount != 4)
        self->width2 = self->totalWidth;
    else
        self->width2 = self->width0 * 3;
}
