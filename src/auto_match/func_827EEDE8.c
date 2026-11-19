typedef struct Vec3_827EEDE8 {
    float x;
    float y;
    float z;
} Vec3_827EEDE8;

extern void fn_82810328(const Vec3_827EEDE8 *a, const Vec3_827EEDE8 *b, Vec3_827EEDE8 *out);
extern int fn_827EECE8(const Vec3_827EEDE8 *origin, const Vec3_827EEDE8 *direction, float radiusTerm, float a,
                       const Vec3_827EEDE8 *planes, float maxT, float *bestT, Vec3_827EEDE8 *hitNormal);

int fn_827EEDE8(const Vec3_827EEDE8 *origin, const Vec3_827EEDE8 *direction, const Vec3_827EEDE8 *v0,
                const Vec3_827EEDE8 *v1, const Vec3_827EEDE8 *v2, float radiusTerm, float a, float maxT,
                float *bestT, Vec3_827EEDE8 *hitNormal)
{
    Vec3_827EEDE8 relative;
    Vec3_827EEDE8 edges[2];
    int hit;

    fn_82810328(v0, v1, &edges[0]);
    fn_82810328(v0, v2, &edges[1]);
    fn_82810328(origin, v0, &relative);
    hit = fn_827EECE8(&relative, direction, radiusTerm, a, edges, maxT, bestT, hitNormal);
    fn_82810328(v1, v0, &edges[0]);
    fn_82810328(v1, v2, &edges[1]);
    fn_82810328(origin, v1, &relative);
    hit |= fn_827EECE8(&relative, direction, radiusTerm, a, edges, *bestT, bestT, hitNormal);
    fn_82810328(v2, v1, &edges[0]);
    fn_82810328(v2, v0, &edges[1]);
    fn_82810328(origin, v2, &relative);
    hit |= fn_827EECE8(&relative, direction, radiusTerm, a, edges, *bestT, bestT, hitNormal);
    return hit;
}
