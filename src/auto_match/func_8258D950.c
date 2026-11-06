typedef struct Vec2_8258D950 {
    float x, y;
} Vec2_8258D950;
typedef struct Target_8258D950 {
    char pad[0x28];
    Vec2_8258D950 pos;
} Target_8258D950;
typedef struct Owner_8258D950 {
    char pad[0x1b0];
    Target_8258D950 *first;
    Target_8258D950 *last;
} Owner_8258D950;
extern Target_8258D950 **fn_8258E488(void *, void *, void *);
extern void fn_82230300(void *, int, int);

void fn_8258D950(Owner_8258D950 *self, void *tmp, float x, float y)
{
    struct {
        char buf[8];
        Vec2_8258D950 v;
    } l;
    Target_8258D950 *t = *fn_8258E488(l.buf, &self->first, tmp);
    if (t != self->last) {
        l.v.x = x;
        l.v.y = y;
        t->pos = l.v;
    }
    fn_82230300(tmp, 1, 0);
}
