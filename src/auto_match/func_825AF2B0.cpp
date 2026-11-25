struct Float3_825AF2B0 {
    float x;
    float y;
    float z;
};

struct Writer_825AF2B0;

extern "C" {
float sqrtf(float x);
double sqrt(double x);
extern float lbl_831D4548;
void fn_8223C200(Writer_825AF2B0 *writer, int bit, int flags);
unsigned char fn_8287C3E8(float value);
double fn_82F65018(double y, double x);
void fn_8223C478(Writer_825AF2B0 *writer, int bits, int flags);
void fn_828E9F18(Writer_825AF2B0 *writer, unsigned __int64 value, int bits);
}

static __forceinline float GetX(Float3_825AF2B0 v)
{
    return v.x;
}

static __forceinline float GetY(Float3_825AF2B0 v)
{
    return v.y;
}

static __forceinline float GetZ(Float3_825AF2B0 v)
{
    return v.z;
}

template <class T> static __forceinline const T &Min(const T &a, const T &b)
{
    return b < a ? b : a;
}

static const unsigned __int64 kDirections = 0x2000;

/* Writes a direction quantised to 13 bits: the three sign bits, then a row (pitch) and column (yaw)
   index of a sphere split into 0x2000 cells. The cell count per side and its square are function-local
   statics (their compiler names map to the game's data by the alias file). */
extern "C" void fn_825AF2B0(Writer_825AF2B0 *writer, const Float3_825AF2B0 *direction)
{
    static const unsigned __int64 side = (unsigned __int64)(float)sqrt((double)kDirections);
    static const unsigned __int64 total = side * side;
    float z = GetZ(*direction);
    float y = GetY(*direction);
    float x = GetX(*direction);
    float ax = x;
    float ay = y;
    int negative;
    double yaw;
    double pitch;
    unsigned __int64 row;
    unsigned __int64 count;
    unsigned __int64 column;

    negative = 0;
    if (x < 0.0f) {
        ax = -x;
        negative = 1;
    }
    fn_8223C200(writer, negative, 0);
    negative = 0;
    if (y < 0.0f) {
        ay = -y;
        negative = 1;
    }
    fn_8223C200(writer, negative, 0);
    negative = 0;
    if (z < 0.0f) {
        z = -z;
        negative = 1;
    }
    fn_8223C200(writer, negative, 0);
    if (fn_8287C3E8(z) && fn_8287C3E8(ax)) {
        yaw = 0.0;
    } else {
        yaw = fn_82F65018(z, ax);
    }
    pitch = fn_82F65018(ay, sqrt((double)z * z + (double)ax * ax));
    yaw = yaw / lbl_831D4548;
    row = (unsigned __int64)((1.0 - pitch / lbl_831D4548) * (double)side);
    row = Min(row, side - 1);
    count = row * 2 + 1;
    column = (unsigned __int64)((double)count * yaw);
    column = Min(column, count - 1);
    fn_8223C478(writer, 13, 0);
    fn_828E9F18(writer, row * row + column, 13);
}
