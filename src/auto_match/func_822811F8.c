typedef struct Vec2_822811F8 {
    float x;
    float y;
} Vec2_822811F8;

typedef struct Settings_822811F8 {
    float value00;        /* 0x00 */
    float value04;        /* 0x04 */
    Vec2_822811F8 pair08; /* 0x08 */
    float value10;        /* 0x10 */
    float value14;        /* 0x14 */
    float value18;        /* 0x18 */
    float value1c;        /* 0x1c */
    Vec2_822811F8 pair20; /* 0x20 */
    float value28;        /* 0x28 */
    float value2c;        /* 0x2c */
    float value30;        /* 0x30 */
    float value34;        /* 0x34 */
    Vec2_822811F8 pair38; /* 0x38 */
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
} Settings_822811F8;

static __forceinline Vec2_822811F8 MakeVec2(float x, float y)
{
    Vec2_822811F8 v;
    v.x = x;
    v.y = y;
    return v;
}

void fn_822811F8(Settings_822811F8 *settings)
{
    settings->value00 = 0.025f;
    settings->value04 = 0.075f;
    settings->pair08 = MakeVec2(1.0f, 0.0f);
    settings->value10 = 1.5f;
    settings->value14 = 10.0f;
    settings->value18 = 0.01f;
    settings->value1c = 0.0f;
    settings->pair20 = MakeVec2(1.0f, 1.0f);
    settings->value28 = 0.75f;
    settings->value2c = 13.0f;
    settings->value30 = 0.01f;
    settings->value34 = 2.66f;
    settings->pair38 = MakeVec2(-0.3f, 1.0f);
    settings->value40 = 1.125f;
    settings->value44 = 19.0f;
    settings->value48 = 0.002f;
    settings->value4c = 1.34f;
    settings->value50 = 0.1f;
    settings->value54 = 3.0f;
    settings->value58 = 0.5f;
    settings->value5c = 3.0f;
    settings->value60 = 9.0f;
    settings->value64 = 1.0f;
    settings->value68 = 1.75f;
    settings->value6c = 0.0f;
}
