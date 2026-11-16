extern const float lbl_8326B850[43];
extern float fn_82588280(int font, unsigned short character, unsigned short previous, float scale);
extern unsigned int fn_82F64CE0(const unsigned short *text);

float fn_82588130(const unsigned short *text, int font)
{
    const unsigned short *self = text;
    unsigned short previous = 0;
    float scale = 0.0f;
    float width = scale;

    while (fn_82F64CE0(self)) {
        unsigned short character = *self;
        if (character == 10 || character == 32 || character == 0) {
            return width;
        }
        width += fn_82588280(font, character, previous, scale);
        previous = *self++;
    }
    return width - lbl_8326B850[8];
}
