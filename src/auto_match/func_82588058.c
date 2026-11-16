extern float fn_82588280(int font, unsigned short character, unsigned short previous, float scale);
extern float fn_825881D8(int font, float scale);
extern unsigned int fn_82F64CE0(const unsigned short *text);

float fn_82588058(const unsigned short *text, int font, float scale)
{
    const unsigned short *self = text;
    unsigned short previous = 0;
    float zero = 0.0f;
    float width = zero;
    float maximum = zero;
    while (fn_82F64CE0(self)) {
        unsigned short character = *self;
        switch ((unsigned int)character) {
        case 10:
            if (width > maximum) {
                maximum = width;
            }
            width = zero;
            break;
        case 32:
            if (width != zero) {
                width += fn_825881D8(font, scale);
            }
            break;
        default:
            width += fn_82588280(font, character, previous, scale);
            break;
        }
        previous = *self++;
    }
    return width > maximum ? width : maximum;
}
