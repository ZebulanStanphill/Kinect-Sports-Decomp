extern double fn_82F68918(double value);

typedef struct Lookup_827B5460 {
    unsigned char first[256];
    unsigned char second[256];
    unsigned char third[256];
} Lookup_827B5460;

Lookup_827B5460 *fn_827B5460(Lookup_827B5460 *table, float first, float second, float third)
{
    float scale = 1.0f / ((second + third) * 2.0f + first);
    float firstStep = scale * first;
    float secondStep = scale * second;
    float thirdStep = scale * third;
    unsigned int i;

    for (i = 0; i < 256; ++i) {
        float sample = (float)i;

        table->first[i] = (unsigned char)fn_82F68918(sample * firstStep);
        table->second[i] = (unsigned char)fn_82F68918(sample * secondStep);
        table->third[i] = (unsigned char)fn_82F68918(sample * thirdStep);
    }
    return table;
}
