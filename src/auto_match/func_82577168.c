typedef struct Settings_82577168 {
    unsigned char pad000[0x1e0];
    float offsetX; /* 0x1e0 */
    float offsetY; /* 0x1e4 */
    float minimum; /* 0x1e8 */
    float pad1ec;
    float maximum; /* 0x1f0 */
} Settings_82577168;

typedef struct Owner_82577168 {
    unsigned char pad000[0x1a8];
    Settings_82577168 *settings; /* 0x1a8 */
} Owner_82577168;

typedef struct Scaler_82577168 {
    Owner_82577168 *owner; /* 0x00 */
    unsigned char pad04[0x2c];
    unsigned char active; /* 0x30 */
    unsigned char pad31[3];
    float minimum;      /* 0x34 */
    float maximum;      /* 0x38 */
    float scaledX;      /* 0x3c */
    float scaledY;      /* 0x40 */
    float scale;        /* 0x44 */
    float offsetX;      /* 0x48 */
    float offsetY;      /* 0x4c */
    float elapsed;      /* 0x50 */
    float inverseScale; /* 0x54 */
} Scaler_82577168;

extern const float lbl_821CA45C[2];
extern const float lbl_821917A8[4];
extern const float lbl_8218E8FC[1];

void fn_82577168(Scaler_82577168 *self, float scale)
{
    Settings_82577168 *settings;
    float inverse;
    float centerX;
    float centerY;

    if (scale <= 0.0f) {
        return;
    }
    settings = self->owner->settings;
    inverse = lbl_821CA45C[1] / scale;
    centerX = lbl_821917A8[3];
    centerY = lbl_8218E8FC[0];
    self->minimum = settings->minimum;
    self->maximum = settings->maximum;
    self->offsetX = settings->offsetX;
    self->offsetY = settings->offsetY;
    self->inverseScale = inverse;
    self->scale = scale;
    self->scaledX = (centerX - self->offsetX) * inverse;
    self->scaledY = (centerY - self->offsetY) * inverse;
    if (self->elapsed < 0.0f) {
        self->elapsed = 0.0f;
    }
    self->active = 1;
}
