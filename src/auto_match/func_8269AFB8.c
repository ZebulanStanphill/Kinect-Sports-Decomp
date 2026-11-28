typedef struct Metrics_8269AFB8 {
    int left;
    int right;
    double width;
    double height;
    double rotation;
    float x0;
    float y0;
    float z0;
    float x1;
    float y1;
    float z1;
} Metrics_8269AFB8;

typedef struct Shape_8269AFB8 {
    char reserved[0x44];
    float points[6];
    char padding[0x28];
    Metrics_8269AFB8 *cached;
} Shape_8269AFB8;

extern double fn_8268CE70(int points);
extern double fn_8268CE78(int points);
extern double fn_8268CE80(float *points);
extern double fn_8268CE98(int points);
extern double fn_8268CEB0(float *points);
extern const double lbl_82005708;
extern const double lbl_82005738;
extern const double lbl_82005740;

Metrics_8269AFB8 *fn_8269AFB8(Shape_8269AFB8 *self, Metrics_8269AFB8 *out)
{
    Metrics_8269AFB8 *cached = self->cached;
    if (cached == 0) {
        float *points = self->points;
        double scale;
        double width;
        out->left = (int)fn_8268CE70((int)points);
        out->right = (int)fn_8268CE78((int)points);
        width = fn_8268CE80(points);
        scale = 100.0;
        out->width = width * 100.0;
        out->height = fn_8268CE98((int)points) * scale;
        out->rotation = (fn_8268CEB0(points) * lbl_82005740) * lbl_82005738;
        out->x0 = self->points[0];
        out->y0 = self->points[1];
        out->z0 = self->points[2];
        out->x1 = self->points[3];
        out->y1 = self->points[4];
        out->z1 = self->points[5];
    } else {
        out->left = cached->left;
        out->right = cached->right;
        out->width = cached->width;
        out->height = cached->height;
        out->rotation = cached->rotation;
        out->x0 = cached->x0;
        out->y0 = cached->y0;
        out->z0 = cached->z0;
        out->x1 = cached->x1;
        out->y1 = cached->y1;
        out->z1 = cached->z1;
    }
    return out;
}
