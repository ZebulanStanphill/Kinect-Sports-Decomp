typedef struct Vec3_830797B8 {
    float x;
    float y;
    float z;
} Vec3_830797B8;

typedef struct Sample_830797B8 {
    float x;         /* 0x00 */
    float z;         /* 0x04 */
    float scale;     /* 0x08 */
    float input;     /* 0x0c */
    float inputLow;  /* 0x10 */
    float inputHigh; /* 0x14 */
} Sample_830797B8;

extern void fn_8307DA20(Vec3_830797B8 *v);
extern float fn_82539560(float v, float inLo, float inHi, float outLo, float outHi);

Vec3_830797B8 fn_830797B8(Sample_830797B8 *samples, int count, Vec3_830797B8 fallback)
{
    Vec3_830797B8 result;
    float weight;
    int i;
    float scaled;
    float totalX;
    float totalZ;

    fn_8307DA20(&result);
    totalX = 0.0f;
    totalZ = 0.0f;
    if (samples != 0 && count > 0) {
        for (i = 0; i < count; i++) {
            weight = fn_82539560(samples[i].input, samples[i].inputLow, samples[i].inputHigh, 1.0f, 0.0f);
            scaled = samples[i].scale * weight;
            result.x = samples[i].x * scaled + result.x;
            result.z = samples[i].z * weight + result.z;
            totalX = scaled + totalX;
            totalZ = weight + totalZ;
        }
    }
    result.x = totalX < 1.0f ? (1.0f - totalX) * fallback.x + result.x : result.x / totalX;
    result.z = totalZ < 1.0f ? (1.0f - totalZ) * fallback.z + result.z : result.z / totalZ;
    result.y = fallback.y;
    return result;
}
