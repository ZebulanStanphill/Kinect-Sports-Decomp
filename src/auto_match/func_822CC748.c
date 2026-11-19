/* Reads _root.markerXPos and _root.markerYPos from the movie and returns them divided by the
   movie's width and height (0 stays 0). */

typedef struct Value_822CC748 {
    void *iface;   /* 0x0 */
    int type;      /* 0x4 */
    double number; /* 0x8 */
} Value_822CC748;

typedef struct Marker_822CC748 {
    void *movie;   /* 0x0 */
    void *pending; /* 0x4 */
} Marker_822CC748;

extern const double lbl_821954B0[];
extern int fn_8266FA50(void *movie, Value_822CC748 *value, const char *path);
extern float fn_8266FAC8(void *movie);
extern float fn_8266FB20(void *movie);
extern void fn_82273C88(Value_822CC748 *value);
extern void fn_822315A0(void *object);

void fn_822CC748(Marker_822CC748 *self, float *out)
{
    Value_822CC748 x;
    Value_822CC748 y;
    double zero;

    x.iface = 0;
    x.type = 0;
    y.iface = 0;
    y.type = 0;
    fn_8266FA50(self->movie, &x, "_root.markerXPos");
    fn_8266FA50(self->movie, &y, "_root.markerYPos");
    zero = lbl_821954B0[13];
    if (x.number != zero) {
        double xPos = x.number;
        out[0] = (float)(xPos / fn_8266FAC8(self->movie));
    } else {
        out[0] = 0.0f;
    }
    if (y.number != zero) {
        double yPos = y.number;
        out[1] = (float)(yPos / fn_8266FB20(self->movie));
    } else {
        out[1] = 0.0f;
    }
    fn_82273C88(&y);
    fn_82273C88(&x);
    if (self->pending != 0) {
        fn_822315A0(self->pending);
    }
}
