typedef struct Vec2_82DDFA50 {
    float x;
    float y;
} Vec2_82DDFA50;

void fn_82DDFA50(Vec2_82DDFA50 *table, int index, float x, float y, float *outX, float *outY)
{
    Vec2_82DDFA50 *e = &table[index];
    *outX = e->x;
    *outY = e->y;
    e->x = x;
    e->y = y;
}
