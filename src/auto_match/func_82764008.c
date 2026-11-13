typedef struct Scroll_82764008 {
    char pad[0xc];
    int x;
    int y;
    int prevX;
    int prevY;
} Scroll_82764008;

extern void fn_82763948(Scroll_82764008 *self, int dx, int dy, int flags);

void fn_82764008(Scroll_82764008 *self)
{
    if (self->prevX != self->x || self->prevY != self->y)
        fn_82763948(self, self->x - self->prevX, self->y - self->prevY, 0);
}
