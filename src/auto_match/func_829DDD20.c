typedef struct {
    int pad0;
    int w;
    int h;
} Dims;

typedef struct {
    Dims *dims;
    unsigned char *data;
} Grid;

void fn_829DDD20(Grid *g, int x, int y)
{
    int i;
    if (x > 0 && x < g->dims->w - 1 && y > 0 && y < g->dims->h - 1) {
        i = g->dims->w * y + x;
        g->data[i] = 1;
        g->data[i + 1] = 1;
        i = g->dims->w + i;
        g->data[i] = 1;
        g->data[i + 1] = 1;
    }
}
