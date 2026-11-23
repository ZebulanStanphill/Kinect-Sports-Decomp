typedef struct Vec2_82272BA0 {
    float x;
    float y;
} Vec2_82272BA0;

typedef struct Settings_82272BA0 {
    float value00;        /* 0x00 */
    float value04;        /* 0x04 */
    Vec2_82272BA0 pair08; /* 0x08 */
    float value10;        /* 0x10 */
    float value14;        /* 0x14 */
    float value18;        /* 0x18 */
    float value1c;        /* 0x1c */
    Vec2_82272BA0 pair20; /* 0x20 */
    float value28;        /* 0x28 */
    float value2c;        /* 0x2c */
    float value30;        /* 0x30 */
    float value34;        /* 0x34 */
    Vec2_82272BA0 pair38; /* 0x38 */
    float value40;        /* 0x40 */
    float value44;        /* 0x44 */
    float value48;        /* 0x48 */
    float value4c;        /* 0x4c */
    float value50;        /* 0x50 */
    float value54;        /* 0x54 */
    float value58;        /* 0x58 */
    float value5c;        /* 0x5c */
    float value60;        /* 0x60 */
    float value64;        /* 0x64 */
    float value68;        /* 0x68 */
    float value6c;        /* 0x6c */
} Settings_82272BA0;

typedef struct Tuning_82272BA0 {
    char pad0[0x118];
    Settings_82272BA0 settings; /* 0x118 */
    char pad188[0x50];
} Tuning_82272BA0;

extern Tuning_82272BA0 lbl_831D0F80;

static __forceinline Vec2_82272BA0 MakeVec2(float x, float y)
{
    Vec2_82272BA0 v;
    v.x = x;
    v.y = y;
    return v;
}

Settings_82272BA0 fn_82272BA0(void)
{
    Settings_82272BA0 s;

    s.value00 = lbl_831D0F80.settings.value00;
    s.value04 = lbl_831D0F80.settings.value04;
    s.pair08 = MakeVec2(lbl_831D0F80.settings.pair08.x, lbl_831D0F80.settings.pair08.y);
    s.value10 = lbl_831D0F80.settings.value10;
    s.value14 = lbl_831D0F80.settings.value14;
    s.value18 = lbl_831D0F80.settings.value18;
    s.value1c = lbl_831D0F80.settings.value1c;
    s.pair20 = MakeVec2(lbl_831D0F80.settings.pair20.x, lbl_831D0F80.settings.pair20.y);
    s.value28 = lbl_831D0F80.settings.value28;
    s.value2c = lbl_831D0F80.settings.value2c;
    s.value30 = lbl_831D0F80.settings.value30;
    s.value34 = lbl_831D0F80.settings.value34;
    s.pair38 = MakeVec2(lbl_831D0F80.settings.pair38.x, lbl_831D0F80.settings.pair38.y);
    s.value40 = lbl_831D0F80.settings.value40;
    s.value44 = lbl_831D0F80.settings.value44;
    s.value48 = lbl_831D0F80.settings.value48;
    s.value4c = lbl_831D0F80.settings.value4c;
    s.value50 = lbl_831D0F80.settings.value50;
    s.value54 = lbl_831D0F80.settings.value54;
    s.value58 = lbl_831D0F80.settings.value58;
    s.value5c = lbl_831D0F80.settings.value5c;
    s.value60 = lbl_831D0F80.settings.value60;
    s.value64 = lbl_831D0F80.settings.value64;
    s.value68 = lbl_831D0F80.settings.value68;
    s.value6c = lbl_831D0F80.settings.value6c;
    return s;
}
