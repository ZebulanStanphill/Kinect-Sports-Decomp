typedef struct Settings_824D07E0 {
    char pad0[0x2b8];
    float scale;
    int checkPrimary;
    int field2C0;
    float primaryAngle;
    int checkSecondary;
    float secondaryAngle;
    float threshold;
} Settings_824D07E0;

typedef struct Slot_824D07E0 {
    char pad0[0x348];
    float limit;
    char pad34C[0x134];
    float current;
    char pad484[0x178c];
} Slot_824D07E0;

typedef struct State_824D07E0 {
    Slot_824D07E0 slots[2];
    char pad3820[0x1e0];
    Settings_824D07E0 *settings;
} State_824D07E0;

extern float fn_82809868(float radians);
extern float fn_824D0740(State_824D07E0 *self, int index);

int fn_824D07E0(State_824D07E0 *self, int index)
{
    const float one = 1.0f;
    Settings_824D07E0 *settings = self->settings;

    if (settings->checkPrimary) {
        float limit = -(one - fn_82809868(settings->primaryAngle));
        Slot_824D07E0 *slot = &self->slots[index];
        if (slot->limit > limit) {
            float value = fn_824D0740(self, index);
            if (value > slot->current &&
                (value - slot->current) / self->settings->scale > self->settings->threshold)
                return 1;
        }
    }
    settings = self->settings;
    if (settings->checkSecondary) {
        float limit = -(one - fn_82809868(settings->secondaryAngle));
        if (self->slots[index].limit > limit)
            return 1;
    }
    return 0;
}
